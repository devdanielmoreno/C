//m1p02.c - Una conversa en C -

#include <stdio.h> //printf i scanf

void NetejaBuffer(){ while(getchar() != '\n'); }

int main(){

  char nom[30];
  char cotxe[30];
  int edat,matricula;

  printf("Si us plau, escriviu el vostre nom\n");
  scanf("%s",nom);
  printf("Ara podeu escriure la vostra edat\n");
  NetejaBuffer();
  scanf("%d",&edat);
  printf("Quin cotxe tens?\n");
  scanf("%s",cotxe);
  printf("La teva matricula es: \n");
  scanf("%d",&matricula);
  printf("Molt bé %s, vosté té %d anys tens el %s y la teva matricula es %d\n",nom, edat, cotxe, matricula);
  

return 0;

} 