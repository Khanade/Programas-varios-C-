#include "iostream"
#include "string.h"

using namespace std;

char frase[40];
int a=0,e=0,vi=0,o=0,u=0,total=0;

void leer();
void registrarminusculas();
void registrarmayusculas();
void totalvocales();
void imprimir();

void leer()
{
	cout<<"Digite una frase : "<<endl;
	cin.getline(frase,40,'\n');
}
void registrarminusculas()
{
	for (int i=0;i<40;i++)
	{
		switch(frase[i]){
			case 'a':a++; break;
			case 'e':e++; break;
			case 'i':vi++; break;
			case 'o':o++; break;
			case 'u':u++; break;
		}
	}
	
}

void registrarmayusculas()
{
	for (int i=0;i<40;i++)
	{
		switch(frase[i]){
			case 'A':a++; break;
			case 'E':e++; break;
			case 'I':vi++; break;
			case 'O':o++; break;
			case 'U':u++; break;
		}
	}
	
}

void totalvocales(){
	total=a+e+vi+o+u;
	
}
void imprimir()
{
	cout<<"Cantidad de vocal a: "<<a<<endl;
	cout<<"Cantidad de vocal e: "<<e<<endl;
	cout<<"Cantidad de vocal i: "<<vi<<endl;
	cout<<"Cantidad de vocal o: "<<o<<endl;
	cout<<"Cantidad de vocal u: "<<u<<endl;
	cout<<"Cantidad total de vocales: "<<total;
}
main()
{
	leer();
	registrarminusculas();
	registrarmayusculas();
	totalvocales();
	imprimir();	
}
