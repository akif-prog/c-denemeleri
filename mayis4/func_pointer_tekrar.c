/*

hedef: 
if-else veya switch-case kullanmadan, kullanıcının seçtiği matematiksel 
işlemi çalıştıran bir yapı kurmak.

*/

#include <stdio.h>
#include <string.h>

int topla(int a, int b){
    return a+b;
}

int cikar(int a, int b){
    return a-b;
}

int carp(int a, int b){
    return a*b;
}

struct islem{
    char komut[50];
    int (*fp)(int, int);
};


int main()
{
    struct islem tablo[] = {{"topla", topla}, {"cikar", cikar}, {"carp", carp}};    //neden burası bu şekilde yazıldı

    char komut[50];

    int sonuc = 0;

    printf("> ");
    fgets(komut, sizeof(komut), stdin);

    komut[strcspn(komut, "\n")] = 0;    //strcspn(komut, "\n") bu kod ne dönüyor?

    for (int i = 0; i < sizeof(tablo)/sizeof(tablo[0]); i++)        //mesela diyelim 3 elemanlı bir tablomuz olsun
    {                                                               //sizeof(tablo) 12 dönecektir ve
        if(strcmp(komut, tablo[i].komut) == 0){                     //sizeof(tablo[0]) 4 döner bu yüzden
            sonuc = tablo[i].fp(3, 5);                              //eleman sayısı 12 / 4 'ten bulunur
            break;
        }
    }
    
    printf("sonuc: %d", sonuc);
    
    return 0;
}
