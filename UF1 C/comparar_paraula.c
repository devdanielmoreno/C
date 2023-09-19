#include <stdio.h>

void NetejaBuffer(){ while(getchar() != '\n'); }

int comparaCadena(char p1[],char p2[]){
	int i=0;
	
	while ((p1[i] !='\0')){
	if ((p2[i])!=(p1[i])) return 0;
		i++;
		
	
	
}
	return 1;
}


int main (){
	
	char Paraula1[30]="Clot";
	char Paraula2[30];
	int i=0;
	
while (i==0){
		printf("Introduiex una paraula: ");
		scanf("%[^\n]",Paraula2);
		
		NetejaBuffer();

	if(comparaCadena(Paraula1,Paraula2)){
		printf(" Son iguals \n ");
		i=1;}
		
	else printf("   No son iguals \n ");
	
}
	return 0;
	
}

