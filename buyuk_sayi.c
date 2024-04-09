#include <stdio.h>

/// Klavyeden girilen üç sayıdan en büyüğünü bulup gösteren program

int main()
{
    int a, b, c, en_buyuk;

    printf("Birinci sayıyı giriniz: ");
    scanf("%d", &a);

    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &b);

    printf("Üçüncü sayıyı giriniz: ");
    scanf("%d", &c);

    en_buyuk = a;

    if (b > en_buyuk) {
        en_buyuk = b;
    }

    if (c > en_buyuk) {
        en_buyuk = c;
    }

    printf("En büyük sayı: %d", en_buyuk);
    
    return 0;
}