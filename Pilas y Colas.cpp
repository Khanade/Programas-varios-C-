#include "iostream"
#include "stdlib.h"
#include "conio.h"


struct nodo{
	int n;
	nodo *siguiente;

};

using namespace std;
int final();
void vaciar();
nodo  *primero, *ultimo;

int inicio(){
	int i;
	  i=0;
	if(primero==NULL){
		final();
	}else{
	nodo *auxiliar;
    auxiliar = (nodo*)malloc(sizeof(struct nodo));
    cout<<"Digite numero: ";
    cin>>auxiliar->n;
    
    if (primero == NULL)
    {
        primero = auxiliar;
        auxiliar->siguiente = NULL;
    }
    else
    {
    	
        auxiliar->siguiente = primero;
        primero = auxiliar;
    }
    
      while (auxiliar!=NULL) {
            auxiliar = auxiliar->siguiente;
            i++;
             }
      
    }
    
    return i;
	
}
int final(){
	  nodo *auxiliar;
      auxiliar= (struct nodo *) malloc (sizeof(struct nodo));
      if (auxiliar==NULL) printf( "No hay memoria disponible!\n");
 	  cout<<"Digite numero: ";
      cin>>auxiliar->n;
      auxiliar->siguiente = NULL;
 
      if (ultimo==NULL) {
         primero = auxiliar;
         ultimo = auxiliar;
         }
      else {
  
           ultimo->siguiente = auxiliar;
        
           ultimo = auxiliar;
      }
      int i;
	  i=0;
      while (auxiliar!=NULL) {
            auxiliar = auxiliar->siguiente;
            i++;
             }
      return i;
				
}
void mostrar(){
    nodo *auxiliar;
 
    
      auxiliar = primero;
      printf("\nMostrando la lista:\n");
      while (auxiliar!=NULL) {
            printf( "%i ",auxiliar->n);
            auxiliar = auxiliar->siguiente;
        
      }
      cout<<"\n\n\nPulse una tecla para continuar...";
      
}
int contar(){
	nodo *auxiliar;
	int i;
	i=0;
      auxiliar = primero;
      while (auxiliar!=NULL) {
            auxiliar = auxiliar->siguiente;
            i++;
            
      }
      if(i==1)
      cout<<"\nHay "<<i<<" nodo."<<endl;
      else cout<<"\nHay "<<i<<" nodos."<<endl;
      cout<<"\n\n\nPulse una tecla para continuar...";
      return i;
}

void promerdiar(){
	nodo *auxiliar;
	float contador=0;
	int i;
	i=0;
      auxiliar = primero;
      cout<<"Mostrando la lista: \n ";
      while (auxiliar!=NULL) {
            printf( "%i ",auxiliar->n);
            contador=contador+auxiliar->n;
            auxiliar = auxiliar->siguiente;
            
            i++;
      }
      cout<<"\n\nLa suma es "<<contador<<""<<endl;
      cout<<"\n\nEl promedio de los datos es "<<contador/i<<""<<endl;
      cout<<"\n\n\nPulse una tecla para continuar...";
}

bool buscar(){
	nodo *auxiliar;
	int i,x,k;
	i=0;
	cout<<"Digite nodo a buscar: ";
	cin>>x;
	
      auxiliar = primero;
    cout<<"\nMostrando lista: \n\n";
      while (auxiliar!=NULL) {
      		
            printf( "%i ",auxiliar->n);
            
            if (auxiliar->n==x){
            
            	k=true;
            }
			auxiliar = auxiliar->siguiente;
			
			
      }
      
      if (k==true)cout<<"\nSe encontro el nodo.\n\n\nPulse una tecla para continuar...";
    	else cout<<"\nNo se encontro el nodo.\n\n\nPulse una tecla para continuar...";
      
}

void insertar(int tam){
	nodo *auxiliar, *auxiliar2,*temp;
      int i,x,k;
      auxiliar = primero;
      /*printf("\nMostrando la lista:\n");
      while (auxiliar!=NULL) {
            printf( "%i ",auxiliar->n);
            auxiliar = auxiliar->siguiente;
        
      }
      cout<<"\n\nDigite posicion de ingreso: ";
      cin>>x;
 	  temp = (nodo*)malloc(sizeof(struct nodo));
     
      
      if(x==1) inicio();
	 //	else if(x==tam) final();
		 else if(x>1&&x<=tam){
		 	cout<<"Digite numero a ingresar: ";
		 	cin>>temp->n;
		 	auxiliar = primero;
		 	for(i=1;i<x;i++){
		 		auxiliar2=auxiliar;
		 		auxiliar=auxiliar->siguiente;
			 }
			 auxiliar2->siguiente=temp;
			 temp->siguiente=auxiliar;
		 }else cout<<"Error. La posicion no existe.\n";
    
      cout<<"\n\n\nPulse una tecla para continuar...";*/
      
      cout<<"Digite nodo delante del cual desea ingresar el dato: ";cin>>x;
      
      while(auxiliar!=NULL){
      	
      	if(auxiliar->n==x){
      		temp = (nodo*)malloc(sizeof(struct nodo));
      		cout<<"Ingrese dato: ";cin>>temp->n;
      		temp->siguiente=auxiliar->siguiente;
      		auxiliar->siguiente=temp;
      		if(auxiliar==ultimo){
      			ultimo=temp;
      		}
      		break;
      	}else auxiliar=auxiliar->siguiente;
      }
      if(auxiliar==NULL)cout<<"Dato no encontrado.";
      cout<<"\n\n\nPulse una tecla para continuar...";
}

