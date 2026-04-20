/*

hedef: strlen fonksiyonunu kendin yaz

dikkat et: String’i pointer ile dolaş

*/

#include <stdio.h>


int main()
{
    int toplam = 0;

    char isim[50];

    char *ptr = isim;

    printf("isim yazın: ");
    scanf("%s", isim);

    while (*ptr != '\0')
    {
        toplam++;
        ptr++;
    }

    printf("ismin uzunluğu: %d", toplam);
    
    
    
    return 0;
}
