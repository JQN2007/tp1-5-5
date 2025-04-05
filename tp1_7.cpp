#include<iostream>
using namespace std;

int main()
{
	//aqui las variables a utilizar//
	//EL SALDO VARIA//
	int saldo = 50000;
	char salir;
	int saldo_depositado;
	int saldo_retirado;
	
	//ciclo repetitivo para que cuando se elija la opcion "4" se pueda salir del programa//
	while(salir != '4')
	{
	//declaramaos la variable para las opciones//
	int opcion = 0;
	
	//menu del cajero//
	cout<<"   ----------------------"<<endl;
	cout<<"  |  CAJERO SANTANDER    |"<<endl;
	cout<<"   ----------------------"<<endl;
	cout<<"   |1> Consultar saldo |"<<endl;
    cout<<"   |2> Depositar dinero|"<<endl;
	cout<<"   |3> Retirar dinero  |"<<endl;
	cout<<"   |4> Salir           |"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Ingrese la opcion a ejecutar: "<<endl;
	cout<<"------------------------------"<<endl;
	cin>>opcion;
	
	
	//codigo para poder darle sentido a cada opcion del menu del cajero//
	switch(opcion)
	{
		
		//en este caso es si se elije la opcion "1" que es para saber su saldo y aparezca en pantalla//
		case 1:
			{
				cout<<" ----------------------------------"<<endl;
				cout<<"| Su saldo es un total de: "<<"$"<<saldo<<" |"<<endl;
				cout<<" ----------------------------------"<<endl;
				cout<<" "<<endl;
				cout<<"quiere volver al menu?"<<endl;
				cout<<"aprete cualquier tecla"<<endl;
				cin>>salir;
				system("cls");
			}
		break;
		{
		//en este caso si se elije la opcion "2" mostrara en pantalla un mensaje en el que se ingresara cuanto dinero se deposita y un mensjae de exito//
			case 2:
			{
				cout<<"______________________________"<<endl;
				cout<<"cuanto dinero desea depositar?"<<endl;
				cin>>saldo_depositado;
				cout<<"La transaccion de $"<<saldo_depositado<<" peso a sido exitosa"<<endl;
				//para poder guardarlo y asi siempre saber caunto saldo se guarda en la opcion "1"//
				saldo=saldo+saldo_depositado;
				cout<<"______________________________"<<endl;
			}
			    cout<<" "<<endl;
				cout<<"quiere volver al menu?"<<endl;
				cout<<"aprete cualquier tecla"<<endl;
				cin>>salir;
				system("cls");
		}
		break;
		{
			//en este case si se elije la opcion "3" mostrara en pantalla un mensaje para ingresar el dinero a retirar//
			case 3:
				{
			    cout<<"_____________________________________"<<endl;
				cout<<"Cuanto dinero desea retirar?"<<endl;
				cin>>saldo_retirado;
				
				//en caso de que el saldo retirado sea mayor al saldo, msotrara un mensaje de error//
				if(saldo_retirado > saldo)
				{
					cout<<"________________________________________"<<endl;
					cout<<"No puede retirar esa cantidad de dinero."<<endl;
					cout<<"________________________________________"<<endl;
					
				}
				//en caso de que no se cupmla el caso anterior, mostrara un mensjae de exito, sobre cuantos pesos retiro//
				else
				{
					cout<<"Aqui tiene su/s $"<<saldo_retirado<<" pesos, que tenga lindo dia"<<endl;
					cout<<"________________________________________________________________"<<endl;
					saldo=saldo-saldo_retirado;
				}
		     	cout<<" "<<endl;
				cout<<"quiere volver al menu?"<<endl;
				cout<<"aprete cualquier tecla"<<endl;
				cin>>salir;
				system("cls");
				}
		}
		break;
		{
			//para que la opcion "4" cierre automaticamente el programa//
			case 4:
				{
					cout<<"Gracias por usar nuestros servicios santander, vuelva pronto."<<endl;
					return 0;
				}
			}
	
	}
}
}
