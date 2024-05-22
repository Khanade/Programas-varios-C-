//Didier Delgado Largo - 20162578135

/*1) Se crearon las clases de cada parte del computador que harán parte de las cotizaciones
  2) En cada clase se pide seleccionar algún producto establecido
  	con su respectivo precio y referencias
  3) En la funcion "proceso" de cada clase, se recibió el entero del swtich-case 
     correspondiente al producto a agregar en la cotización (por medio de condicionales) 
	 para así ir generando cada archivo a medida que se selecciona el producto
  4) La herencia usada fue "pública", por lo cual se usó un solo objeto de tipo "computador"
     en el main para acceder a la funcion CrearArchivo, en la cual se invocan las funciones de 
	 cada clase, validando con un entero bien sean 1 o 2 para guardar los datos 
	 ya sea en el archivo de pc de gama alta o baja, dicho entero se envia a una función de cada clase
  5) Al manejarse solo la parte pública en la herencia, se creó una función en cada clase, la 
  	 cual retornase el valor en pesos de cada clase de producto	
  6) En la clase que hereda (computador), se invocó la función proceso gama alta, portátil y gama baja
     para trabajar directamente con su respectivo archivo	      	  */
  	

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Board{
	protected:
		unsigned long precioB;
	public:
	
		void LeerGBajaB(){
			int num, num2,Opc;
			precioB=num=num2=0;
			do{
			
				system("cls");
				cout<<"Cotizando Board.....\n";
				cout<<"Digite Una opcion\n\t1)Asrock\n\t2)Asus\n\t3)Gigabyte\n\t4)MSI \n";
				cin>>Opc;
			if(Opc<1||Opc>4){
			
					cout<<"\n Ingrese un numero valido\n";
					getch();
				}
			}while(Opc<1||Opc>4);	
			switch(Opc){
				case 1:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)ASROCK A320M-HDV-A.R.-DDR3\n";
						cout<<"\t2)ASROCK AB350 K4-A.R.-DDR3 SLI -\n";
						cout<<"\t3)ASROCK AB350 GAMING ITX AC-A.R DDR4 16GB\t\n";
						do{
						cin>>num2;
						if(num2<1||num2>3)
							cout<<"valor no valido";
						}while(num2<1||num2>3);

						if(num2==1){
							num=1;
							precioB=166000;
						}
						if(num2==2){
							num=2;
							precioB=360000;
						}	
						if(num2==3){
							num=3;
							precioB=380000;
						}
						break;
				}
				case 2:{
						cout<<"Ingrese una opcion\n ";
						cout<<"\t1)ASUS AM1M-A - A.V.R.- DDR3 16GB\n";
						cout<<"\t2)ASUS H110M-A M.2 - A.V.R.- DDR3\n";
						cout<<"\t3)ASUS TUF Z270 MARK 2- A.V.R.- DDR3\n";
						do{
						cin>>num2;
						if(num2<1||num2>3)
							cout<<"valor no valido";
						}while(num2<1||num2>3);


						if(num2==1){
							num=4;
							precioB=100000;
						}
						if(num2==2){
							num=5;
							precioB=210000;
						}	
						if(num2==3){
							num=6;
							precioB=370000;
						}	
					break;
				}
				case 3:{
						cout<<"Ingrese una opcion\n ";
						cout<<"\t1)GIGABYTE H110M-H-A.V.R.-DDR3 32GB\n";
						cout<<"\t2)GIGABYTE H110M-DS2-A.V.R.-DDR3 32GB\n";
						cout<<"\t3)GIGABYTE HX150M-H-A.V./DDR3 32GB\n";
						do{
						cin>>num2;
						if(num2<1||num2>3)
							cout<<"valor no valido";
						}while(num2<1||num2>3);


						if(num2==1){
							num=7;
							precioB=190000;
						}
						if(num2==2){
							num=8;
							precioB=200000;
						}	
						if(num2==3){
							num=9;
							precioB= 310000;
						}
					
					break;
				}
				case 4:{
						cout<<"Ingrese una opcion\n ";
						cout<<"\t1)MSI B250 PRO VH/ A.V.R.\n";
						cout<<"\t2)MSI B250 PRO DVH/ A.V.R.\n";
						cout<<"\t3)MSI B150M GAMING PRO/ A.V.R.\n";
						do{
						cin>>num2;
						if(num2<1||num2>3)
							cout<<"valor no valido";
						}while(num2<1||num2>3);


						if(num2==1){
							num=10;
							precioB=245000;
						}
						if(num2==2){
							num=11;
							precioB=290000;
						}	
						if(num2==3){
							num=12;
							precioB=330000;
						}					
					
					break;
				}
				
				
				
			}
				
			procesoGBajaB(num);	
			
		
	}
	
		void procesoGBajaB(int num){
				ofstream archivo;
				archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
				archivo<<"\n****** CPU ****** "<<endl<<endl;
				archivo<<"Board:";	
				if(num==1)
					archivo<<"\tASROCK A320M-HDV-A.R.-DDR3 32 GB- AM4 166.000\n";
				if(num==2)
					archivo<<"\tASROCK AB350 GAMING K4-A.R.-DDR4 64GB-SLI & CROSSFIRE- 360.000\n";
				if(num==3)
					archivo<<"\tASROCK AB350 GAMING ITX AC-A.R.-Mini-ITX- DDR4 32GB-  380.000\n";
				if(num==4)
					archivo<<"\tASUS AM1M-A - A.V.R.- DDR3 16GB - AM1 100.000\n";
				if(num==5)
					archivo<<"\tASUS H110M-A M.2 - A.V.R.- DDR3 32GB- LGA 1151 210.000\n";
				if(num==6)
					archivo<<"\tASUS TUF Z270 MARK 2- A.V.R.- DDR3 64GB - SLI & CROSSFIRE LGA 1151 370.000\n";
				if(num==7)
					archivo<<"\tGIGABYTE H110M-H-A.V.R.-DDR3 32GB- LGA 1151        190.000\n";
				if(num==8)
					archivo<<"\tGIGABYTE H110M-DS2-A.V.R.-DDR3 32GB- LGA 1151      200.000\n";
				if(num==9)
					archivo<<"\tGIGABYTE HX150M-H-A.V./DDR3 32GB- LGA 1151         310.000\n";
				if(num==10)
					archivo<<"\tMSI B250 PRO VH/ A.V.R./ DDR3 32GB/ LGA 1151       245.000\n";
				if(num==11)
					archivo<<"\tMSI B250 PRO DVH/ A.V.R./ DDR3 64GB/ LGA 1151      290.000\n";
				if(num==12)
					archivo<<"\tMSI B150M GAMING PRO/ A.V.R./ DDR3 32GB/ LGA 1151  330.000\n";
				archivo.close();
		}
		void LeerGAltaB(){
			
			
			int num, num2,Opc;
			precioB=num=num2=0;
			do{
			
				system("cls");
				cout<<"Cotizando Board.....\n";
				cout<<"Digite Una opcion\n\t1)Asrock\n\t2)Asus\n\t3)Gigabyte\n\t4)MSI \n";
				cin>>Opc;
			if(Opc<1||Opc>4){
			
					cout<<"\n Ingrese un numero valido\n";
					getch();
				}
			}while(Opc<1||Opc>4);	
			switch(Opc){
				case 1:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)ASROCK X370 BKILLER SLI - A.R. - DDR4 64GB SLI & CROSSFIRE\n";
						cout<<"\t2)ASROCK X370 TAICHI WIFI - A.R. - DDR4 64GB SLI & CROSSFIRE -\n";
						cout<<"\t3)ASROCK X99 TAICHI - WIFI - A.R. - DDR4 128GB SLI & CROSSFIRE\n";
						cout<<"\t4)ASROCK SUPERCARRIER WIFI - A.V.R. - DDR4 64GB SLI & CROSSFIRE\n";
						cout<<"\t5)ASROCK X299 TAICHI WIFI - A.R. - DDR4 128GB SLI & CROSSFIRE \n";
						do{
						cin>>num2;
						if(num2<1||num2>5)
							cout<<"valor no valido";
						}while(num2<1||num2>5);

						if(num2==1){
							num=1;
							precioB=550000;
						}
						if(num2==2){
							num=2;
							precioB=630000;
						}
						if(num2==3){
							num=3;
							precioB=735000;
						}
						if(num2==4){
							num=4;
							precioB=1100000;
						}

						if(num2==5){
							num=5;
							precioB=900000;
						}
							
					break;
				}
				case 2:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)ASUS H110M-C 6TA Y 7MA GEN SOCKET 1151\n";
						cout<<"\t2)ASUS H110M-A DDR4 6TA Y 7MA GEN 1151 -\n";
						cout<<"\t3)ASUS Z170M-PLUS 6TA Y 7MA GEN SKT 1151\n";
						cout<<"\t4)ASUS Z170-P D3 6TA 7 7MA GEN SOCKET 1151 M.2SATA\n";
						cout<<"\t5)SUS PRIME H270M-PLUS 6TA Y 7MA GEN SOCKET 1151E \n";
						do{
						cin>>num2;
						if(num2<1||num2>5)
							cout<<"valor no valido";
						}while(num2<1||num2>5);

						if(num2==1){
							num=6;
							precioB=235000;
						}
						if(num2==2){
							num=7;
							precioB=225000;
						}
						if(num2==3){
							num=8;
							precioB=560.000;
						}
						if(num2==4){
							num=9;
							precioB=400000;
						}

						if(num2==5){
							num=10;
							precioB=400.000;
						}		
					break;
				}
				case 3:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)GIGABYTE-B250M-DS3H.USB3,0.HDMI.A.V.R.Pciexp.4DDR4.VII\n";
						cout<<"\t2)GIGABYTE-H270M-D3H.USB3,1.HDMI.CROSS.A.V.R.4DDR4.1151 VI \n";
						cout<<"\t3)GIGABYTE-H270-GAMING 3.U3,1.HD.CROSS.A.V.R.4DDR4.1151 VII\n";
						cout<<"\t4)GIGABYTE-Z270X-GAMING 7.3,1.HD.DP.3CROSS.A.V.R.4DDR4.VII\n";
						cout<<"\t5)GIGABYTE-Z270-HD3.U3,0.HDMI.3CROSS.A.V.R.4DDR4.11501 VII \n";
						do{
						cin>>num2;
						if(num2<1||num2>5)
							cout<<"valor no valido";
						}while(num2<1||num2>5);

						if(num2==1){
							num=11;
							precioB=450000;
						}
						if(num2==2){
							num=12;
							precioB=310000;
						}
						if(num2==3){
							num=13;
							precioB=605000;
						}
						if(num2==4){
							num=14;
							precioB=460000;
						}

						if(num2==5){
							num=15;
							precioB=560000;
						}	
					break;
				}
				case 4:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)BOARD MSI H110I PRO AC WIFI 6TA GEN 7MA GEN 1151\n";
						cout<<"\t2)Board MSI X399 Gaming Por Carbono AC\n";
						cout<<"\t3)Board MSI X299 Sli Plus Socket 2066 \n";
						cout<<"\t4)Board MSI Z170a Gaming M7, 6gen Y 7gen, Ddr4, Socket\n";
						cout<<"\t5)Board MSI Z270 Krait Gaming \n";
						do{
						cin>>num2;
						if(num2<1||num2>5)
							cout<<"valor no valido";
						}while(num2<1||num2>5);

						if(num2==1){
							num=16;
							precioB=340000 ;
						}
						if(num2==2){
							num=17;
							precioB=1280000;
						}
						if(num2==3){
							num=18;
							precioB=920000;
						}
						if(num2==4){
							num=19;
							precioB=860000;
						}

						if(num2==5){
							num=20;
							precioB=629000  ;
						}	
					break;
				}
				
				
				
			}
				
			procesoGAltaB(num);	
			
		
		}
		void procesoGAltaB(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
				archivo<<"\n****** CPU ****** "<<endl<<endl;
				archivo<<"Board:";	
				if(num==1)
					archivo<<"\tASROCK X370 BKILLER SLI - A.R. - DDR4 64GB SLI & CROSSFIRE - AM4 RYZEN   550.000\n";
				if(num==2)
					archivo<<"\tASROCK X370 TAICHI WIFI - A.R. - DDR4 64GB SLI & CROSSFIRE - AM4 RYZEN   630.000\n";
				if(num==3)
					archivo<<"\tASROCK X99 TAICHI - WIFI - A.R. - DDR4 128GB SLI & CROSSFIRE - LGA 2011-v3  735.000\n";
				if(num==4)
					archivo<<"\tASROCK SUPERCARRIER WIFI - A.V.R. - DDR4 64GB SLI & CROSSFIRE - LGA 1 1100000\n";
				if(num==5)
					archivo<<"\tASROCK X299 TAICHI WIFI - A.R. - DDR4 128GB SLI & CROSSFIRE - LGA 2066  900000\n";
				if(num==6)
					archivo<<"\tASUS H110M-C 6TA Y 7MA GEN SOCKET 1151 235000\n";
				if(num==7)
					archivo<<"\tASUS H110M-A DDR4 6TA Y 7MA GEN 1151  225000\n";
				if(num==8)
					archivo<<"\tASUS Z170M-PLUS 6TA Y 7MA GEN SKT 1151 560.000 \n";
				if(num==9)
					archivo<<"\tASUS Z170-P D3 6TA 7 7MA GEN SOCKET 1151 M.2SATA 400000\n";
				if(num==10)
					archivo<<"\tASUS PRIME H270M-PLUS 6TA Y 7MA GEN SOCKET 1151 $400.000\n";
				if(num==11)
					archivo<<"\tGIGABYTE-B250M-DS3H.USB3,0.HDMI.A.V.R.Pciexp.4DDR4.VII     450000\n";
				if(num==12)
					archivo<<"\tGIGABYTE-H270M-D3H.USB3,1.HDMI.CROSS.A.V.R.4DDR4.1151 VI     310000\n";
				if(num==13)
					archivo<<"\tGIGABYTE-H270-GAMING 3.U3,1.HD.CROSS.A.V.R.4DDR4.1151 VII     605000\n";
				if(num==14)
					archivo<<"\tGIGABYTE-Z270X-GAMING 7.3,1.HD.DP.3CROSS.A.V.R.4DDR4.VII.     460000\n";
				if(num==15)
					archivo<<"\tGIGABYTE-Z270-HD3.U3,0.HDMI.3CROSS.A.V.R.4DDR4.11501 VII.    560000\n";
				if(num==16)
					archivo<<"\tBOARD MSI H110I PRO AC WIFI 6TA GEN 7MA GEN 1151 $340.000 \n";
				if(num==17)
					archivo<<"\tBoard MSI X399 Gaming Por Carbono AC  $1280000\n";
				if(num==18)
					archivo<<"\tBoard MSI X299 Sli Plus Socket 2066  $920000\n";
				if(num==19)
					archivo<<"\tBoard MSI Z170a Gaming M7, 6gen Y 7gen, Ddr4, Socket 1151 $860.000\n";
				if(num==20)
					archivo<<"\tBoard MSI Z270 Krait Gaming  $629.000  \n";
			archivo.close();
					
		}
		unsigned long RprecioB(){
		return precioB;
		}
		
};
class Procesador{
	protected:
		unsigned long precioPr;
	public:

