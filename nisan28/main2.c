/*

hedef: 
İki sayının En Büyük Ortak Bölenini (EBOB), Özyinelemeli 
Öklid Algoritması kullanarak bulan bir fonksiyon yazmak

*/

#include <stdio.h>

int ebob(int a, int b){

    if(b == 0){
        return a;
    }

    return ebob(b, a%b);
}

int main()
{
    printf("sonuc: %d", ebob(24,9));

    return 0;
}
