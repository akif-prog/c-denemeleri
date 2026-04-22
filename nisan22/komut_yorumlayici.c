/*

hedef: basit bir komut yorumlayıcı yapmak

içinde olacaklar:

- kullanıcıdan sürekli input alınır

- input’u parçalanır (komut + argüman)

- komuta göre farklı işlem yapılır

- birkaç temel komut çalıştırılır

- exit ile çıkabilir


*/

#include <stdio.h>
#include <string.h>

int topla(int a, int b){
    return a+b;
}

int cikar(int a, int b){
    return a-b;
}


int main()
{

    int secim, devam = 1;

    char komut[50];

    int sayi1, sayi2;

    printf("iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    while (devam == 1)
    {
        printf("yapacağınız işlemi yazın: ");
        scanf("%s", komut);

        if(strcmp(komut, "topla") == 0){
            printf("toplam: %d\n", topla(sayi1, sayi2));
        } else if (strcmp(komut, "cikar") == 0){
            printf("çıkarım: %d\n", cikar(sayi1, sayi2));
        } else if(strcmp(komut, "cikis") == 0){
            devam = 0;
            break;
        } else {
            printf("doğru komutu girin\n");
        }

    }
    

    return 0;
}
