#include<iostream>
#include<windows.h>
using namespace std;

void funcion_espacio();

int main()
{
	float preguntas,correctas;
	float promedio;
	
	cout<<"Porfavor ingrese el total de las preguntas de la evaluacion.."<<endl;
	cin>>preguntas;
	
	cout<<"Ahora ingresa el total de preguntas que respondiste bien.."<<endl;
	cin>>correctas;
	
	promedio=(correctas/preguntas)*100;
	
	if(promedio == 0)
	{
		funcion_espacio();
		cout<<"..."<<endl;
		Sleep(1000);
		system("cls");
		funcion_espacio();
		cout<<"muy gaga"<<endl;
	}
	
	if(promedio >= 90)
	{
		cout<<"Bien ahi conseguiste el"<<endl;
		funcion_espacio();
		cout<<"                                                                              __________________"<<endl;
	cout<<"                                                                             |                  |"<<endl;
	cout<<"                                                                             |   NIVEL MAXIMO   |"<<endl;
	cout<<"                                                                             |__________________|"<<endl;
		system("color 6");
	}
	
	else if(promedio >= 75)
	{
		cout<<"Bueno por lo menos hiciste, alcanzaste el"<<endl;
		funcion_espacio();
		cout<<"                                                                              __________________"<<endl;
	cout<<"                                                                             |                  |"<<endl;
	cout<<"                                                                             |   NIVEL MEDIO    |"<<endl;
	cout<<"                                                                             |__________________|"<<endl;
		system("color 2");
	}
	else if(promedio >=50)
	{
		cout<<"Mira que bobo, bueno te ganaste este "<<endl;
		funcion_espacio();
		cout<<"                                                                              __________________"<<endl;
	cout<<"                                                                             |                  |"<<endl;
	cout<<"                                                                             |   NIVEL PERUANO  |"<<endl;
	cout<<"                                                                             |__________________|"<<endl;
		system("color 1");
		Sleep(1000);
		system("cls");
		funcion_espacio();
		cout<<"                                                                              __________________"<<endl;
	cout<<"                                                                             |                  |"<<endl;
	cout<<"                                                                             |       digo       |"<<endl;
	cout<<"                                                                             |__________________|"<<endl;
		system("color 1");
		Sleep(1000);
		system("cls");
		funcion_espacio();
		cout<<"                                                                              __________________"<<endl;
	cout<<"                                                                             |                  |"<<endl;
	cout<<"                                                                             |   NIVEL REGULAR  |"<<endl;
	cout<<"                                                                             |__________________|"<<endl;
		system("color 1");
	}
	else if(promedio < 50)
	{
		funcion_espacio();
		cout<<"                                                                             gaga"<<endl;
		Sleep(1000);
		system("cls");
		funcion_espacio();
		cout<<"                                                                              __________________"<<endl;
	cout<<"                                                                             |                  |"<<endl;
	cout<<"                                                                             |  FUERA DE NIVEL  |"<<endl;
	cout<<"                                                                             |__________________|"<<endl;
		system("color 4");
		
	}
}
void funcion_espacio()
{
	cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;cout<<""<<endl;
}
