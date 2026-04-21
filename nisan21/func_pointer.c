/*

Bir program yaz:

-    Kullanıcıdan 2 sayı al
-    Kullanıcıdan işlem seçmesini iste:
-    1 → toplama
-    2 → çıkarma
-    3 → çarpma
-    4 → bölme
Şartlar:
-    Her işlem için ayrı fonksiyon yaz
-    Bir tane function pointer tanımla
-    Kullanıcının seçimine göre pointer’ı doğru fonksiyona ata
-    Sonucu pointer üzerinden çağırarak hesapla

*/



#include <stdio.h>

int topla(int a, int b){
    return a+b;
}

int cikar(int a, int b){
    return a-b;
}

int carp(int a, int b){
    return a*b;
}

int bol(int a, int b){
    if(b == 0){
        printf("sıfıra bölünemez");
        return 1;
    }
    return a/b;
}

int (*fp)(int, int);


int main()
{
    int a, b, secim, devam = 1;

    printf("iki sayı giriniz: ");
    scanf("%d %d", &a, &b);

    while (devam == 1)
    {
        printf("secim yapin. 1-topla 2-çıkar 3-çarp 4-böl 0-çıkış\n->");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            fp = topla;
            printf("toplam: %d\n", fp(a,b));
            break;
        case 2:
            fp = cikar;
            printf("çıkarım: %d\n", fp(a,b));
            break;
        case 3:
            fp = carp;
            printf("carpim: %d\n", fp(a,b));
            break;
        case 4:
            fp = bol;
            printf("bölüm: %d\n", fp(a,b));
            break;
        case 0:
            devam = 0;
            break;
        default:
            printf("gecersiz secim\n");
            break;
        }
    }
    
    return 0;
}
