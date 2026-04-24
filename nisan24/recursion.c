/*

hedef: recursion (özyineleme) yapısını görmek


*/

#include <stdio.h>

int topla(int a){

    int toplam = 0;

    if(a<1){
        return toplam;
    }
    
    toplam = a + topla(a-1);
    return toplam;
}


int main()
{
    
    printf("n + (n-1) + (n-2) ... + 1 + 0 diye toplam sonucu: %d", topla(6));

    return 0;
}
