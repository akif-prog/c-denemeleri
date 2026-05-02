/*

hedef: büyük projeye ekleyebilmek için fonksiyon pointer konusunu tekrar etmek

Amaç: if-else veya switch-case kullanmadan, kullanıcının seçtiği matematiksel 
işlemi çalıştıran bir yapı kurmak.

*/

#include <stdio.h>

int topla(int a, int b){
    return a+b;
}

int cikar(int a, int b){
    return a-b;
}


int (*fp[])(int, int) = {topla, cikar};

int main()
{
    int secim;

    printf("sayi girin: ");
    scanf("%d", &secim);

    printf("sonuc: %d", fp[secim](3, 5)); 
    
    return 0;
}
