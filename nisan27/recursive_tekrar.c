/*

hedef: genel tekrar ve ağaç yapısını yazabilmek

*/

#include <stdio.h>


int topla(int a){

    int toplam = 0;

    if(a < 1){
        return toplam;
    }

    toplam = a + topla(a-1);
}


int main()
{

    printf("toplam: %d", topla(6));

    
    return 0;
}
