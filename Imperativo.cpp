#include <iostream>
#include <locale>

using namespace std;
const double PI = 3.141592;

class Figura{
  protected:
    float x;
    float y;
  public:
    Figura(float cx=0){
       x = cx;
      }

  virtual float Area() = 0;
};

class Circulo: public Figura{
   public:

   Circulo(float radio){
     x = radio;
   }
   float Area(){
     return PI * x * x;
   }
};

class rectangulo: public Figura
{

 public:
  rectangulo (float base, float altura){
    x = base;
    y = altura;
  }
  float Area(){
    return x * y ;
  }
};
double calcularAreaGeneral(float a, float b){
    float x = a;
    float y = b;
    return x+y;
}
int main(){
   setlocale(LC_ALL, "");

   float b, a, r ,j,k;

   cout << "Entre la base del rectangulo" << endl;
   cin >> b;
   cout << "Entre la altura del rectangulo"<<endl;
   cin >> a;
   cout << "Entre el radio del círculo" << endl;
   cin >> r;

   rectangulo rectan(b,a);
   Circulo  Circ1(r);
   j = Circ1.Area();
   k = rectan.Area();
   cout<<"El area total es: "<< calcularAreaGeneral(j,k)<<endl;
   cout << "El área del circulo es: " << Circ1.Area() << endl;

   cout << "El area del cuadrado es: " << rectan.Area() << endl;
}
