/*

hedef: strcpy fonksiyonunu main dışında fonksiyon olarak yazmak


*/

#include <stdio.h>

void kendi_strcpy(char *str, char *kopyalanan_str){

    char *kaynak_ptr = str;

    char *hedef_ptr = kopyalanan_str;

    while (*kaynak_ptr != '\0')
    {
        *hedef_ptr = *kaynak_ptr;
        kaynak_ptr++;
        hedef_ptr++;
    }
    
    *hedef_ptr = '\0';

    printf("girdiğiniz veri: %s", kopyalanan_str);

}


int main()
{
   
    char sonuc[50];

    kendi_strcpy("mehmet", sonuc);

    
    return 0;
}
