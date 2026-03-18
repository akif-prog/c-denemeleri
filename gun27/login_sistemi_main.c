#include <stdio.h>
#include <string.h>

/*
Amaç: Dosyada kayıtlı kullanıcılarla giriş sistemi yapmak

yapılacaklar
1. kayıt al ve bir dosyaya kaydet
2. giriş yapsınlar ve kontrol et

*/

struct kayitli_kullanicilar
{
    char isim[50];
    char sifre[50];
};

struct girilen_kullanicilar
{
    char isim[50];
    char sifre[50];
};


int main()
{
    struct kayitli_kullanicilar veri;
    int secim;

    while (1)
    {
        printf("menuye hosgeldiniz. islem secin | 1. kayit ol | 2. giris yap | 0. cikis |: ");
        if(scanf("%d", &secim) != 1){
            printf("gecersiz secim\n");
            break;
        }

        FILE *fptr;

        switch (secim)
        {
            case 1:

                struct girilen_kullanicilar yeni;

                printf("isim giriniz: ");
                scanf("%s", yeni.isim);

                printf("sifre giriniz: ");
                scanf("%s", yeni.sifre);

                fptr = fopen("users.txt", "r");
                if(fptr == NULL){
                    printf("dosya acilamadi\n");
                }

                int kayitli = 0;

                while (fscanf(fptr, "%s %s", veri.isim, veri.sifre) != EOF)
                {
                    if(strcmp(yeni.isim, veri.isim) == 0){
                        printf("zaten kayitli\n");
                        kayitli = 1;
                        break;
                    }
                }

                fclose(fptr);

                if(!kayitli){
                    fptr = fopen("users.txt", "a");
                    if (fptr == NULL)
                    {
                        printf("dosya acilamadi\n");
                        return 1;
                    }

                    fprintf(fptr, "%s %s\n", yeni.isim, yeni.sifre);
                    
                    printf("kayit basarili\n");
                    
                    fclose(fptr);
                }

                break;
            case 2:
                
                fptr = fopen("users.txt", "r");
                if (fptr == NULL)
                {
                    printf("dosya acilamadi\n");
                    return 1;
                }

                char girilen_isim[50];
                char girilen_sifre[50];
                int bulundu = 0;

                printf("hosgeldiniz. isim ve sifre giriniz: ");
                scanf("%s %s", girilen_isim, girilen_sifre);

                while (fscanf(fptr, "%s %s", veri.isim, veri.sifre) != EOF){

                    if(strcmp(girilen_isim, veri.isim) == 0 && strcmp(girilen_sifre, veri.sifre) == 0){
                        printf("giris basarili\n");
                        bulundu = 1;
                        break;
                    }
                }

                if(!bulundu){
                    printf("giris basarisiz\n");
                }

                fclose(fptr);

                break;
            case 0:
                printf("gule gule\n");
                return 0;
                
            default:
                printf("gecersiz secim\n");
                break;
        }
    }
    
    

    return 0;
}
