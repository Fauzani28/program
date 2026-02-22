#include <stdio.h>
//ini main program
int main() {
    int a, b;
    puts("Oprator Aritmatika");
    puts("====================");
    printf("Masukkan sembarang nilai (a) : ");
    scanf("%d", &a);
    printf("Masukkan sembarang nilai (b) : ");
    scanf("%d", &b);
    printf("\n %i * %i = %d", a, b, (a*b));
    printf("\n %i / %i = %d", a, b, (a/b));
    printf("\n %i + %i = %d", a, b, (a+b));
    printf("\n %i - %i = %d", a, b, (a-b));
 
    printf("\n %i - %i = %d", a++, ++b, (a++ + ++b));
    printf("\n %i - %i = %d", a--, --b, (++a + ++b));

}