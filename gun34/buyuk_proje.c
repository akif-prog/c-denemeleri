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

struct node *ogrenciEkle(struct node *head, char *isim){
    
    struct node *yeni = malloc(sizeof(struct node));

    strcpy(yeni->kullanici, isim);
    yeni->next = head;

    return yeni;
}

void yazdir(struct node *head){

    struct node *temp = head;

    int i = 1;

    while (temp != NULL)
    {
        printf("%d. %s\n", i, temp->kullanici);
        temp = temp->next;
        i++;
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

    head = ogrenciEkle(head, "Ali");
    head = ogrenciEkle(head, "Ahmet");
    head = ogrenciEkle(head, "Ayşe");

    dosyayaYaz("Ali");
    dosyayaYaz("Ahmet");
    dosyayaYaz("Ayşe");

    yazdir(head);

    return 0;
}
