#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2){
        printf("BERBEDA");
    } else{
        int hasil = strcmp(str1, str2);
        if (hasil == 0){
            printf("IDENTIK");
        } else {
            printf("MIRIP");
        }
    }
    return 0;
}