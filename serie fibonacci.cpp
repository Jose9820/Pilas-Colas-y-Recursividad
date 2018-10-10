#include <iostream>

using namespace std;

long fibonacci(long);

int main(){
 	int cantidad, enesimo, opcion;
 	do{
 		cout << "SERIE DE FIBONACCI";
 		
 	 	if (opcion == 0) {
 	 		cout << "\n\nIngrese cantidad de numeros que desee generar: ";
		 	cin >> cantidad;
		 	int fil = 9;
		 	cout << endl;
		 	for(int i=0; i <cantidad; i++)
		 				        {
		 				        	enesimo=fibonacci(i);
		 				        	cout << enesimo << "\t";
		 				        	if(i==fil)
		 				        	{
		 				        		cout << "\n";
		 				        		fil+=10;
									 }
							 	}
		  }
		cout << "\n\nEliga una opcion:\n0. Continuar\n1. Salir\n\n...?";
 	 	cin >> opcion;
 	 	system("cls");
	 }while(opcion != 1);
}

long fibonacci(long numero) // funcion recursiva para la serie fibonacci
{
 	if(numero==0 || numero==1)
 	{
 		return numero;
 	}
 	else
 	{
 		return fibonacci(numero-1)+ fibonacci(numero-2);
 	}
}
