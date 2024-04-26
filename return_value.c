#include <stdio.h>

int foo() {
    printf("Foo\n");
    return 100;
    printf("test\n");   /* unreachable code! */
    /* return 100; -> Bu satır, foo fonksiyonundan 100 tamsayı değerini döndürür. 
    Bir return ifadesi yürütüldükten sonra, fonksiyon çalışması sona erer ve ondan 
    sonra gelen kod (yorum satırı printf("test\n"); gibi) ulaşılamaz hale gelir.*/
}

int main() {
    int result; 
    result = foo() * 2;
    printf("%d\n", result);
}