		void LeerGBajaPr(){
			int num, num2,Opc;
			precioPr=num=num2=0;
			do{
			
				system("cls");
				cout<<"Cotizando Procesador....\n";
				cout<<"Digite Una opcion\n\t1)AMD\n\t2)Intel \n";
				cin>>Opc;
			if(Opc<1||Opc>2){
			
					cout<<"\n Ingrese un numero valido\n";
					getch();
				}
			}while(Opc<1||Opc>2);	
			switch(Opc){
				case 1:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)AMD Sempron 2650 (HD 8240, 25W, FS1B, 1MB, 1450MHz)  \n";
						cout<<"\t2)AMD A4 7300 (HD 8470D, 65W, FM2, 1MB, 4000MHz) 96800\n";
						cout<<"\t3)AMD A6 6400K Black Edition (HD 8470D, 65W, FM2, 1MB, 4100MHz)\n";
						cout<<"\t4)AMD A6 7400K Black Edition (Radeon™ R5 Series, 65W, FM2+, 1MB, 3900MHz)\n";
						cout<<"\t5)AMD Athlon X4 845, with 95w quiet cooler (65W, FM2+, 2MB, 3800MHz)\n";
						cout<<"\t6)AMD Athlon X4 870k Black Edition, with 95w quiet cooler (95W, FM2+, 4MB, 4100MHz)\n";
						
						do{
						cin>>num2;
						if(num2<1||num2>6)
							cout<<"valor no valido\n";
						}while(num2<1||num2>6);

						if(num2==1){
							num=1;
							precioPr=105000;
						}
						if(num2==2){
							num=2;
							precioPr=96800;
						}	
						if(num2==3){
							num=3;
							precioPr=114999;
						}
						if(num2==4){
							num=4;
							precioPr=124000;
						}
						if(num2==5){
							num=5;
							precioPr=167000;
						}
						if(num2==6){
							num=6;
							precioPr=187000;
						}
						
						break;
				}
				case 2:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)INTEL BX G3930 7th Gen Celeron\n";
						cout<<"\t2)INTEL CELERON E1200 DE DOBLE NUCLEO\n";
						cout<<"\t3)INTEL 2 DUO E6400 (2.13 GHz)2M\n";
						cout<<"\t4)INTEL PENTIUM G4400 SKYLAKE  3MB - CORES SOCKET 1151 6TA GEN\n";
						cout<<"\t5)INTEL CELERON 430 (1.80GHz) 512K - 1 CORE SOCKET\n";
						cout<<"\t6)INTEL CELERON E3400 (2.60GHz) 1M - 2 CORES 775\n";
						
						do{
						cin>>num2;
						if(num2<1||num2>6)
							cout<<"valor no valido\n";
						}while(num2<1||num2>6);

						if(num2==1){
							num=7;
							precioPr=254000;
						}
						if(num2==2){
							num=8;
							precioPr=210000;
						}	
						if(num2==3){
							num=9;
							precioPr=170000;
						}
						if(num2==4){
							num=10;
							precioPr=150000;
						}
						if(num2==5){
							num=11;
							precioPr=40000;
						}
						if(num2==6){
							num=12;
							precioPr=70000;
						}
						
					break;
				}
				
				
			}
			
			
			
			
			procesoGBajaPr(num);
			
		}
		void procesoGBajaPr(int num){
					ofstream archivo;
				archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
				archivo<<endl<<"Procesador:";	
				if(num==1)
					archivo<<"\tAMD Sempron 2650 (HD 8240, 25W, FS1B, 1MB, 1450MHz)   105000\n";
				if(num==2)
					archivo<<"\tAMD A4 7300 (HD 8470D, 65W, FM2, 1MB, 4000MHz) 96800\n";
				if(num==3)
					archivo<<"\tAMD A6 6400K Black Edition (HD 8470D, 65W, FM2, 1MB, 4100MHz)   114999\n";
				if(num==4)
					archivo<<"\tAMD A6 7400K Black Edition (Radeon™ R5 Series, 65W, FM2+, 1MB, 3900MHz)   124000\n";
				if(num==5)
					archivo<<"\tAMD Athlon X4 845, with 95w quiet cooler (65W, FM2+, 2MB, 3800MHz)  124500   167000\n";
				if(num==6)
					archivo<<"\tAMD Athlon X4 870k Black Edition, with 95w quiet cooler (95W, FM2+, 4MB, 4100MHz)   187000\n";
				if(num==7)
					archivo<<"\tINTEL BX G3930 7th Gen Celeron 254000\n";
				if(num==8)
					archivo<<"\tINTEL CELERON E1200 DE DOBLE NUCLEO  1.6 GHz   210000\n";
				if(num==9)
					archivo<<"\tINTEL 2 DUO E6400 (2.13 GHz)2M - 2 CORES SOCKET 775   170000\n";
				if(num==10)
					archivo<<"\tINTEL PENTIUM G4400 SKYLAKE  3MB - CORES SOCKET 1151 6TA GEN  150000\n";
				if(num==11)
					archivo<<"\tINTEL CELERON 430 (1.80GHz) 512K - 1 CORE SOCKET 775 40000\n";
				if(num==12)
					archivo<<"\tINTEL CELERON E3400 (2.60GHz) 1M - 2 CORES 775  70000\n";
					
			archivo.close();
	

							
		}
		void LeerGAltaPr(){
			int num, num2,Opc;
			precioPr=num=num2=0;
			do{
			
				system("cls");
				cout<<"Cotizando Procesador....\n";
				cout<<"Digite Una opcion\n\t1)AMD\n\t2)Intel \n";
				cin>>Opc;
			if(Opc<1||Opc>2){
			
					cout<<"\n Ingrese un numero valido\n";
					getch();
				}
			}while(Opc<1||Opc>2);	
			switch(Opc){
				case 1:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)AMD Ryzen Threadripper 1950X (180W, sTR4, 40MB, 4000MHz)\n";
						cout<<"\t2)AMD Ryzen Threadripper 1920X (180W, sTR4, 38MB, 4000MHz)\n";
						cout<<"\t3)AMD Ryzen 7 1800X (95W, AM4, 20MB, 4000MHz) \n";
						cout<<"\t4)AMD Ryzen 7 1700, with Wraith Spire 95W cooler (65W, AM4, 20MB, 3700MHz)\n";
						cout<<"\t5)AMD Ryzen 5 1600X (95W, AM4, 19MB, 4000MHz) \n";
						cout<<"\t6)AMD Ryzen 5 1600, with Wraith Spire 95W cooler (65W, AM4, 19MB, 3600MHz) \n";
						
						do{
						cin>>num2;
						if(num2<1||num2>6)
							cout<<"valor no valido\n";
						}while(num2<1||num2>6);

						if(num2==1){
							num=1;
							precioPr=3100000;
						}
						if(num2==2){
							num=2;
							precioPr=2417000;
						}	
						if(num2==3){
							num=3;
							precioPr=1500000;
						}
						if(num2==4){
							num=4;
							precioPr=995000;
						}
						if(num2==5){
							num=5;
							precioPr=750000;
						}
						if(num2==6){
							num=6;
							precioPr=662000;
						}
						
						break;
				}
				case 2:{
						cout<<"Ingrese una opcion \n";
						cout<<"\t1)INTEL CORE I7 6700K 4.2 GHZ SOCKET 1151\n";
						cout<<"\t2)INTEL CORE I5-6600 SOCKET 1151\n";
						cout<<"\t3)INTEL CORE I5 6500 3.6 GHZ 6TA GEN SOCKET 1151\n";
						cout<<"\t4)INTEL CORE I5 7500 3.8GHZ SOCKET 1151 $660000\n";
						cout<<"\t5)INTEL CORE I7 7700 4.2 GHZ 7MA GEN SOCKET 1151 $980000  \n";
						cout<<"\t6)INTEL Core I7 7740X 4.3 GHZ Socket 2066 $1499900 \n";
						
						do{
						cin>>num2;
						if(num2<1||num2>6)
							cout<<"valor no valido\n";
						}while(num2<1||num2>6);

						if(num2==1){
							num=7;
							precioPr=1020000 ;
						}
						if(num2==2){
							num=8;
							precioPr=630000;
						}	
						if(num2==3){
							num=9;
							precioPr=595000;
						}
						if(num2==4){
							num=10;
							precioPr=660000;
						}
						if(num2==5){
							num=11;
							precioPr=980000  ;
						}
						if(num2==6){
							num=12;
							precioPr=1499900;
						}
						
					break;
				}
				
				
			}
			
			
			
			
			procesoGAltaPr(num);
		}
		void procesoGAltaPr(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
				archivo<<endl<<"Procesador:";	
				if(num==1)
					archivo<<"\tAMD Ryzen Threadripper 1950X (180W, sTR4, 40MB, 4000MHz) 3100000\n";
				if(num==2)
					archivo<<"\tAMD Ryzen Threadripper 1920X (180W, sTR4, 38MB, 4000MHz) 2417000\n";
				if(num==3)
					archivo<<"\tAMD Ryzen 7 1800X (95W, AM4, 20MB, 4000MHz)   1500000\n";
				if(num==4)
					archivo<<"\tAMD Ryzen 7 1700, with Wraith Spire 95W cooler (65W, AM4, 20MB, 3700MHz)  995000\n";
				if(num==5)
					archivo<<"\tAMD Ryzen 5 1600X (95W, AM4, 19MB, 4000MHz)  750000\n";
				if(num==6)
					archivo<<"\tAMD Ryzen 5 1600, with Wraith Spire 95W cooler (65W, AM4, 19MB, 3600MHz) 662000\n";
				if(num==7)
					archivo<<"\tINTEL CORE I7 6700K 4.2 GHZ SOCKET 1151 $1020000 \n";
				if(num==8)
					archivo<<"\tINTEL CORE I5-6600 SOCKET 1151 $630000 \n";
				if(num==9)
					archivo<<"\tINTEL CORE I5 6500 3.6 GHZ 6TA GEN SOCKET 1151 595000\n";
				if(num==10)
					archivo<<"\tINTEL CORE I5 7500 3.8GHZ SOCKET 1151 $660000\n";
				if(num==11)
					archivo<<"\tINTEL CORE I7 7700 4.2 GHZ 7MA GEN SOCKET 1151 $980000  \n";
				if(num==12)
					archivo<<"\tINTEL Core I7 7740X 4.3 GHZ Socket 2066 $1499900 \n";
					
			archivo.close();
	

						
		
		
				
		}
		unsigned long RprecioPr(){
		return precioPr;
		}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
};
class TarjetaVideo{
	protected:
	   	unsigned long	precioT;
	public:

