/*

hedef: ağaç yapısını kendi başıma baştan yazarak tekrar etmek

*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *sol_cocuk;
    struct node *sag_cocuk;
};

struct node *newNode(int veri){

    struct node *yeni = malloc(sizeof(struct node));

    yeni->data = veri;
    yeni->sag_cocuk = NULL;
    yeni->sol_cocuk = NULL;

    return yeni;            //neden return yeni diyoruz? çünkü bu yeni oluşturulan şeyi kaybetmemek için
}

struct node *ekle(struct node *root, int veri){

    if(root == NULL){
        root = newNode(veri);
    }

    if(veri > root->data){
        root->sag_cocuk = ekle(root->sag_cocuk, veri);
    } else if(veri < root->data){
        root->sol_cocuk = ekle(root->sol_cocuk, veri);
    }

    return root;
}


int enKucukDeger(struct node *root){

    if(root == NULL){
        return -1;
    }
    
    while (root->sol_cocuk != NULL)
    {
        root = root->sol_cocuk;
    }
    
    return root->data;
}


struct node *sil(struct node *root, int veri){

    if(root == NULL){
        printf("bir agac yok\n");
        return NULL;
    }

    if(root->data == veri){
        if(root->sag_cocuk == NULL && root->sol_cocuk == NULL){
            free(root);
            return NULL;
        } else if(root->sag_cocuk != NULL && root->sol_cocuk == NULL){
            struct node *temp = root->sag_cocuk;
            free(root);
            return temp;
        } else if(root->sag_cocuk == NULL && root->sol_cocuk != NULL){
            struct node *temp = root->sol_cocuk;
            free(root);
            return temp;
        } else {
            root->data = enKucukDeger(root->sag_cocuk);                 //bu kısım gerçekten çok zekice
            root->sag_cocuk = sil(root->sag_cocuk, root->data);         //düğümün iki koluda dolu olduğu için
        }                                                               //burayı kolunda 0 yada tek olan senaryolara (üstteki)
    } else if(root->data < veri){                                       //çevirmeye çalışıyoruz
        root->sag_cocuk = sil(root->sag_cocuk, veri);
    } else if(root->data > veri){
        root->sol_cocuk = sil(root->sol_cocuk, veri);
    }

    return root;
}


void yazdir(struct node *root){

    if(root == NULL){
        return;
    }

    yazdir(root->sol_cocuk);        //bu yeni yazdırma yolunu linked-list ile de denemeli

    printf("%d ", root->data);

    yazdir(root->sag_cocuk);
}


int main()
{

    struct node *root = NULL;

    root = ekle(root, 34);
    root = ekle(root, 12);
    root = ekle(root, 68);
    root = ekle(root, 5);
    root = ekle(root, 14);

    root = sil(root, 12);

    yazdir(root);
    
    return 0;
}
