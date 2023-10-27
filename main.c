#include <stdio.h>
#include <stdlib.h>

int main()
{
    char emir;
    printf("Lutfen bir karakter giriniz.\n");
    scanf("%c",&emir);
    if((emir>='A')&& emir<='Z')
    {
        printf("Kucuk harfimiz %c\n",tolower(emir)) ;//tolower kullanýmý kucuge ceviriyor.
    }
    else{
        printf("Yanlis bir karakter girdiniz.");
    }
}
