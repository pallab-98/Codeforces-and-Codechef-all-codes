#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x/3 && x/5)
        printf("both are division");
    
    else if(x/3)
      printf("only 3");
    
    else if(x/5)
    printf("only 5");
    else
    printf("not both");


    return 0;
}