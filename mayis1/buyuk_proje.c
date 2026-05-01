/*

hedef: mini shell yapmak

bugün (1 mayıs) yapılacaklar:
- Argümanları bir diziye (args[]) alacak şekilde strtok kısmını güncelle. X
- if-else yapısını daha temiz bir hale getir (mümkünse fonksiyon tabanlı).
- En az 3 yeni komut ekle.

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int topla(int a, int b){
    return a+b;
}


int main()
{
    char komut[100];
    int sayi1, sayi2;

    int devam = 1;

    while (devam == 1)
    {
        printf("> ");
        fgets(komut, sizeof(komut), stdin);

        char *parca1 = strtok(komut, " \n\t");
        char *parca2 = strtok(NULL, " \n\t");
        char *parca3 = strtok(NULL, " \n\t");

        if(parca1 == NULL){
            continue;
        }

        if(strcmp(parca1, "topla") == 0){

            if(parca2 == NULL || parca3 == NULL){
            printf("eksik arguman\n");
            continue;
            }

            sayi1 = atoi(parca2);
            sayi2 = atoi(parca3);

            printf("toplam: %d\n", topla(sayi1, sayi2));

        } else if(strcmp(parca1, "cikis") == 0){
            devam = 0;
            break;
        } else {
            printf("gecersiz komut\n");
        }
    }
    
    
    return 0;
}