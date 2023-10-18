#include <stdio.h>
void ascii(){
    int z = 0;
    int s;
    int i;
    scanf("%d", &s);
    for(int i = 32; i <= 126; i++){
        if((z%s)==0)
            printf("\n");
        printf("%3d %c  ", i, i);
        z++;
    }
}