	void LeerT(){
		int num;
		num=precioT=0;
		system("cls");
		cout<<"cotizando Tarjetas de Video...."<<endl;
		cout<<"Ingrese una Opcion:\n";
		cout<<"\t1)NVIDIA GTX 980 4GB DDR5 SC ACX 2.0 - 04G-P4-2983-KR \n";
		cout<<"\t2)NVIDIA GTX 1060 3GB DDR5 DUAL OC - DUAL-GTX1060-O3G \n";
		cout<<"\t3)NVIDIA GTX 1050TI 4GB DDR5 DUAL OC - DUAL-GTX1050-O4G\n";
		cout<<"\t4)NVIDIA GTX 1070 8GB DDR5 DUAL OC - DUAL-GTX1070-O8G \n";
		cout<<"\t5)NVIDIA GTX 1070 8GB DDR5 SC GAMING ACX 3.0 - 08G-P4-5173-KR \n";
		cout<<"\t6)NVIDIA GTX 1060 6GB DDR5 GAMING ACX 2.0 - 06G-P4-6161-KR\n";
		cout<<"\t7)NVIDIA GTX 1050 2GB DDR5 GAMING X - GEFORCE GTX 1050 GAMING X 2G\n";
		cout<<"\t8)NVIDIA GTX 1050TI 4GB DDR5 GAMING X - GEFORCE GTX 1050TI GAMING X 4G\n";
		do{
			cin>>num;
			if(num<1||num>8){
			
			cout<<"valor no valido\n";
			getch();
			}
		}while(num<1||num>8);
		
		
		procesoT(num);		
		}
	void procesoT(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
				archivo<<endl<<"Tarjeta de Video:";	
				if(num==1){
					precioT=1800000;
					archivo<<"\tNVIDIA GTX 980 4GB DDR5 SC ACX 2.0 - 04G-P4-2983-KR  1800000\n";
				}
				if(num==2){
					precioT=790000;
				archivo<<"\tNVIDIA GTX 1060 3GB DDR5 DUAL OC - DUAL-GTX1060-O3G 790000\n";
				}
				if(num==3){
					precioT=575000;
				archivo<<"\tNVIDIA GTX 1050TI 4GB DDR5 DUAL OC - DUAL-GTX1050-O4G 575000\n";
				}
				if(num==4){
					precioT=1630000;
					archivo<<"\tNVIDIA GTX 1070 8GB DDR5 DUAL OC - DUAL-GTX1070-O8G  1630000\n";
				}
				if(num==5){
					precioT=1660000;
					archivo<<"\tNVIDIA GTX 1070 8GB DDR5 SC GAMING ACX 3.0 - 08G-P4-5173-KR  1660000\n";
				}
				if(num==6){
					precioT=1000000;
					archivo<<"\tNVIDIA GTX 1060 6GB DDR5 GAMING ACX 2.0 - 06G-P4-6161-KR 1000000\n";
				}
				if(num==7){
					precioT=560000;
					archivo<<"\tNVIDIA GTX 1050 2GB DDR5 GAMING X - GEFORCE GTX 1050 GAMING X 2G 560000\n";
				}
				if(num==8){
					precioT=610000;
					archivo<<"\tNVIDIA GTX 1050TI 4GB DDR5 GAMING X - GEFORCE GTX 1050TI GAMING X 4G 610000\n";
				}
			archivo.close();
		
	}	
	unsigned long RprecioT(){
	return precioT;
	}	
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class DiscoDuro{
	protected:
		unsigned long	precioD;
	public:
		
		void LeerGBajaD(){
			int num;
			precioD=0;
				system("cls");
				cout<<"Cotizando Disco Duro....\n";
				cout<<"Ingrese una opcion\n";
				cout<<"\t1)500GB WESTERN DIGITAL CAVIAR BLUE - SATA3 - 32M - 7200RPM - WD500DAZLX\n";
				cout<<"\t2)750GB TOSHIBA - SATA3 - 32M - 7200RPM - DT01ACA100\n";
				cout<<"\t3)1TB TOSHIBA P300 - SATA3 - 64M - 7200RPM - HDWD110XZSTA\n";
				do{
					cin>>num;
					if(num<1||num>3)
						cout<<"valor No valido\n";
				}while(num<1||num>3);
			
			procesoGBajaD(num);	
		}
		void procesoGBajaD(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
				archivo<<endl<<"Disco Duro:";
				if(num==1){
					precioD=140000;
					archivo<<"\t500GB WESTERN DIGITAL CAVIAR BLUE - SATA3 - 32M - 7200RPM - WD500DAZLX 140.000\n";
				}
				if(num==2){
					precioD=150000;
					archivo<<"\t750GB TOSHIBA - SATA3 - 32M - 7200RPM - DT01ACA100 150.000\n";
				}
				if(num==3){
					precioD=165000;
					archivo<<"\t1TB TOSHIBA P300 - SATA3 - 64M - 7200RPM - HDWD110XZSTA 165.000\n";
				}
				archivo.close();
						
		}
		void LeerGAltaD(){
			int num;
			precioD=0;
				system("cls");
				cout<<"Cotizando Disco Duro....\n";
				cout<<"Ingrese una opcion: \n";
				cout<<"\t1)DISCO SOLIDO M.2 SATA CRUCIAL 525GB MX300 CT525MX300SSD4\n";
				cout<<"\t2)DISCO SOLIDO CRUCIAL MX300 1TB M.2SATA CT1050MX300SSD4\n";
				cout<<"\t3)DISCO SOLIDO MSATA SAMSUNG EVO 850 500GB M5E500BW\n";
				cout<<"\t4)DISCO SOLIDO KINGSTON UV400 480GB SATA3\n";
				cout<<"\t5)DISCO SOLIDO KINGSTON UV400 960GB SATA3 2.5 SUV400S37/960G\n";
				cout<<"\t6)DISCO SOLIDO SAMSUNG EVO 850 1TB SATA3 MZ-75E1T0B/AM \n";
				cout<<"\t7)DISCO SOLIDO SanDisk 500GB Ultra 3D NAND SATA III SSD  - SDSSDH3-500G-G25\n";
				cout<<"\t8)DISCO SOLIDO SanDisk 1 TB Ultra 3D NAND SATA III SSD - SDSSDH3-1T00 \n";
				cout<<"\t9)DISCO SOLIDO Kingston SUV400S37/960G - SSDNOW UV400 960GB, SATA III\n";
				do{
					cin>>num;
					if(num<1||num>9)
						cout<<"valor No valido\n";
				}while(num<1||num>9);
				
			procesoGAltaD(num);
		}
		void procesoGAltaD(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
				archivo<<endl<<"Disco Duro:";
				if(num==1){
					precioD=780000;
					archivo<<"\tDISCO SOLIDO M.2 SATA CRUCIAL 525GB MX300 CT525MX300SSD4 SSD $780000\n";
				}		
				if(num==2){
					precioD=1030000;
					archivo<<"\tDISCO SOLIDO CRUCIAL MX300 1TB M.2SATA CT1050MX300SSD4 $1030000\n";
				}
				
				if(num==3){
					precioD=970000;
					archivo<<"\tDISCO SOLIDO MSATA SAMSUNG EVO 850 500GB M5E500BW $970000  \n";
				}
				if(num==4){
					precioD=530000;
					archivo<<"\tDISCO SOLIDO KINGSTON UV400 480GB SATA3 $530000 \n";
				}
				if(num==5){
					precioD=1130000;
					archivo<<"\tDISCO SOLIDO KINGSTON UV400 960GB SATA3 2.5 SUV400S37/960G $1130000 \n";
				}
				if(num==6){
					precioD=1250000;
					archivo<<"\tDISCO SOLIDO SAMSUNG EVO 850 1TB SATA3 MZ-75E1T0B/AM $1250000\n";
				}
				if(num==7){
					precioD=625190;
					archivo<<"\tDISCO SOLIDO SanDisk 500GB Ultra 3D NAND SATA III SSD  - SDSSDH3-500G-G25  $625190 \n";
				}
				if(num==8){
					precioD=1263574;
					archivo<<"\tDISCO SOLIDO SanDisk 1 TB Ultra 3D NAND SATA III SSD - SDSSDH3-1T00  $1263574\n";
				}
				if(num==9){
					precioD=1285579;
					archivo<<"\tDISCO SOLIDO Kingston SUV400S37/960G - SSDNOW UV400 960GB, SATA III	$1285579\n";
				}
				archivo.close();
				
							
		}
		unsigned long RprecioD(){
		return precioD;
		}		

};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class MemoriaR{
	protected: 
		unsigned long precioM;
	public:

		void LeerGBajaM(){
			int num;
			precioM=0;
				system("cls");
				cout<<"Cotizando Memoria RAM....\n";
				cout<<"Ingrese una opcion\n";
				cout<<"\t1)DDR3L 4GB BUS 1600MHz CORSAIR VENGENCE BLANCA\n";
				cout<<"\t2)DDR3 8GB BUS 1600MHz CORSAIR VENGEANCE\n";
				cout<<"\t3)DDR3L 8GB 1600MHz CORSAIR VENGEANCE\n";
				do{
					cin>>num;
					if(num<1||num>3)
						cout<<"valor No valido\n";
				}while(num<1||num>3);
			
			procesoGBajaM(num);		
			
		}
		
		
		void procesoGBajaM(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
				archivo<<endl<<"Memoria RAM:";
				if(num==1){
					precioM=115000;
					archivo<<"\tDDR3L 4GB BUS 1600MHz CORSAIR VENGENCE BLANCA 115.000\n";
				}
				if(num==2){
					precioM=195000;
					archivo<<"\tDDR3 8GB BUS 1600MHz CORSAIR VENGEANCE 195.000\n";
				}
				if(num==3){
					precioM=200000;
					archivo<<"\tDDR3L 8GB 1600MHz CORSAIR VENGEANCE 200.000\n";
				}		
				archivo.close();
				
				
		}
		void LeerGAltaM(){
		int num;
			precioM=0;
				system("cls");
				cout<<"Cotizando Memoria RAM....\n";
				cout<<"Ingrese una opcion\n";
				cout<<"\t1)Memoria Ram Adata XPG Dazzle DDR4 16gb 3000\n";
				cout<<"\t2)Memoria Ram Adata XPG Spectrix D40 DDR4 8gb 3000\n";
				cout<<"\t3)Memoria Ram Adata XPG Dazzle DDR4 16gb 2400  \n";
				cout<<"\t4)Memoria Ram Adata XPG Z1 DDR4 16GB 2800 \n";
				cout<<"\t5)Memoria Ram Ddr4 16gb 3000MHz Kingston Hyperx Predator\n";
				do{
					cin>>num;
					if(num<1||num>5)
						cout<<"valor No valido\n";
				}while(num<1||num>5);
				
			procesoGAltaM(num);
		}
		void procesoGAltaM(int num){
			ofstream archivo;
				archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
				archivo<<endl<<"Memoria RAM:";
				if(num==1){
					precioM=650000;
					archivo<<"\tMemoria Ram Adata XPG Dazzle DDR4 16gb 3000  650000\n";
				}
				if(num==2){
					precioM=385000;
					archivo<<"\tMemoria Ram Adata XPG Spectrix D40 DDR4 8gb 3000   385000\n";
				}
				if(num==3){
					precioM=600000 ;
					archivo<<"\tMemoria Ram Adata XPG Dazzle DDR4 16gb 2400   600000 \n";
				}
				if(num==4){
					precioM=585000;
					archivo<<"\tMemoria Ram Adata XPG Z1 DDR4 16GB 2800 - Rojo $585000 \n";
				}	
				if(num==5){
					precioM=619900;
					archivo<<"\tMemoria Ram Ddr4 16gb 3000MHz Kingston Hyperx Predator $619900\n";
				}			
			archivo.close();
		
				
		}	
		unsigned long RprecioM(){
			return precioM;
		}	

};
class Pantalla{
	protected:
		unsigned long precioPt;
	public:

