#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	struct Nodo *siguiente;
}*inicio, *actual, *auxiliar, *aux;

void insertarNodo(int);
void eliminarNodo(int);
void mostrarNodos();

int main(){
 	int opcion, valor;
 	do{
	 	cout << "PROGRAMA SOBRE PILAS\n";
	 	cout << "\nEliga una opcion:\n1. Agregar Nodo\n2. Eliminar nodo\n3. Mostrar nodos\n4. Salir\n\n...?";
	 	cin >> opcion;
	 	cout  << endl;
	 	switch (opcion) {
	 	 	case 1:
	 	 		cout << "Ingrese valor: ";
		 		cin >> valor;
		 		insertarNodo(valor);
		 		cout << "\nNodo agregado\n";
	 	 		break;
	 	 	case 2:
	 	 		cout << "Ingrese valor del nodo: ";
 				cin >> valor;
 	  			eliminarNodo(valor);
 	  			break;
	 	 	case 3:
	 	 		mostrarNodos();
	 	 		break;
	 	 	case 4 :
	 	 		
	 	 		break;
	 	 	default:
	 	 		cout << "Opcion invalida. Reintente...";
	 	 		break;
		 }
	if (opcion != 4){
	 	cin.get();
	 	cin.get();
	 	system("cls");
	}
 	
 	 }while(opcion != 4);		
}

void insertarNodo(int valor){
 	actual=inicio;
 	if (actual==NULL){
	  		auxiliar=new Nodo();
	 		auxiliar->dato=valor;
	 		auxiliar->siguiente=NULL;
	 		inicio=auxiliar;
	 }else{
	 	while (actual->siguiente!=NULL){
		 	actual=actual->siguiente;
		 	
		 }
 		auxiliar=new Nodo();
 		auxiliar->dato=valor;
 		auxiliar->siguiente=NULL;
 		actual->siguiente=auxiliar;
	 }
}

void eliminarNodo(int valor){
 	if(inicio != NULL){
 		aux=NULL;
 		actual=inicio;
 		while((actual != NULL) && (actual->dato != valor)){
 			aux=actual;
 			actual=actual->siguiente;
		 }
 		if (actual == NULL) {
 			cout << "\nNo encontrado\n";
		 }else if (aux == NULL) {
		 	inicio=inicio->siguiente;
		 	delete actual;
		 	cout << "\nNodo eliminado\n";
		 }else{
		 	aux->siguiente=actual->siguiente;
		 	delete actual;
		 	cout << "\nNodo eliminado\n";
		 }
 	}
}

void mostrarNodos(){
 	actual=inicio;
 	cout << endl;
 	while(actual!=NULL){
		cout << "-> " << actual->dato << "  ";
		actual=actual->siguiente;
	}
}

