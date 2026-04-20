/*

hedef: strcpy fonksiyonunu kendin yaz

dikkat et: 
-String’i pointer ile dolaş
-main dışında fonksiyon oluştur

strcpy fonksiyonu ne yapar: bir string alır ve aynısı başka bir yere kopyalar
nasıl yaparım:
1. dosya kullanmak, önce dosyaya yazı yazmak sonra bunu kopyalayıp başka bir dosyaya yazmak
2. normal bir şekilde aynısını alır ve yazdırır

*/

#include <stdio.h>




int main()
{
   
    char isim[50];

    char kopyalanan_isim[50];

    char *kaynak_ptr = isim;

    char *hedef_ptr = kopyalanan_isim;


    printf("bir isim gir: ");
    scanf("%s", isim);

    while (*kaynak_ptr != '\0')
    {
        *hedef_ptr = *kaynak_ptr;
        kaynak_ptr++;
        hedef_ptr++;
    }

    *hedef_ptr = '\0';

    printf("girilen isim: %s", kopyalanan_isim);
    

    
    return 0;
}
