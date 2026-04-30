/*

hedef: mini shell için taslak hazırlamak

bugün yapılacaklar:
- prompt çalışıyor
- komut alıyor
- ls, pwd gibi şeyleri çalıştırıyor
- exit çalışıyor

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

        char *parca1 = strtok(komut, " ");
        char *parca2 = strtok(NULL, " ");
        char *parca3 = strtok(NULL, " ");

        if(parca1 == NULL){
            continue;
        }

        if(parca2 == NULL || parca3 == NULL){
            printf("eksik arguman\n");
            continue;
        }

        sayi1 = atoi(parca2);
        sayi2 = atoi(parca3);

        if(strcmp(parca1, "topla") == 0){
            printf("toplam: %d\n", topla(sayi1, sayi2));
        } else if(strcmp(parca1, "cikis\n") == 0){
            devam = 0;
            break;
        } else {
            printf("gecersiz komut\n");
        }
    }
    
    
    return 0;
}
