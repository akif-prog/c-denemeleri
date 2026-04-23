/*

hedef: dün yaptığım komut yorumlayıcıyı yeniden yazmak 

ve ayrıca geliştirmek:
- fonksiyon pointer kullan
- komut yanında parametrede alsın (mesela: topla 3 5)

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int (*fp)(int, int);

int topla(int a, int b){
    return a+b;
}

int cikar(int a, int b){
    return a-b;
}

int main()
{

    int devam = 1;

    while (devam == 1)
    {
        char satir[50];

        printf("// ");
        fgets(satir, 50, stdin);

        char *komut = strtok(satir, " ");
        char *parca1 = strtok(NULL, " ");
        char *parca2 = strtok(NULL, " ");

        if(strcmp(komut, "cikis\n") == 0){
            devam = 0;
        } else if(strcmp(komut, "yardim\n") == 0){
            printf("topla 0 0 - cikar 0 0 - yardim - cikis\n");
        } else if(strcmp(komut, "topla") == 0){
            fp = topla;

            int sayi1 = atoi(parca1);
            int sayi2 = atoi(parca2);

            printf("toplam: %d\n", fp(sayi1, sayi2));
        } else if(strcmp(komut, "cikar") == 0){
            fp = cikar;

            int sayi1 = atoi(parca1);
            int sayi2 = atoi(parca2);

            printf("cikarim: %d\n", fp(sayi1, sayi2));
        } else {
            printf("gecersiz komut, komutlar için 'yardim' yazin\n");
        }
    }
    
    
    return 0;
}
