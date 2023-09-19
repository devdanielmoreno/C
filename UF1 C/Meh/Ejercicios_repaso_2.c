#include <stdio.h> //printf i scanf

void NetejaBuffer(){ while(getchar() != '\n'); }

int main(){

  char nom[30];
  char carrer[25];
  char ciudad[25];
  int edat;

  printf("Si us plau, escriviu el vostre nom, carrer, ciudad y edat\n");
  scanf("%s""%s""%s""%d",nom, carrer, ciudad, &edat);
  printf("Ara podeu escriure la vostra edat\n");
  NetejaBuffer();
  printf("Molt be %s, voste te %d anys, el vostre carrer es %s, a %s.\n",nom, edat, carrer, ciudad);

return 0;

} 