	void LeerGBajaPt(){
		int num;
		precioPt=num=0;
			
			cout<<"Cotizando Pantalla...\n";
		
		cout<<"Ingrese una opcion: \n";
		cout<<"\t1)HP MONITOR AOC LED(TAMANIO 20 pulgadas )\n";
		cout<<"\t2)HP MONITOR AOC LED(TAMANIO 19 pulgadas )\n";
		cout<<"\t3)MONITOR LG LED 19M38H(TAMANIO 20 pulgadas )\n";
		cout<<"\t4)MONITOR Lg Led 20mp48(TAMANIO 18 pulgadas )\n";
		do{
			cin>>num;
			if(num<1||num>4)
				cout<<"Valor no valido\n";
			
		}while(num<1||num>4);
		
		procesoGBajaPt(num);		
		}
	void procesoGBajaPt(int num){
		ofstream archivo;
		archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
		archivo<<"\n\n******Pantalla******\n\n";
		if(num==1){
			archivo<<"MONITOR AOC LED\nTAMANIO 20 pulgadas \nRESOLUCION: 1440x900\n";
			archivo<<"PRECIO: $210000\n";
			precioPt=210000;
		}
		if(num==2){
			archivo<<"MONITOR AOC LED  \nTAMANIO: 19.5 pulgadas\nRESOLUCION:  1366x768 60Hz\n";
			archivo<<"PRECIO: $259990";
			precioPt=259990;
			
		}
		if(num==3){
			archivo<<"MONITOR LG LED 19M38H \nTAMANIO 18.5 pulgadas\nRESOLUCION: 1366x768\n";
			archivo<<"PRECIO: $268900 \n";
			precioPt=268900;
		}
		if(num==4){
			archivo<<"MONITOR Lg Led 20mp48 \nTAMANIO: 20 pulgadas\nRESOLUCION: 1440 x 900 \n";
			archivo<<"PRECIO: $286000 \n";
			precioPt=286000;
			
		}
		archivo.close();
		
	}
	
