#include <stdio.h>
#include <stdlib.h>

struct node{
    char *isim;
    int puan;
    struct node *next;
};

struct node *ogrenciEkle(struct node *head, char *isim, int puan){

    struct node *yeni = malloc(sizeof(struct node));

    yeni->isim = isim;
    yeni->puan = puan;
    yeni->next = head;

    return yeni;
}

void ogrenciYazdir(struct node *head){

    printf("\n--- ogrenciler ---\n");

    while(head != NULL){
        printf("* %s, %d\n", head->isim, head->puan);
        head = head->next;
    }

}


int main(){

    struct node *head = NULL;

    head = ogrenciEkle(head, "ali", 45);
    head = ogrenciEkle(head, "ayse", 73);
    head = ogrenciEkle(head, "omer", 84);

    ogrenciYazdir(head);


    struct node *temp;              //memory leak olmasın diye önlem
    while(head != NULL){            //sadece head'i free etmek yetmez çünkü her bir node malloc ile oluşturuldu
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
