#include <stdio.h>

void einmaleins(){
    int i;
    int x;
    int z;
    int j = 1;
    printf("Von: ");
    scanf("%d", &x);
    printf("Bis: ");
    scanf("%d", &z);
    int y = x;
    for(i = 0; j<11; i++){
        if((i!=0)&&((i+1)%((z-x)+1))==0){
            printf("%3d\n", z*j);
            j++;
        }
        else
        printf("%3d ", j*(x+(i%((z-x)+1))));

    }
}