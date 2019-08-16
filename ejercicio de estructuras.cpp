#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
	struct alumno {
		long long int codigo;
		char nombre[30];
		long long int cedula;
		char direccion[30];
		char programa[30];
		int notas[10][3];
	};
	struct alumno datos;
	cout<<"Digite su nombre"<<endl<<endl;
	cin.getline(datos.nombre,30);
	cout<<endl;
	cout<<"Digite su direccion"<<endl<<endl;
	cin.getline(datos.direccion,30);
	cout<<endl;
	cout<<"Digite el programa que cursa"<<endl<<endl;
	cin.getline(datos.programa,30);
	cout<<endl;
	cout<<"Digite su codigo"<<endl<<endl;
	cin>>datos.codigo;
	cout<<endl;
	cout<<"Digite su cedula"<<endl<<endl;
	cin>>datos.cedula;
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Digite sus notas del semestre "<<i+1<<endl;
		for(int j=0;j<3;j++)
		{
			cout<<"Digite la nota "<<j+1<<" :";
			cin>>datos.notas[i][j];
		}
	}
	system ("cls");
	cout<<"Nombre: "<<datos.nombre<<endl<<endl;
	cout<<"Direccion: "<<datos.direccion<<endl<<endl;
	cout<<"Programa: "<<datos.programa<<endl<<endl;
	cout<<"Codigo: "<<datos.codigo<<endl<<endl;
	cout<<"Cedula: "<<datos.cedula<<endl<<endl;
	cout<<"    Semestre | Notas"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"\t"<<i+1<<"\t";
		for(int j=0;j<3;j++)
		{
			cout<<datos.notas[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
	
