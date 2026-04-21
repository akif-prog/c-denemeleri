/*

hedef: Function pointer mantığını öğrenmek

bir fonksiyonu işaretçi ile nasıl çağırırsın? yada bir fonksiyonu bir işaretçiye nasıl atarsın?


*/

#include <stdio.h>


int topla(int a, int b){
    return a+b;
}

int (*fp)(int, int);

int main()
{

    fp = topla;

    int sonuc = fp(3,5);

    printf("toplam: %d", sonuc);
    

    return 0;
}
