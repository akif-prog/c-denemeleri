/*

hedef: Function pointer’ı parametre olarak alan bir fonksiyon yazmak

*/

#include <stdio.h>


int topla(int a, int b){
    return a+b;
}

int hesapla(int (*fp)(int, int), int a, int b){       //biraz beyin yakıyor
    return fp(a,b);
}


int main()
{

    printf("toplam: %d", hesapla(topla, 3, 5));
    
    return 0;
}
