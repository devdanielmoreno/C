//targeta08.c
#include <stdio.h>
#include <string.h> //Per a la funció strlen()
#define MOLTS 99
#define N_TARGETA 16

int bParse(char* sz){
    int i;

    if (strlen(sz) != N_TARGETA){ //Verificació del nombre de caràcters correcte
        return 0;
    }
    for (i=0;i<N_TARGETA;i++){
        if (!((sz[i]>='0')&&(sz[i]<='9'))){ //Verificació que són números 
            return 0;
        } 
    }
    return 1; //Si el nombre de números és correcte i tot son números, retorno cert
}

void vVisualitzaVector(char* sz,int* n){ // void vVisualitzaVector(int *n){ 
    int i;

    printf("%s: ",sz);
    for (i=0;i<N_TARGETA;i++,n++){
        //printf("%d",n[i]); // Accés vectorial. Perque val []
        printf("%d", *n); // Accés per apuntador. Per tant haué d'incrementar n. Tinc 3 maneres de fer-ho. Manera 3:
        //n++;
    }
    printf("\n");
}

void vCadenaCar_a_CadenaInt(char* c, int* n){
    int i;

    for (i=0;i<N_TARGETA;i++){
        n[i] = c[i] - '0';
    }
}

int nSumaUnitatDecimal(int n){
    return n/10+n%10;
}

int nSumaTotal(int* nL){
    int nSuma = 0, i;
    
    for (i=0;i < N_TARGETA;i++){
        nSuma += nL[i];
    }
    return nSuma;
}

/*
def llistaSumats(nT,nP):
    nS = []
    for i in range(N_TARGETA):
        #print("%d x %d = %d "%(nT[i],nP[i],nSumaUnitatDecimal(nT[i]*nP[i])))
        nS.append(nSumaUnitatDecimal(nT[i]*nP[i]))
    return nS
*/

int main(){
    char szT[MOLTS];
    int i, nTargeta[N_TARGETA],nPesos[N_TARGETA]={2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
    int nSumats[N_TARGETA];
    // int i, nTargeta[N_TARGETA],nPesos[]={2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};

    printf("Número tarjeta: ");
    scanf("%s",szT);
    printf("Heu introduit: \"%s\"\n",szT);
    if(bParse(szT)){
        printf("Comencem a analitzar la targeta \n");
    }else{
        printf("Targeta no correcta \n");
        return 1; //Sortida anormal del programa
    }
    vCadenaCar_a_CadenaInt(szT,nTargeta); // vCadenaCar_a_CadenaInt(&szT[0],&nTargeta[0]);
    vVisualitzaVector("nTargeta",nTargeta); // vVisualitzaVector(&nTargeta[0]);
    
    for (i=0;i<N_TARGETA;i++){
        //printf("%d x %d = %d \n",nTargeta[i],nPesos[i],nSumaUnitatDecimal(nTargeta[i]*nPesos[i]));
        nSumats[i] = nSumaUnitatDecimal(nTargeta[i]*nPesos[i]);
    }
    vVisualitzaVector("nPesos  ",nPesos);
    vVisualitzaVector("nSumats ",nSumats);
    printf("nSuma: %d\n",nSumaTotal(nSumats));
    
    if(nSumaTotal(nSumats) % 10 == 0){
        printf("%s es valida\n", szT);
    }else{
        printf("%s no es valida\n", szT);
    }

    return 0;
}
