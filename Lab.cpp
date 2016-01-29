#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

unsigned long long int factorial( int arg);
bool validarCoord(int coordX1,int coordX2,int coordX3,int coordX4,int coordY1,int coordY2,int coordY3,int coordY4);

int main(int argc, char*argv[]){
	const unsigned long long int limFact=23;
	cout<<"Menú";
	double eulerNUM, numUsuario;
	cout<<"1-Euler XD";
	cout<<"Número :"<<endl;
	cin>>numUsuario;
	for (int i = 0; i < limFact; i++)
	{
		eulerNUM += (pow(numUsuario,i))/factorial(i);
	}
	cout<<"Resultado: "<<eulerNUM<<endl;
	cout<<"Pitágoras ;-;";
	int coordX1,coordX2,coordX3,coordX4,coordY1,coordY2,coordY3,coordY4;
	cout<<"X1:";
	cin>>coordX1;
	cout<<"X2:";
	cin>>coordX2;
	cout<<"X3:";
	cin>>coordX3;
	cout<<"X4:";
	cin>>coordX4;
	cout<<"Y1:";
	cin>>coordY1;
	cout<<"Y2:";
	cin>>coordY2;
	cout<<"Y3:";
	cin>>coordY3;
	cout<<"Y4:";
	cin>>coordY4;
	if (!validarCoord(coordX1,coordX2,coordX3,coordX4,coordY1,coordY2,coordY3,coordY4))
	{
		cout<<"Error en los puntos";
	}
	return 0;
}
bool validarCoord(int coordX1,int coordX2,int coordX3,int coordX4,int coordY1,int coordY2,int coordY3,int coordY4){
	//X Val
	if (coordX1==coordX2 && coordX2==coordX3)
	{
		return false;
	}else if(coordX2==coordX3 && coordX3==coordX4){
		return false;
	}else if (coordX1==coordX2 && coordX2==coordX4)
	{
		return false;
	}else if (coordX1==coordX3 && coordX3==coordX4)
	{
		return false;//Y Val
	}else if (coordY1==coordY2 && coordY2==coordY3)
	{
		return false;
	}else if (coordY2==coordY3 && coordY3==coordY4)
	{
		return false;
	}else if (coordY1==coordY2 && coordY2==coordY4)
	{
		return false;
	}else if (coordY1==coordY3 && coordY3==coordY4)
	{
		return false;
	}else{
		return true;
	}
}
unsigned long long int factorial(int arg){
	if (arg==0)
	{
		return 1;
	}else{
	  return arg*factorial(arg-1);
	}
}