/*

hedef: ağaç yapısı oluşturmak


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
    yeni->sol_cocuk = NULL;
    yeni->sag_cocuk = NULL;

    return yeni;
}

struct node *ekle(struct node *root, int veri){        //bu kısmı pointer döndürmeden de (void) yapabiliriz belki

    if(root == NULL){    
        return newNode(veri);
    }

    if(veri < root->data){                                  //bu kısım gerçekten çok zekice:
        root->sol_cocuk = ekle(root->sol_cocuk, veri);      //üsste root boş mu diye bakıyor zaten
    } else if (veri > root->data){                          //boş değilse büyük mü küçük mü diye bakıyor
        root->sag_cocuk = ekle(root->sag_cocuk, veri);      //mesela eğer küçükse sola gidiyor ve
    }                                                       //o noktada fonksiyon içine yeniden giriyoruz,
                                                            //artık yeni root'umuz girilen değer
    return root;                                            //ve eğer sol taraf boşsa üstteki "base case"
}                                                           //devreye girip orasını bu girilen değere veriyor

void yazdir(struct node *root){

    if(root == NULL){
        return;
    }
                                        //in-order: küçükten büyüğe
                                        //pre-order dizilim: önce root sonra sol ve sağ
                                        //post-order dizilim: önce sol ve sağ sonra root
    yazdir(root->sol_cocuk);

    printf("%d ", root->data);

    yazdir(root->sag_cocuk);
}

int main()
{

    struct node *root = NULL;

    //profesyonel kullanımda yeni node oluşturmak ve node'u eklemek ayrı fonksiyonların işi
                  
    root = ekle(root, 34);
    root = ekle(root, 79);
    root = ekle(root, 46);

    yazdir(root);

    
    return 0;
}