	void LeerGAltaPt(){		
		int num,Opc,num2;
		precioPt=num=Opc=num2=0;
		system("cls");	
		cout<<"Cotizando Pantalla...\n";
		
		cout<<"Ingrese una opcion: \n";
		cout<<"\t1)RESOLUCION (1920 X 1200)\n";
		cout<<"\t2)MONITORES RESOLUCION (2K)\n";
		cout<<"\t3)MONITORES RESOLUCION (4K)\n";
		do{
			cin>>Opc;
			if(Opc<1||Opc>3)
				cout<<"Valor no valido\n";
			
		}while(Opc<1||Opc>3);
			cout<<"Ingrese una opcion: \n";
		switch(Opc){
			case 1:{
						
						do{
						
						cout<<"\t1)Dell U2415 (24 pulgadas )\n";
						cout<<"\t2)Asus VS24AH (24 pulgadas)\n";
						cin>>num2;
						if(num2<1||num2>2)
							cout<<"Valor no Valido\n";
						}while(num2<1||num2>2);
						if(num2==1)num=1;
						if(num2==2)num=2;
	
				
				
				
				break;
			}
			case 2:{
						do{
						cout<<"\t1)Asus PG278Q  (27 pulgadas )\n";
						cout<<"\t2)Dell U2515H  (25 pulgadas)\n";
						
						cin>>num2;
						if(num2<1||num2>2)
							cout<<"Valor no Valido\n";
						}while(num2<1||num2>2);
						if(num2==1)num=3;
						if(num2==2)num=4;
						
				break;
			}
			case 3:{
						do{
						
						cout<<"\t1)Asus PB287Q  (28 pulgadas )\n";
						cout<<"\t2)Dell U3415W  (34 pulgadas)\n";
						
						cin>>num2;
						if(num2<1||num2>2)
							cout<<"Valor no Valido\n";
						}while(num2<1||num2>2);
						if(num2==1)num=5;
						if(num2==2)num=6;
				break;
			}
			
		}
		
		
		
		
		procesoGAltaPt(num);		
		}
	void procesoGAltaPt(int num){
		ofstream archivo;
		archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
		archivo<<"\n\n******Pantalla******\n\n";
		if(num==1){
			archivo<<"Dell U2415\nTAMANIO 24 pulgadas \nRESOLUCION (1920 X 1200)\n";
			archivo<<"PRECIO: 1100000\n";
			precioPt=1100000;
		}
		if(num==2){
			archivo<<"Asus VS24AH \nTAMANIO: 24 pulgadas\nRESOLUCION (1920 X 1200)\n";
			archivo<<"PRECIO: $960000 ";
			precioPt=960000;
			
		}
		if(num==3){
			archivo<<"Asus PG278Q \nTAMANIO: 27 pulgadas\nRESOLUCION:(2K)\n";
			archivo<<"PRECIO: $2137000 \n";
			precioPt=2137000;
		}
		if(num==4){
			archivo<<"Dell U2515H \nTAMANIO: 25 pulgadas\nRESOLUCION:(2K)\n";
			archivo<<"PRECIO: $1170000\n";
			precioPt=1170000;
			
		}
		if(num==5){
			archivo<<"Asus PB287Q \nTAMANIO: 28 Pulgadas\nRESOLUCION:(4K) \n";
			archivo<<"PRECIO: $1699900 \n";
			precioPt=1699900;
			
		}
		if(num==6){
			archivo<<"Dell U3415W  \nTAMANIO: 34 Pulgadas \nRESOLUCION:(4K) \n";
			archivo<<"PRECIO: $2850000 \n";
			precioPt=2850000;
			
		}
		archivo.close();
			
		
	}
	unsigned long RprecioPt(){
		return precioPt;
	}		

};
class Portatil{
	protected :
		unsigned long precioPtl;
	public:
	
