#include<iostream>
using namespace std;

int main()
{
	int entrada;
	int entrada2;
	int descuento;
	
	cout<<"                                                                             BIENVENIDO AL CIRCO RODAS"<<endl;
	cout<<""<<endl;
	cout<<"Aqui puedes pedir tus entradas online:"<<endl;
	cout<<""<<endl;
	cout<<" __________________________"<<endl;
	cout<<"| 1 entrada = $100         |"<<endl;
	cout<<"|                          |"<<endl;
	cout<<"| 2 entradas = $200        |"<<endl;
	cout<<"|(con un 10% de descuento) |"<<endl;
	cout<<"|                          |"<<endl;
	cout<<"| 3 entradas = $300        |"<<endl;
	cout<<"|(con un 15% de descuento) |"<<endl;
	cout<<"|                          |"<<endl;
	cout<<"| 4 entradas = $400        |"<<endl;
	cout<<"|(con un 20% de descuento) |"<<endl;
	cout<<"|__________________________|"<<endl;
	
	cout<<"Cuantas entradas quiere?"<<endl;
	cin>>entrada;
	
	if (entrada == 1)
	{
		cout<<"Perfecto, son solo $100"<<endl;
	}
	else if (entrada == 2)
	{
			entrada=200;
		entrada2=(10*entrada)/100;
		descuento=entrada-entrada2;
		
		cout<<"Se aplico el descuento de 10%, ahora su descuento es de "<<entrada2<<" pesos!!"<<endl;
		cout<<"El dinero que tuvo que dar fue "<<entrada<<" y ahora con el descuento es de "<<descuento<<" pesos"<<endl;
	}
	else if (entrada == 3)
	{
			entrada=300;
		entrada2=(15*entrada)/100;
		descuento=entrada-entrada2;
		
		cout<<"Se aplico el descuento de 15%, ahora su descuento es de "<<entrada2<<" pesos!!"<<endl;
		cout<<"El dinero que tuvo que dar fue "<<entrada<<" y ahora con el descuento es de "<<descuento<<" pesos"<<endl;
	}
	else if (entrada == 4)
	{
		entrada=400;
		entrada2=(20*entrada)/100;
		descuento=entrada-entrada2;
		
		cout<<"Se aplico el descuento de 20%, ahora su descuento es de "<<entrada2<<" pesos!!"<<endl;
		cout<<"El dinero que tuvo que dar fue "<<entrada<<" y ahora con el descuento es de "<<descuento<<" pesos"<<endl;
	}
}
