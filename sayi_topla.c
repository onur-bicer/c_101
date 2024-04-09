#include <stdio.h>

/// Klavyeden alınan Iki sayıyı toplayıp sonucu ekrana yazacak program

int main() {
    int a, b, toplam;

    printf("Sayı giriniz: ");
    scanf("%d", &a);
    
    printf("Sayı giriniz: ");
    scanf("%d", &b);

    toplam = a + b;

    printf("İki sayının toplamı: %d ", toplam);

    return 0;
}