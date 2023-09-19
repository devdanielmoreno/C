//Aquest programa és el encriptador.
//Realitzar el desencriptador.

#include <stdio.h>
#include <string.h>
#define NUM 8
#include "h.h" 


char cadenaencriptada[100];// variable global
char Rlletres[]="QpPwWEeoOiIuUYytTrR _lLaAsSdDfFgGHhkjKJzmxncbvZMXqNCBV";
void Encripta();// Prototipo de la función

int main(){

	printf ("Escriu una frase sense accents ni la ñ (ny) per poder-encriptarla.:\n");//Pel fet que utilitzem en codi ASCII
	Encripta();
	printf ("Frase encriptada:%s \n",cadenaencriptada);	

return 0;
}

void Encripta(){
	int i=0,j=0,k=0;
	char cadena[100];
	//char cadena[100],enter;

	
	scanf("%[^\n]",cadena);
//	scanf("%c",&enter);
	

//*************************Encripta*********************************************
		
		while (cadena[i]!='\0'){
			
		for(j=0;j<54;j++){ //El for fa el recorregut de totes les lletres minúscules , majúscules i espai
				
			if(cadena[i]==Rlletres[j]){
								k=j-2;//k=j-4+NUM-6;
								if (Rlletres[0]==Rlletres[j]) k=53;
								cadenaencriptada[i]=Rlletres[k]; //Afegir lletra +1 (aleatòria)

									}
						}
		
		i++;
		
								}
	
//**********************************************************************		
		
		}
