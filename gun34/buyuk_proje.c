/*

hedef: basit metin editörü yapmak

özellikleri:

✓1. Metin girme (satır satır → fgets)  
✓2. Metni saklama (dynamic array / linked list)
✓3. Ekrana yazdırma

4. Satır ekleme
5. Satır silme
6. Satır güncelleme
7. Basit komutlar (ör: kaydet, sil 3)

8. Dosyaya kaydet (fprintf)
9. Dosyadan oku (fgets)
10. Satır numarası gösterme
11. Çıkış komutu

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char kullanici[50];
    struct node *next;
};

struct node *basaEkle(struct node *head, char *isim){
    
    struct node *yeni = malloc(sizeof(struct node));

    strcpy(yeni->kullanici, isim);
    yeni->next = head;

    return yeni;
}

struct node *arayaEkle(struct node *head, char *isim){

    //bu fonksiyonda başa veya sona ekleme yapılmasın
    
    //mesela toplam 5 satır var diyelim ve biz 2. satırdan sonra ekleme yapıcaz 

    int satir;
    

    printf("hangi satirdan sonra ekleme yapmak istiyorsun: ");
    scanf("%d", satir);


    struct node *yeni = malloc(sizeof(struct node));

    while ()
    {
        /* code */
    }
    

    strcpy(yeni->kullanici, isim);
    yeni->next = 
}

struct node *sonaEkle(struct node *head, char *isim){

    struct node *yeni = malloc(sizeof(struct node));

    struct node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
    }
    
    strcpy(yeni->kullanici, isim);
    yeni->next = NULL;

}

void yazdir(struct node *head){

    struct node *temp = head;

    int satir = 1;

    while (temp != NULL)
    {
        printf("%d. %s\n", satir, temp->kullanici);
        temp = temp->next;
        satir++;
    }
    
}

void dosyayaYaz(char *isim){

    FILE *f = fopen("dosya.txt", "a");
    
    fprintf(f, "%s\n", isim);
    
    fclose(f);
}

int main()
{
    struct node *head = NULL;

    head = basaEkle(head, "Ali");
    head = basaEkle(head, "Ahmet");
    head = basaEkle(head, "Ayşe");

    dosyayaYaz("Ali");
    dosyayaYaz("Ahmet");
    dosyayaYaz("Ayşe");

    yazdir(head);

    int devam = 1;
    int secim;
    int satir;

    while (devam)
    {
        printf("islem secin: \n 1.satir ekle \n 2.satir sil \n 0. cikis \n => ");


        switch (secim)
        {
        case 1:
            /* code */
            break;
        case 2:
            printf("hangi satiri silmek istersin: ");
            scanf("%d", &satir);

            if(strcmp())
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
