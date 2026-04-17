#include <stdio.h>
#include <stdlib.h>

/*

2d dinamik dizi oluşturmak var

ayrıca normal tek boyut dinamik dizi oluşturmak var

ikincisini nasıl yapıyorduk?

*/


int main()
{
    int sutun, i;

    printf("kaç sütun istiyorsun? ");
    scanf("%d", &sutun);

    int *arr = malloc(sizeof(int) * sutun);

    if(arr == NULL){
        printf("bellek ayrilamdi");
        return 1;
    }

    for (i = 0; i < sutun; i++)
    {
        printf("%d. elemanı girin: ", i+1);
        scanf("%d", arr+i);
    }
    
    for (i = 0; i < sutun; i++)
    {
        printf("%d ", *(arr+i));
    }
    
    free(arr);
    
    return 0;
}
