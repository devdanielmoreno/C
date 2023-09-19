/* 
Lleis de Morgan
not ( a and b ) = not a or not b
not ( a or b )  = not a and not b
include <stdio.h>
*/

int main(){
   int nEdat;
   
   printf("Edat (pots passar en edat laboral): ");
   scanf("%d",&nEdat);
   if ( !((nEdat >= 16) && (nEdat <= 65)) ){
       printf("No pot passar\n");
   }else{
       printf("Pots passar\n");
   }

   return 0;
}