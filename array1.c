#include <stdio.h>

int main(){
    int t = 10;
    int array[t];
    int i;

    for(i=0; i <= t; i++)
        array[i] = i;

    for(i=0; i<= t; i++)
        printf("%d:%d\n", i, array[i]);
}
