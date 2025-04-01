#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	
	cout<<"INGRESE LOS NUMEROS PORFAVOR"<<endl;
	cout<<"Primer Numero:"<<endl;
	cin>>n1;
	cout<<"Segundo Numero: "<<endl;
	cin>>n2;
	cout<<"Tercer Numero: "<<endl;
	cin>>n3;
	
	if(n1 <= 10 && n2 <=10 && n3 <=10)
	{
		cout<<"TODOS LOS NUMEROS SON MENORES A DIEZ"<<endl;
	}
	else
	{
		cout<<"WACHO BOBO, SON MAYORES A DIEZ"<<endl;
	}
}
