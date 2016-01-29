#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

unsigned long long int factorial( int arg);
bool validarCoord(int coordX1V,int coordX2V,int coordX3V,int coordX4V,int coordY1V,int coordY2V,int coordY3V,int coordY4V);
double distancia(double coordX1D,double coordY1D,double coordX2D,double coordY2D);
double perimetro(double dist1,double dist2,double dist3);
double perimetro2(double dist1,double dist2,double dist3);

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
	double coordX1,coordX2,coordX3,coordX4,coordY1,coordY2,coordY3,coordY4;
	double dist12,dist13,dist34,dist24,distDiag14;
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
	/*if (!validarCoord(coordX1,coordX2,coordX3,coordX4,coordY1,coordY2,coordY3,coordY4))
	{
		cout<<"Error en los puntos";
	}*/
	cout<<"("<<coordX1<<","<<coordY1<<")"<<endl;
	cout<<"("<<coordX2<<","<<coordY2<<")"<<endl;
	cout<<"("<<coordX3<<","<<coordY3<<")"<<endl;
	cout<<"("<<coordX4<<","<<coordY4<<")"<<endl;
	cout<<"Lados del Trapezoide:"<<endl;
	dist12=distancia(coordX1,coordY1,coordX2,coordY2);
	cout<<"Lado 1--"<<dist12<<endl;
	dist13=distancia(coordX1,coordY1,coordX3,coordY3);
	cout<<"Lado 2--"<<dist13<<endl;
	dist34=distancia(coordX3,coordY3,coordX4,coordY4);
	cout<<"Lado 3--"<<dist34<<endl;
	dist24=distancia(coordX2,coordY2,coordX4,coordY4);
	cout<<"Lado 4--"<<dist24<<endl;
	//Trig 1
	cout<<"Lados del Triángulo 1:"<<endl;
	dist12=distancia(coordX1,coordY1,coordX2,coordY2);
	cout<<"Lado 1--"<<dist12<<endl;
	dist24=distancia(coordX2,coordY2,coordX4,coordY4);
	cout<<"Lado 2--"<<dist24<<endl;
	distDiag14=distancia(coordX1,coordY1,coordX4,coordY4);
	cout<<"Lado 3--"<<distDiag14<<endl;	
	//Trig 2
	cout<<"Lados del Triángulo 2:"<<endl;
	dist13=distancia(coordX1,coordY1,coordX3,coordY3);
	cout<<"Lado 1--"<<dist13<<endl;
	dist34=distancia(coordX3,coordY3,coordX4,coordY4);
	cout<<"Lado 2--"<<dist34<<endl;
	distDiag14=distancia(coordX1,coordY1,coordX4,coordY4);
	cout<<"Lado 3--"<<distDiag14<<endl;
	//PErSemiPer
	double semiPer1,semiPer2,per1,per2;
	semiPer2 = perimetro(dist13,dist34,distDiag14);
	semiPer1= perimetro(dist12,dist24,distDiag14);
	per1 = perimetro2(dist12,dist24,distDiag14);
	per2 = perimetro2(dist13,dist34,distDiag14);
	cout<<"Semiperimetro Tri 1: "<<semiPer1<<endl;
	cout<<"perimetro Tri 1"<<per1<<endl;
	cout<<"Semiperimetro Tri 2: "<<semiPer2<<endl;
	cout<<"perimetro Tri 2"<<per2<<endl;
	return 0;
}
bool validarCoord(double coordX1V,double coordX2V,double coordX3V,double coordX4V,double coordY1V,double coordY2V,double coordY3V,double coordY4V){
	//X Val
	if (coordX1V==coordX2V && coordX2V==coordX3V)
	{
		return false;
	}else if(coordX2V==coordX3V && coordX3V==coordX4V){
		return false;
	}else if (coordX1V==coordX2V && coordX2V==coordX4V)
	{
		return false;
	}else if (coordX1V==coordX3V && coordX3V==coordX4V)
	{
		return false;//Y Val
	}else if (coordY1V==coordY2V && coordY2V==coordY3V)
	{
		return false;
	}else if (coordY2V==coordY3V && coordY3V==coordY4V)
	{
		return false;
	}else if (coordY1V==coordY2V && coordY2V==coordY4V)
	{
		return false;
	}else if (coordY1V==coordY3V && coordY3V==coordY4V)
	{
		return false;
	}else{
		return true;
	}
}
double distancia(double coordX1D,double coordY1D,double coordX2D,double coordY2D){
	double dist;
	int xD=coordX2D-coordX1D,yD=coordY2D-coordY1D;
	dist= sqrt((pow(xD,2))+(pow(yD,2)));
	return dist;
}
double perimetro(double dist1,double dist2,double dist3){
	double per = (dist1+dist2+dist3)/2;
	return per;
}
double perimetro2(double dist1,double dist2,double dist3){
	double per2= dist1+dist2+dist3;
	return per2;
}
unsigned long long int factorial(int arg){
	if (arg==0)
	{
		return 1;
	}else{
	  return arg*factorial(arg-1);
	}
}