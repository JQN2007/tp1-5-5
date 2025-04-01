#include<iostream>
using namespace std;

int main()
{
	int nota1,nota2,nota3;
	int prom;
	
	cout<<"							INGRESE LAS NOTAS PARA PODER PROMEDIARLAS"<<endl;
    cout<<"ingrese su primer nota: "<<endl;
    cin>>nota1;
    cout<<"ingrese su segunda nota: "<<endl;
    cin>>nota2;
    cout<<"ingrese su tercer y ulrima nota: "<<endl;
    cin>>nota3;
    
    prom=(nota1+nota2+nota3)/3;
    
    if(prom >= 7)
    {
    	system("color 2f");
    	cout<<"felicitaciones, usted promociono"<<endl;
	}
	else if(prom>=4)
	{
		system("color 6f");
		cout<<"Usted no llego a la nota recomendada, tiene un REGULAR"<<endl;
	}
	else 
		{
			system("color 4f");
			cout<<"recontra desaprobado"<<endl;
		}
}

