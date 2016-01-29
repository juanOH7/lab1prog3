#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

int factorial(unsigned long int arg);

int main(int argc, char*argv[]){
	const unsigned long int limFact=23;
	double eulerNUM, numUsuario;
	cout<<"1-Euler XD";
	cout<<"Numero :"<<endl;
	cin>>numUsuario;
	for (int i = 0; i < limFact; i++)
	{
		eulerNUM += (pow(numUsuario,i))/factorial(i);
	}
	cout<<"Resultado: "<<eulerNUM<<endl;
	return 0;
}

int factorial(unsigned long int arg){
	if (arg==0)
	{
		return 1;
	}else{
	  return arg*factorial(arg-1);
	}
}