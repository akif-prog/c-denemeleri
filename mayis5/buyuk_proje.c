/*
baştan sona bir mini shell yazıcam. içinde olacaklar:
- if else yada swtich olmadan komutlara erişim
- komutlar 2'den fazla argüman alabilecek

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct islemler{
    char *komut;                  //burada da main de yazdığım "char komut[50]"'yi tekrar etmek zorunda mıyım?
    int (*fp)(char *[], int);     //aslında "*komut" yazarak komutu bir adrese kayıt edebilirim
};


int topla(char *dizi[], int n){

    int toplam = 0;

    for (int i = 1; i < n; i++)
    {
        toplam += atoi(dizi[i]);
    }
    
    return toplam;
}

int cikar(char *dizi[], int n){

    if(n <= 1){
        printf("min 2 arguman girin\n");
        return 0;
    }

    int ilk_sayi = atoi(dizi[1]);

    for (int i = 2; i < n; i++)
    {
        ilk_sayi -= atoi(dizi[i]);
    }
    
    return ilk_sayi;
}

int carp(char *dizi[], int n){

    int sonuc = 1;

    for (int i = 1; i < n; i++)
    {
        sonuc *= atoi(dizi[i]);
    }
    
    return sonuc;
}


int main()
{
    char komut[50];
    char *argumanlar[50];       //buraya neden * koyuyorum? çünkü strtok komutu pointer döner
                                //tabi buradaki tek bir pointer değil, pointer dizisi

   struct islemler tablo[] = {{"topla", topla}, {"cikar", cikar}, {"carp", carp}};

   /* bu yukarıdaki diziye neden hem string hemde fonksiyon pointer yazdık?
   çünkü string bir anahtar, fonksiyon ise bir değerdir. anahtar ile değeri eşleştiriyoruz*/

    while (1) {                                                          
        int n = 1;

        printf("> ");
        fgets(komut, sizeof(komut), stdin);

        argumanlar[0] = strtok(komut, " \n");

        if(argumanlar[0] == NULL){
            continue;
        }

        while ((argumanlar[n] = strtok(NULL, " \n")) != NULL){     //burası for ile de çözülebilir mi? for(i = 1, i<kontrol, i++)
            n++;
        }
        

        for (int i = 0; i < sizeof(tablo) / sizeof(tablo[0]) ; i++)
        {
            if(strcmp(argumanlar[0], tablo[i].komut) == 0){

                printf("sonuc: %d\n", tablo[i].fp(argumanlar, n));
                break;
            }
        }
        
    }
    
    return 0;
}