		void LeerPtl(){
			
			int num,Opc;
			precioPtl=num=Opc=0;
			do{
			
			system("cls");
			
			cout<<"Cotizando Computador Portatil....\n";
			cout<<"Seleccione la Marca:\n";
			cout<<"\t1)DELL\n";
			cout<<"\t2)LENOVO\n";
			cout<<"\t3)ASUS\n";
			cout<<"\t4)HP\n";
			cin>>Opc;
			if(Opc<1||Opc>4)
				cout<<"Valor no valido\n";
			}while(Opc<1||Opc>4);
			switch(Opc){
				case 1:{
							do{
								cout<<"Ingrese una Opcion:\n";
								cout<<"\t1)PORTATIL DELL VOSTRO 3458\n";
								cout<<"\t2)PORTATIL DELL I3458 \n";
								cout<<"\t3)PORTATIL DELL 5567\n";
							
								cin>>num;
								if(num<1||num>3)
								cout<<"Numero No valido\n";
							}	while(num<1||num>3);
								
								
								
					break;
				}
				case 2:{
							do{
								cout<<"Ingrese una Opcion:\n";
								cout<<"\t1)Portatil Lenovo 100-15IBD\n";
								cout<<"\t2)Portatil Lenovo Ideapad 110-14IBR\n";
								cout<<"\t3)Portátil Lenovo Ideapad 310-14ISK\n";
							
								cin>>num;
								if(num<1||num>3)
								cout<<"Numero No valido\n";
							}	while(num<1||num>3);
								num=num+3;
					
					
					
					break;
				}
				case 3:{
							do{
								cout<<"Ingrese una Opcion:\n";
								cout<<"\t1)Portatil ASUS X441SA\n";
								cout<<"\t2)Portatil ASUS K401U\n";
								cout<<"\t3)Portátil ASUS GL552V\n";
								
								cin>>num;
								if(num<1||num>3)
								cout<<"Numero No valido\n";
							}	while(num<1||num>3);
								num=num+6;
					break;
				}
				case 4:{
							do{
								cout<<"Ingrese una Opcion:\n";
								cout<<"\t1)Portátil HP 14-bs014la\n";
								cout<<"\t2)Portatil HP X360 Convertible 13-u001LA\n";
								cout<<"\t3)Computador Portatil Hp 14-av005la A10-8700p\n";
								cin>>num;
								if(num<1||num>3)
								cout<<"Numero No valido\n";
							}	while(num<1||num>3);
								num=num+9;
					
					break;
				}
				
			}
			
			
			
			
			
			
			
			
			procesoPtl(num);			
			}
		void procesoPtl(int num){
		 precioPtl=0;
	
		ofstream archivo;
		archivo.open("Factura_Portatil.txt",ios::app);

								
		
		if(num==1){					
		archivo<<"PORTATIL DELL VOSTRO 3458\n\nPANTALLA: 14 pulgadas LED\nPROCESADOR: INTEL CORE I3 2.0GHz\n";
		archivo<<"MEMORIA RAM: 4GB RAM \nMEMORIA DE DISCO DURO: 500 GB DD\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: SI\n";
		archivo<<"TARJETA DE VIDEO: INTEGRADA\nSO: WINDOWS 10 PROFESINAL\nPRECIO: $1385900\n";
		precioPtl=1385900;
		}
		if(num==2){	
		archivo<<"PORTATIL DELL I3458 \n\nPANTALLA: 14 pulgadas LED\nPROCESADOR: INTEL CORE I3 1.7GHz\n";
		archivo<<"MEMORIA RAM: 6GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: SI\n";
		archivo<<"TARJETA DE VIDEO: INTEGRADA\nSO: UBUNTU\nPRECIO: $1099900\n";
		precioPtl=1099900;
		}
		if(num==3){	
		archivo<<"PORTATIL DELL 5567\n\nPANTALLA: 15.6 pulgadas LED\nPROCESADOR:  Intel Core I7 2.GHz\n";
		archivo<<"MEMORIA RAM: Ram 8 Gb\nMEMORIA DE DISCO DURO: 1 Tb\nCOLOR: ROJO\nREPRODUCTOR DE CD/DVD: SI\n";
		archivo<<"TARJETA DE VIDEO: AMD Radeon R7 M445 4Gb GDDR5\nSO: WIN 10\nPRECIO: 2600000\n";
		precioPtl=2600000;
		}
		if(num==4){	
		archivo<<"Portatil Lenovo 100-15IBD\n\nPANTALLA: 15,6pulgadas LED\nPROCESADOR:  Intel Corei5 4288U 1.6 GHz\n";
		archivo<<"MEMORIA RAM: 4GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\n";
		archivo<<"REPRODUCTOR DE CD/DVD: SI\nSO: WIN 10\nPRECIO: $1267000 \n";
		precioPtl=1267000;
		}
		if(num==5){	
		archivo<<"Portatil Lenovo Ideapad 110-14IBR\n\nPANTALLA: 14 pulgadas LED \nPROCESADOR: Celeron Dual Core N2840 2.16Ghz\n";
		archivo<<"MEMORIA RAM: 4GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: SI\n";
		archivo<<"SO: LINUX - LINPUS\nPRECIO: $859.900\n";
		precioPtl=859900;
		}
		if(num==6){	
		archivo<<"Portátil Lenovo Ideapad 310-14ISK\n\nPANTALLA: 14pulgadas LED\nPROCESADOR: Intel core i5 6200u 2.3 Ghz\n";
		archivo<<"MEMORIA RAM: 4gb\nMEMORIA DE DISCO DURO: 1tb\nCOLOR: negro\nREPRODUCTOR DE CD/DVD: si\n";
		archivo<<"SO: WIN 10\nPRECIO: $1499900 \n";
		precioPtl=1499900 ;
		}
		if(num==7){	
		archivo<<"Portatil ASUS X441SA\n\nPANTALLA: 14pulgada LED\nPROCESADOR: Intel Celeron Dual Core N3060 1.6 - 2.48 Ghz\n";
		archivo<<"MEMORIA RAM: 4GB\nMEMORIA DE DISCO DURO: 500 GB\nCOLOR: GRIS\nREPRODUCTOR DE CD/DVD: SI \n";
		archivo<<"SO: LINUX\nPRECIO: $699900 \n";
		precioPtl=699900;
		}
		if(num==8){	
		archivo<<"Portatil ASUS K401U\n\nPANTALLA: 14pulgadas LED\nPROCESADOR:  Intel Core i5 6200U 2.3 Ghz 6Th Generacion\n";
		archivo<<"MEMORIA RAM: 8GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: NO\n";
		archivo<<"SO: WIN 10\nPRECIO: $1769900 \n";
		precioPtl=1769900;
		}
		if(num==9){	
		archivo<<"Portátil ASUS GL552V\n\nPANTALLA: 15.5pulgadas LED\nPROCESADOR: Intel Core i7 6700HQ 2.6 sube a 3.5Ghz 6Th GeneraciOn.\n";
		archivo<<"MEMORIA RAM:4GB\nMEMORIA DE DISCO DURO: 1TB\nTARJETA GRAFICA:  Nvidia Geforce GTX 960M 2Gb GDDR5\nCOLOR: NEGRO\n";
		archivo<<"REPRODUCTOR DE CD/DVD: SI\nPRECIO: $3269900 \n";
		precioPtl=3269900;
		}
		if(num==10){	
		archivo<<"Portátil HP 14-bs014la\n\nPANTALLA: 14pulgadas\nPROCESADOR: Intel Core i5 1.7 GHz\n";
		archivo<<"MEMORIA RAM: 4BG\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: BLANCO\nREPRODUCTOR DE CD/DVD: SI\n";
		archivo<<"SO: WIN 10\nPRECIO:$1299000\n";
		precioPtl=1299000;
		}
		if(num==11){	
		archivo<<"Portatil HP X360 Convertible 13-u001LA\n\nPANTALLA: 13.3pulgadas LED Tactil\nPROCESADOR: Intel Core i3 6100u 2.3 Ghz\n";
		archivo<<"MEMORIA RAM: 4GB \nMEMORIA DE DISCO DURO: 500GB\nCOLOR: GRIS\nREPRODUCTOR DE CD/DVD: SI\n";
		archivo<<"SO: WIN 10\nPRECIO: $1149999 \n";
		precioPtl=1149999 ;
		}
		if(num==12){	
		archivo<<"Computador Portatil Hp 14-av005la A10-8700p\n\nPANTALLA: 14pulgadas LED\n";
		archivo<<"PROCESADOR: APU AMD Quad-Core A10-8700P (1,8 GHz, hasta 3,2 GHz)\nMEMORIA RAM: 16GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: ROJO\n";
		archivo<<"REPRODUCTOR DE CD/DVD: SI\nSO: WIN 10\nTARJETA GRAFICA: AMD Radeon R6 (hasta 8,22 GB) \nPRECIO: $1999999\n";
		precioPtl=1999999;
		}
											 
		archivo.close();									 
		verPtl(num);
		}
		void verPtl(int num){
		
		if(num==1){					
		cout<<"PORTATIL DELL VOSTRO 3458\n\nPANTALLA: 14 pulgadas LED\nPROCESADOR: INTEL CORE I3 2.0GHz\n";
		cout<<"MEMORIA RAM: 4GB RAM \nMEMORIA DE DISCO DURO: 500 GB DD\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: SI\n";
		cout<<"TARJETA DE VIDEO: INTEGRADA\nSO: WINDOWS 10 PROFESINAL\nPRECIO: $1385900\n";
		}
		if(num==2){	
		cout<<"PORTATIL DELL I3458 \n\nPANTALLA: 14 pulgadas LED\nPROCESADOR: INTEL CORE I3 1.7GHz\n";
		cout<<"MEMORIA RAM: 6GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: SI\n";
		cout<<"TARJETA DE VIDEO: INTEGRADA\nSO: UBUNTU\nPRECIO: $1099900\n";
		}
		if(num==3){	
		cout<<"PORTATIL DELL 5567\n\nPANTALLA: 15.6 pulgadas LED\nPROCESADOR:  Intel Core I7 2.GHz\n";
		cout<<"MEMORIA RAM: Ram 8 Gb\nMEMORIA DE DISCO DURO: 1 Tb\nCOLOR: ROJO\nREPRODUCTOR DE CD/DVD: SI\n";
		cout<<"TARJETA DE VIDEO: AMD Radeon R7 M445 4Gb GDDR5\nSO: WIN 10\nPRECIO: 2600000\n";
		}
		if(num==4){	
		cout<<"Portatil Lenovo 100-15IBD\n\nPANTALLA: 15,6pulgadas LED\nPROCESADOR:  Intel Corei5 4288U 1.6 GHz\n";
		cout<<"MEMORIA RAM: 4GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\n";
		cout<<"REPRODUCTOR DE CD/DVD: SI\nSO: WIN 10\nPRECIO: $1267000 \n";
		}
		if(num==5){	
		cout<<"Portatil Lenovo Ideapad 110-14IBR\n\nPANTALLA: 14 pulgadas LED \nPROCESADOR: Celeron Dual Core N2840 2.16Ghz\n";
		cout<<"MEMORIA RAM: 4GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: SI\n";
		cout<<"SO: LINUX - LINPUS\nPRECIO: $859.900\n";
		}
		if(num==6){	
		cout<<"Portátil Lenovo Ideapad 310-14ISK\n\nPANTALLA: 14pulgadas LED\nPROCESADOR: Intel core i5 6200u 2.3 Ghz\n";
		cout<<"MEMORIA RAM: 4gb\nMEMORIA DE DISCO DURO: 1tb\nCOLOR: negro\nREPRODUCTOR DE CD/DVD: si\n";
		cout<<"SO: WIN 10\nPRECIO: $1499900 \n";
		}
		if(num==7){	
		cout<<"Portatil ASUS X441SA\n\nPANTALLA: 14pulgada LED\nPROCESADOR: Intel Celeron Dual Core N3060 1.6 - 2.48 Ghz\n";
		cout<<"MEMORIA RAM: 4GB\nMEMORIA DE DISCO DURO: 500 GB\nCOLOR: GRIS\nREPRODUCTOR DE CD/DVD: SI \n";
		cout<<"SO: LINUX\nPRECIO: $699900 \n";
		}
		if(num==8){	
		cout<<"Portatil ASUS K401U\n\nPANTALLA: 14pulgadas LED\nPROCESADOR:  Intel Core i5 6200U 2.3 Ghz 6Th Generacion\n";
		cout<<"MEMORIA RAM: 8GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: NEGRO\nREPRODUCTOR DE CD/DVD: NO\n";
		cout<<"SO: WIN 10\nPRECIO: $1769900 \n";
		}
		if(num==9){	
		cout<<"Portátil ASUS GL552V\n\nPANTALLA: 15.5pulgadas LED\nPROCESADOR: Intel Core i7 6700HQ 2.6 sube a 3.5Ghz 6Th GeneraciOn.\n";
		cout<<"MEMORIA RAM:4GB\nMEMORIA DE DISCO DURO: 1TB\nTARJETA GRAFICA:  Nvidia Geforce GTX 960M 2Gb GDDR5\nCOLOR: NEGRO\n";
		cout<<"REPRODUCTOR DE CD/DVD: SI\nPRECIO: $3269900 \n";
		}
		if(num==10){	
		cout<<"Portátil HP 14-bs014la\n\nPANTALLA: 14pulgadas\nPROCESADOR: Intel Core i5 1.7 GHz\n";
		cout<<"MEMORIA RAM: 4BG\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: BLANCO\nREPRODUCTOR DE CD/DVD: SI\n";
		cout<<"SO: WIN 10\nPRECIO:$1299000\n";
		}
		if(num==11){	
		cout<<"Portatil HP X360 Convertible 13-u001LA\n\nPANTALLA: 13.3pulgadas LED Tactil\nPROCESADOR: Intel Core i3 6100u 2.3 Ghz\n";
		cout<<"MEMORIA RAM: 4GB \nMEMORIA DE DISCO DURO: 500GB\nCOLOR: GRIS\nREPRODUCTOR DE CD/DVD: SI\n";
		cout<<"SO: WIN 10\nPRECIO: $1149999 \n";
		}
		if(num==12){	
		cout<<"Computador Portatil Hp 14-av005la A10-8700p\n\nPANTALLA: 14pulgadas LED\n";
		cout<<"PROCESADOR: APU AMD Quad-Core A10-8700P (1,8 GHz, hasta 3,2 GHz)\nMEMORIA RAM: 16GB\nMEMORIA DE DISCO DURO: 1TB\nCOLOR: ROJO\n";
		cout<<"REPRODUCTOR DE CD/DVD: SI\nSO: WIN 10\nTARJETA GRAFICA: AMD Radeon R6 (hasta 8,22 GB) \nPRECIO: $1999999\n";
		}
		
		
		
			
		}
		unsigned long RprecioPtl(){
		return precioPtl;
		}
			
};
class Impresora{
	protected:
		unsigned long precioI;
	public:

