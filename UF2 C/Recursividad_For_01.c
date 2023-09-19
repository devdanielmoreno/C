#include <stdio.h>

double pot(double b,int e){
    if (e == 0){
        return 1;
    }
    return b*pot(b,e-1);
}

int n1s(int n){
    if ((n==0)||(n==1)){
        return n;
    }
    return 10 * n1s(n-1)+1;
}
int main(){
    int i;

    for (i=1;i<9;i++){
        printf("%.0lf\n",pot(n1s(i),2));
    }
    
    return 0;
}