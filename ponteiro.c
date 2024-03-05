#include <stdio.h> 

int main(){
    int i = 1;
    int *p = &i;
    printf("valor  de i: %d\n", i);
    printf("valor apontado por p *p: %d\n", *p);

}