		void LeerI(){
			int num;
			precioI=num=0;
			procesoI(num);			
		}
	void procesoI(int num){
	
	}
	unsigned long RprecioI(){
		return precioI;
	}	
		
};
class Accesorios{
	protected:
		unsigned long precioA;
	public:

	void LeerA(int a){
		int num;
		ofstream archivo;
		if(a==1)archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
		if(a==2)archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
		precioA=num=0;
	
		
	
		
		do{
			system("cls");
			cout<<"Cotizando Accesorios...\n";
			
			cout<<"==== Desea agregar un accesorio? ====\n";
			cout<<"\t1)si\n\t2)no\n";
			cin>>num;
			if(num==2)
				return;
			if(num<1||num>2)
				cout<<"Valor no valido\n";
		}while(num<1||num>2);
			archivo<<" \n******Accesorios******\n\n";
			do{
			system("cls");
			cout<<"Cotizando Accesorios...\n";
			cout<<"Desea Agregar Teclado y Mause?\n";
			cout<<"\t1)si\n\t2)no\n";
			cin>>num;
			if(num==1){
			archivo<<"Combo De Teclado Y Mouse Inalàmbrico Logitech Mk220   $43.000\n";
			precioA=precioA+43000;
			}
			if(num<1||num>2)
			cout<<"Valor no valido\n";
				}while(num<1||num>2);
		
		while(num>0 && num<3){
			system("cls");
			cout<<"cotizando Accesorios...";
			cout<<"Ingrese una opcion: \n";
			cout<<"\t1)Audifono Diadema Gamer Kotion Each G4000 Usb Microfono Led  $ 57900\n";
			cout<<"\t2)Logitech G430, Auriculares Gaming Con Sonido Envolvente 7.1  199000\n";
			cout<<"\t3)Diadema Gamer Kingston Hyperx Cloud Stinger, Pc - Ps4 - Xbox  139000 \n";
			cout<<"\t4)Parlantes Genius Sp-s110  $29900\n";
			cout<<"\t5)PARLANTES GENIUS SP-U115 -Rojo $39900\n";
			cout<<"\t6)Parlantes Subwoofer Genius Sw-5.1 1020 - 26wat $145900 \n";
			cout<<"\t7)Parlantes Subwoofer Genius Sw-g2.1 1250 4 Piezas 38w Juegos - Negro $154000\n";
			cout<<"\t8)Cámara Web Genius Facecam 1000x Webcam Hd 720p, Chat / Skype $44900 \n";
			cout<<"\t9)Cámara Web Genius Facecam 1000X $55900 \n";
			cout<<"\t10)Camara Web Logitech C525 $134900\n";
			cout<<"\t11)Cámara Web Logitech HD Pro Webcam C920 Video Full HD-Negro $249900\n";
			cin>>num;
			if(num<1||num>11)
				cout<<"No se ha agregado ningun accesorio\n";
			if(num>1 &&num<11){
			if(num==1){	
			archivo<<"Audifono Diadema Gamer Kotion Each G4000 Usb Microfono Led  $ 57900\n";
			precioA=precioA+57900;
			}
			if(num==2){
			archivo<<"Logitech G430, Auriculares Gaming Con Sonido Envolvente 7.1  199000\n";
			precioA=precioA+199000;
			}
			if(num==3){
			archivo<<"Diadema Gamer Kingston Hyperx Cloud Stinger, Pc - Ps4 - Xbox  139000 \n";
			precioA=precioA+ 139000;
			}
			if(num==4){
			archivo<<"Parlantes Genius Sp-s110  $29900\n";
			precioA=precioA+29900;
			}
			if(num==5){
			archivo<<"PARLANTES GENIUS SP-U115 -Rojo $39900\n";
			precioA=precioA+39900;
			}
			if(num==6){
			archivo<<"Parlantes Subwoofer Genius Sw-5.1 1020 - 26wat $145900 \n";
			precioA=precioA+145900;
			}
			if(num==7){
			archivo<<"Parlantes Subwoofer Genius Sw-g2.1 1250 4 Piezas 38w Juegos - Negro $154000\n";
			precioA=precioA+154000;
			}
			if(num==8){
			archivo<<"Cámara Web Genius Facecam 1000x Webcam Hd 720p, Chat / Skype $44900\n";
			precioA=precioA+44900;
			}
			if(num==9){
			archivo<<"Cámara Web Genius Facecam 1000X $55900 \n";
			precioA=precioA+55900;
			}
			if(num==10){
			archivo<<"Camara Web Logitech C525 $134900\n";
			precioA=precioA+134900;
			}
			if(num==11){
			archivo<<"Cámara Web Logitech HD Pro Webcam C920 Video Full HD-Negro $249900\n";
			precioA=precioA+249900;
			}
	
			do{
				system("cls");
				cout<<"Cotizando Accesorios...";
				
				cout<<"Desea Agregar un Accesorio?\n";
				cout<<"\t1)si\n\t2)no\n";
				cin>>num;
				if(num==2)
					return;
				if(num<1||num>2)
					cout<<"Valor no valido\n";
			}while(num<1||num>2);
				
				
				
			}
	
			
		}
	
	
}
	unsigned long RprecioA(){
		return precioA;
	}		

};   
class Computador:public Board,public Procesador,public TarjetaVideo,public DiscoDuro,public MemoriaR,public Pantalla,public Accesorios,public Impresora,public Portatil{
	private:
			unsigned long PrecioPortatil,PrecioPcGamaAlta,PrecioPcGamaBaja;
	public:	
		Computador(){
			PrecioPortatil=PrecioPcGamaAlta=PrecioPcGamaBaja=0;
		}
		~Computador(){
	        
		}
		//herencia Portatil //Inicializar cotizacion Portatil 
		void CrearArchivo(){
		ofstream archivo;
		unsigned long doc,tel;
		char Nombre[20];
			for(int i=0;i<3;i++){
			
				if(i==0){
				archivo.open("Factura_Portatil.txt",ios::out);
				cout<<"********** BIENVENIDO ***********"<<endl<<endl;
				cout<<"====== CREANDO FACTURA ======"<<endl<<endl;
				cout<<"Digite nombre nombre: ";
				gets(Nombre);
				cout<<"Digite numero de Identificacion: ";
				cin>>doc;
				cout<<"Digite numero de telefono: ";
				cin>>tel;
				cout<<"============================"<<endl;
				
				}if(i==1)archivo.open("Factura_Pc_Gama_Baja.txt",ios::out);
				if(i==2)archivo.open("Factura_Pc_Gama_Alta.txt",ios::out);	
				
							
				archivo<<"Fac. #"<<i+6<<endl<<endl;
				archivo<<"========== FACTURA =========="<<endl<<endl<<endl;
				archivo<<"******* Alkosto *******"<<endl<<endl;
				archivo<<"Fecha:  16/11/2017"<<endl;
				archivo<<"Cliente: "<<Nombre<<endl;
				archivo<<"Numero de identidad: "<<doc<<endl;
				archivo<<"Telefono: "<<tel<<endl<<endl;
				
			archivo.close();
		}
		}
		
