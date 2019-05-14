#include <iostream>

using namespace std;
//PASO 1
//declaracion de nuestras funciones
int producto(int numero);

int main()
{
//PASO 3
//Llamar o invocar a la funcion
cout<<"\tProducto de todos los enteros positivos que son menores que 5."<<endl;
cout<<" El resultado es: "<<producto(5);
return 0;

}
//PASO 2
//Trabajar con la funciòn

int producto(int numero){
int resultado1=1;
int resultado2=1;
int resultado3=1;
int resultado4=1;
int resultado5=1;


resultado1=numero*resultado1;
resultado2=resultado1*(numero-1);
resultado3=resultado2*(numero-2);
resultado4=resultado3*(numero-3);
resultado5=resultado4*(numero-4);
return resultado5;

}


