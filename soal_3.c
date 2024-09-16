#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    if (N % 2 == 0 || N % 3 == 0 || N % 5 == 0 || N % 7 == 0){
        printf("BUKAN", N);
    } else {
        printf("PRIMA", N);
    }
    
    return 0;
}