int eliminar(int tam){
/*	bool k;
	nodo *auxiliar1, *auxiliar2,*auxiliar;
	auxiliar1=primero;
	auxiliar2=primero;
	auxiliar = primero;
      int i,x;
      cout<<"\nMostrando lista: \n\n";
      while (auxiliar!=NULL) {
      		
            printf( "%i ",auxiliar->n);
            
            if (auxiliar->n==x){
            
            	k=1;
            }
			auxiliar = auxiliar->siguiente;
			
			
      }
      cout<<"\n\nDigite nodo a eliminar: ";cin>>x;
      */
       
    
      /* if (k==1)cout<<"\n\nNodo eliminado.\n\n\n";
    	else cout<<"\nNo se encontro el nodo.\n\n\nPulse una tecla para continuar...";*/
 
	
   /* if(x==auxiliar1->n)
	{

		if(auxiliar1==primero)
		{
			primero=primero->siguiente;
		}
		else if (auxiliar1->siguiente!=NULL)
		{
			auxiliar2->siguiente=auxiliar1->siguiente;
		
		}
		else{
		    ultimo=auxiliar2;
			ultimo->siguiente=NULL;
		}
		if(primero==ultimo){
			free(primero);
		}

	}else cout<<"No se encontró el nodo."<<endl;*/
	
	
	int x;
	nodo *auxiliar,*p, *auxiliar1;
	auxiliar=primero;
	auxiliar1=primero;
	int k;
	
	cout<<"\nDigite nodo a eliminar:"<<endl;
	cin>>x;

	
	

	if(x==auxiliar1->n)
	{
	if(primero==ultimo)
	vaciar();
		if(auxiliar1==primero)
		{
			primero=primero->siguiente;
		
		}
		k++;
	
		}	
	while(auxiliar->siguiente!=NULL)
	{
		if(auxiliar->siguiente->n==x){
		k++;	
		p=auxiliar->siguiente;
		if (p==primero)
		p->siguiente=auxiliar->siguiente;
		if(p==ultimo)
		ultimo = auxiliar;
		auxiliar->siguiente=p->siguiente;
		free (p);
		}else auxiliar=auxiliar->siguiente;	//se puede poner en un else
		
		
	}
	if (k==0)cout<<"\nNo se encontro el nodo."<<endl;
	else if (k!=0) cout<<"\n\nNodo eliminado"<<endl;
	
	 cout<<"\n\n\nPulse una tecla para continuar...";
   	
   
}

void vaciar(){ 
     
      while (primero!=NULL) {
      	primero = ultimo= NULL;
        free(primero);
        }
      cout<<"\n\nLa lista ha sido vaciada\n\n";
     
}

main(){
	
	system("color f0");
	
	primero=ultimo=NULL;
	int opcion;
	int tam;
	
	do {

		cout<<"Digite una opcion: \n1) Agregar nodo al inicio\n2) Agregar nodo al final\n3) Mostrar Lista\n4) Contar nodos \n5) Promediar datos";
		cout<<"\n6) Buscar dato\n7) Insertar nodo\n8) Eliminar nodo\n9) Eliminar lista\n10) Salir\n";
		cin>>opcion;
		switch (opcion){
			
			
			case 1:
			
			tam=inicio();	
			system("cls");
			
			break;
			
			
			
			case 2:
		
			tam=final();	
			system("cls");
			break;
			
			case 3:
				if (primero==NULL){
					system("cls");
					cout<<"\n\nLa lista esta vacia.\n\n\n\nPulse una tecla para continuar...";
					getch();
					system("cls");
					
				}else{
				
					mostrar();
					getch();
					system("cls"); }
			break;
			
			case 4:
				if (primero==NULL){
					system("cls");
					cout<<"\n\nLa lista esta vacia.\n\n\n\nPulse una tecla para continuar...";
					getch();
					system("cls");
				}else{
				
				tam=contar();
				getch();
				system("cls");
				}
			
			break;
			
			case 5:
				if (primero==NULL){
					system("cls");
					cout<<"\n\nLa lista esta vacia.\n\n\n\nPulse una tecla para continuar...";
					getch();
					system("cls");
				}else{
				
				promerdiar();
				getch();
				system("cls");
				}
			break;
			
			case 6:
				if (primero==NULL){
					system("cls");
					cout<<"\n\nLa lista esta vacia.\n\n\n\nPulse una tecla para continuar...";
					getch();
					system("cls");
				}else{
				
				buscar();
				getch();
				system("cls");
				}
			break;
			
			
			case 7:
				
				if (primero==NULL){
					system("cls");
					cout<<"\n\nLa lista esta vacia. \n\n\n\n\n\nNo hay dato delante del cual se pueda ingresar dato.\n\n\n\n\n\n\n\nPulse una tecla para continuar...";
					getch();
					system("cls");
				}else{
				insertar(tam);
				getch();
				system("cls");
				
					}	
			break;
			
			case 8:
			
			if (primero==NULL){
					system("cls");
					cout<<"\n\nLa lista esta vacia.\n\n\n\nPulse una tecla para continuar...";
					getch();
					system("cls");
				}else{
				
				tam=eliminar(tam);
				
				getch();
				system("cls");
				}	
			break;
			
			
			case 9:
			if (primero==NULL){
				system("cls");
				cout<<"\n\nLa lista ya esta vacia.\n\n\n\nPulse una tecla para continuar...";
				getch();
				system("cls");
				}else{
				
				vaciar();
				cout<<"\n\n\nPulse una tecla para continuar...";
				getch();
				system("cls");
				break;
				}
		}
		
	}while(opcion!=10);
	system("cls");
	cout<<"**** Gracias por usar el programa. ****"<<endl;
	getch();
}
