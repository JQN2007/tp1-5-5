#include<iostream>
using namespace std;

int main()
{
	int n1;
	
	cout<<"ingrese los numeros porfavor"<<endl;
	
	cout<<"Primer Numero:"<<endl;
	cin>>n1;
	
	if (n1 <= 10)
	{
		cout<<"tiene solo 1 cifra"<<endl;
    }
	else if(n1 <= 100)
	{
		cout<<"tiene 2 cifras anashe"<<endl;
	}
    	else if(n1 <= 1000)
	{
		cout<<"tiene 3 cifras bo"<<endl;
	}
	else
	{
		cout<<"error"<<endl;
	}
	
	}
