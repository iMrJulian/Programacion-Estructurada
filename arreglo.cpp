#include <iostream>
using namespace std;
char menu();
void cargar(int *,int);
void mostrar(int *,int);
void ordenar(int *,int);
void ordenar(int *,int);
int mayor(int * ,int);
int suma(int *,int);
int buscar(int *,int,int);

int main(){
	int numero[100],may;
	int tamanio;
	char opcion;
	cout<<"De que tamanio desa el arreglo? ";
	cin>>tamanio;
	do{
		opcion=menu();
		switch(opcion){
			case 'c':cout<<"Digite los elementos del arreglo:\n";
			         cargar(numero,tamanio);
			         break;
			case 'm': cout<<"\nLos elementos almacenados son: \n";
			         mostrar(numero,tamanio);
			         break;
			case 'y':cout<<"El mayor es: "<<mayor(numero,tamanio);
			         break;
			case 's':cout << "La suma de todos los numero es " << suma(numero,tamanio);
					break;
			case 'b':int p;
					cout << "Digite la posicion: ";
					cin >> p;
					cout << "la posicion es:  " << buscar(numero,p,tamanio);
					break;
			case 'o':cout << "El orden del arreglo es " << ordenar(numero,tamanio);
		
		}
		
	} while(opcion != 't');
}

char menu(){
	char opcion;
	cout<<"\n  MENU\n";
	cout<<"(C)argar\n";
	cout<<"(M)ostrar\n";
	cout<<"(O)rdenar\n";
	cout<<"(S)umar\n";
	cout<<"Ma(Y)or\n";
	cout<<"(B)uscar\n";
	cout<<"(T)erminar\n";
	cout<<"escoja una opcion: ";
	cin>>opcion;
	return opcion;
}

void cargar(int *numero,int tamanio){
	int k;
	for(k=0;k<tamanio;k++){
		cout<<"dato["<<k+1<<"]= ";
		cin>>numero[k];
	}
}

void mostrar(int *numero,int tamanio){
	int k;
	for(k=0;k<tamanio;k++)
		cout<<numero[k]<<" ";
}

int mayor(int *dato,int t){
	int may=dato[0];
	for(int k=1;k<t;k++)
	   if(dato[k]>may)
	      may=dato[k];
	return may;
}

int suma(int *numero,int tamanio){
	int s=0;
	for(int k=0;k<tamanio;k++)
		s=s+numero[k];
	return s;
}

int buscar (int *numero,int p,int tamanio){
	int k=0;
		while (numero[k]!=p && k!=-2)
			if(k>tamanio)
				k=-2;
			else
				k+=1;
		k=k+1;
	return k;
}

void ordenar (int *numero,int tamanio){
	int o;
	for(int k=0;k<tamanio;k++) 
                for(int j=0;j<tamanio-1;j++) 
                    if(numero[j]<numero[j+1]){
                        o=numero[j]; 
                        numero[j]=numero[j+1]; 
                        numero[j+1]=o;} 
  for(int i=0;i<tamanio;i++) 
        cout<<numero[i]<<endl; 
}
	






