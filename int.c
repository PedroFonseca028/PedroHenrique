#include <stdio.h>

void inc(int i){
    printf("dentro da função: i=%d\n, i");
    i++;
    printf("dentro da função: i=%d\n, i");
}

int main(){
    int i=1;
    printf("fora da função: i=%d\n, i");
    i++;
    printf("fora da função: i=%d\n, i");

}