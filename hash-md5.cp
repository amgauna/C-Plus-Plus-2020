#include <stdio.h>
#include <stdlib.h>
#include <openssl/evp.h>
 
/**
 * Função que retorna o hash MD5 de uma string
 *
 * @param input String cujo MD5 queremos calcular
 * @param output String onde será escrito o MD5 (deve estar previamente alocada)
 */
char * md5FromString( char *input, char *output )
{
    EVP_MD_CTX mdctx;
    const EVP_MD *md;
    unsigned int output_len, i;
    unsigned char uOutput[EVP_MAX_MD_SIZE];
 
    /* Initialize digests table */
    OpenSSL_add_all_digests();
 
    /* You can pass the name of another algorithm supported by your version of OpenSSL here */
    /* For instance, MD2, MD4, SHA1, RIPEMD160 etc. Check the OpenSSL documentation for details */
    md = EVP_get_digestbyname( "MD5" );
 
    if ( ! md )
    {
        printf( "Unable to init MD5 digest\n" );
        exit( 1 );
    }
 
    EVP_MD_CTX_init( &mdctx );
    EVP_DigestInit_ex( &mdctx, md, NULL );
    EVP_DigestUpdate( &mdctx, input, strlen( input ) );
 
    EVP_DigestFinal_ex( &mdctx, uOutput, &output_len );
    EVP_MD_CTX_cleanup( &mdctx );
 
    // zera a string antes de começar a concatenação
    strcpy( output, "" );
    for(i = 0; i < output_len; i++)
    {
        sprintf( output, "%s%02x", output, uOutput[i] );
    }
 
    return output;
}
 
 
main(int argc, char *argv[])
{
    char output[33]; // 32 caracteres mais um para o \0
 
    if ( argc != 2 )
    {
        fprintf( stderr, "Erro. Uso: %s \n", argv[0] );
        exit( 1 );
    }
 
    printf( "MD5( '%s' ) = %s\n", argv[1], md5FromString( argv[1], output ) );
 
    return 0;
}
