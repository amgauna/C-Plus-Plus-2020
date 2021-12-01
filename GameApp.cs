// criando ambientes de nomes

namespace DisneyAnimation_2dGraphics
{
  public class point { }
  }
  
  namespace DreamWorksAnimation_3DGraphics
  {  
    public class point { }
    }
    
using DisneyAnimation_2DGraphics;
using DreamworksAnimation_3DGraphics;

DreamworksAnimation_3DGraphics.Point origin;

namespace GameApp
{
  // expõe as duas instâncias de point
  using DisneyAnimation_2DGraphics;
  using DreamworksAnimation_3DGraphics;

  // Ok: cria-se identificadores únicos para cada instância
  using Point2D = DisneyAnimation_2DGraphics.Point;
  using Point3D = DreamWorksAnimation_3DGraphics.Point;
  class minhaclasse
  {
    Point2D thisPoint;
    Point3D thatPoint;
    }
   }
   
 namespace GameEngine
 {
   class App
   {
     // erro: não reconhecido
     private GameApp.Point2D origin;
   }
 }

  

