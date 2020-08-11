#include <iostream>
#include <fstream>
#include <string>
//Alamcena el triangulo
void Ingresar(int num);
//imprimir el triangualo
void Imprimir();
using namespace std;

int main()
{
  int Numero;

  cout << "Ingrese el tamaño del triangulo: ";
  cin >> Numero;

  Ingresar(Numero);

  return 0;
}

void Ingresar(int num)
{
  int k=num;
  ofstream triangulo;

  triangulo.open("Tri.txt",ios::out);
  for(int i=0;i<num;i++)
  {
    k--;
    for(int j=0;j<k;j++)
    {
      if(i%2==0)
      {
        triangulo << "* ";
      }else
      {
        triangulo << "- ";
      }
    }

    triangulo << endl;
  }
  triangulo.close();

  Imprimir();
}

void Imprimir()
{
  string texto;
  ifstream triangulo;
  triangulo.open("Tri.txt",ios::in);
  while(!triangulo.eof())
  {
    getline(triangulo,texto);
    cout << texto <<endl;

  }
}