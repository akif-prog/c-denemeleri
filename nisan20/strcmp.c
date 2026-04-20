/*

hedef: kendim strcmp fonksiyonunu yazmak

*/

#include <stdio.h>

int kendi_strcmp(char *kaynak_veri, char *hedef_veri){

    char *kaynak_ptr = kaynak_veri;

    char *hedef_ptr = hedef_veri;

    while (*kaynak_ptr != '\0' && *hedef_ptr != '\0')
    {
        if (*kaynak_ptr != *hedef_ptr){
            return 1;
        } else {
            kaynak_ptr++;
            hedef_ptr++;
        }

    }

    if(*hedef_ptr != '\0' || *kaynak_ptr != '\0'){
        return 1;
    }
    
    return 0;
}


int main()
{

    if(kendi_strcmp("alican", "ali") == 0){
        printf("ikisi aynı");
    }else{
        printf("ikisi farklı");
    }
    
    return 0;
}