		//Inicializar cotizacion Pc Gama Baja
		unsigned long procesoPortatil(){

				
				cout<<"\nPresione una tecla para iniciar la cotizacion del Computador Portatil\n";
				getch();
				system("cls");
	
				LeerPtl();
				return RprecioPtl();
		

		}
		//Herencia Pc Gama Media //inicializar Cotizacion Pc Gama Baja
		unsigned long procesoPcGamaBaja(){
			
		ofstream archivo;	
		archivo.open("Factura_Pc_Gama_Baja.txt",ios::app);
			cout<<"\nPresione una tecla para iniciar la cotizacion del Computador de escritorio Gama Baja\n";
			getch();
			system("cls");
			LeerGBajaB();
			LeerGBajaPr();
			LeerGBajaM();
			LeerGBajaD();
			LeerGBajaPt();
			LeerI();
			LeerA(1);	
		PrecioPcGamaBaja=RprecioB()+RprecioPr()+RprecioM()+RprecioD()+RprecioPt()+RprecioI()+RprecioA();		
		cout<<"\nTotal Precio Pc Gama Baja: "<<PrecioPcGamaBaja;
		archivo<<"--------------------------------------------\n";
		archivo<<"Total a pagar:"<<PrecioPcGamaBaja<<endl;
		return PrecioPcGamaBaja;
		}
		//Herencia PC Gama Alta //Inicializar Cotizacion PC Gama ALta
		unsigned long procesoPcGamaAlta(){
		ofstream archivo;
		archivo.open("Factura_Pc_Gama_Alta.txt",ios::app);
			cout<<"\nPresione una tecla para iniciar la cotizacion del Computador de escritorio Gama Alta\n";
			getch();
			system("cls");
			LeerGAltaB();
			LeerGAltaPr();
			LeerGAltaM();
			LeerGAltaD();
			LeerT();
			LeerGAltaPt();
			LeerI();
			LeerA(2);			
		PrecioPcGamaAlta=RprecioB()+RprecioPr()+RprecioM()+RprecioD()+RprecioPt()+RprecioI()+RprecioA()+RprecioT();		
		cout<<"\nTotal Precio Pc Gama Baja: "<<PrecioPcGamaAlta;
		archivo<<"--------------------------------------------\n";
		archivo<<"Total a pagar:"<<PrecioPcGamaAlta<<endl;
		archivo.close();
		cout<<"\n\n Presione una tecla para ver el valor total de la compra\n";
		getch();
		return PrecioPcGamaAlta;
		}
		
};


main(){
	system("color F1");
	Computador Comp;
	unsigned long PrecioPortatil,PrecioPcGamaAlta,PrecioPcGamaBaja;
	PrecioPortatil,PrecioPcGamaAlta,PrecioPcGamaBaja=0;
	Comp.CrearArchivo();
	PrecioPortatil=Comp.procesoPortatil();
	PrecioPcGamaBaja=Comp.procesoPcGamaBaja();
	PrecioPcGamaAlta=Comp.procesoPcGamaAlta();
	system("cls");
	cout<<"============================="<<endl;
	cout<<"-> Costo Portatil:  $"<<	PrecioPortatil<<" <-"<<endl;
	cout<<"-> Costo Pc Gama Baja:  $"<<	PrecioPcGamaBaja<<" <-"<<endl;
	cout<<"-> Costo Pc Gama Alta:  $" <<		PrecioPcGamaAlta<<" <-"<<endl;
	cout<<"=============================\n\n";
	cout<<"\t\t******** Costo total: $"<<PrecioPortatil+PrecioPcGamaAlta+PrecioPcGamaBaja<<"********"<<endl;
	system("pause");
	return 0;
}

