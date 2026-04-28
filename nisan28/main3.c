/*

hedef: Kullanıcının girdiği bir tam sayı dizisini özyineleme 
kullanarak ekrana tersten yazdıran bir fonksiyon yaz.

*/

#include <stdio.h>

void ters_yaz(int a, int boyut){

    if(boyut == 0){
        return;
    }

    printf("%d", a%10);

    ters_yaz(a/10, boyut-1);
}

int main()
{

    ters_yaz(3456, 4);
    
    return 0;
}
