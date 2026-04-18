#include <stdio.h>
#include <stdlib.h>

/*

hedef: tek boyutlu dinamik diziyi 2 boyutlu yapmak

*/

int main()
{
    int satir, sutun, i, j;
    
    printf("satir ve sutun giriniz: ");
    scanf("%d %d", &satir, &sutun);

    int *arr = malloc(sizeof(int) * sutun * satir);   
    
    if(arr == NULL){
        printf("bellek ayrilamadi");
        return 1;
    }

    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            printf("%d. satir %d. sutun elemanini girin: ", i+1, j+1);
            scanf("%d", &arr[(i * sutun) + j]);
        }
        
    }

    for (i = 0; i < satir; i++)
    {
        printf("\n");
        for (j = 0; j < sutun; j++)
        {
            printf("%d ", arr[(i * sutun) + j]);
        }
    }
    
    free(arr);
    
    return 0;
}
