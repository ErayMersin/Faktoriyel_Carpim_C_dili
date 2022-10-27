#include <stdio.h>
#include <stdlib.h>


int main() {

    int i;
    int faktor = 1;
    int sayi;

    printf("Hesaplanmasini istediginiz sayiyi giriniz:");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++)
    {
        faktor = faktor * i;
    }
    printf("Faktoriyel Carpimi: %d", faktor);

    return 0;
}
