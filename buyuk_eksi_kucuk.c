#include <stdio.h>

/// Klavyeden girilecek iki sayıdan büyük olanından küçük olanını çıkarıp sonucu ekrana yazacak program

int main() {
    int a, b, buyuk;

    printf("Birinci sayıyı gir: ");
    scanf("%d",&a);

    printf("İkinci sayıyı gir: ");
    scanf("%d",&b);

    if (a>b) {
        buyuk = a-b;
        printf("Sonuç: %d", buyuk);
    } else {
        buyuk = b-a;
        printf("Sonuç: %d", buyuk);
    }
    return 0; 
}