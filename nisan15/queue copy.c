#include <stdio.h>
#include <stdlib.h>

/*

o zaman bu struct'lı yada linkedlist'li versiyon olsun

FİFO = first in first out 
-arkadan eklememiz gerek ve baştan çıkarıcaz

*/

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void kuyrukEkle(int veri){
    
    struct node *yeni = malloc(sizeof(struct node));

    yeni->data = veri;
    yeni->next = NULL;
    head = yeni;
    
}

void yazdir(){

    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next; 
    }
    
}


int main()
{

    kuyrukEkle(32);

    yazdir();

    return 0;
}
