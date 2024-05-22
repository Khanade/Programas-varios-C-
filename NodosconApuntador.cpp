/*
Se agregan nodos de # hasta pulsar '0'
*/

#include "stdlib.h"
#include "iostream"

struct nodo{
	int n;
	nodo *sig;
};

using namespace std;

main(){
	nodo *cab,*ult, *p, *aux;
	int a;
	cab=ult=NULL;
	
	do{
		//pedir datos
		cout<<"Ingrese dato: ";
		cin>>a;
		if(a==0)
				break;
		//pedir memoria
		p=(nodo*) malloc(sizeof(struct nodo));
		p->n=a;
		//enlace 
		if(cab==NULL){
			cab=ult=p;
			cab->sig=NULL;
		}
		
	else {
		ult->sig=p;
		ult=ult->sig;
		ult->sig=NULL;
	}
	
}while (true);
//recorrer lista
aux=cab;
while (aux!=NULL){
	cout<<" "<<aux->n;
	aux=aux->sig;
	}
}
