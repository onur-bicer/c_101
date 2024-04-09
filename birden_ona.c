#include <stdio.h>

/// 1’den 10’a kadar olan sayıların toplamını ekrana yazan program

int main() {
    int i=1, toplam=0;
    while (i<=10) {
    toplam=toplam+i;
    i++;
    } 
    printf("1'den 10'a kadar olan sayıların toplamı: %d", toplam);
   return 0;
}