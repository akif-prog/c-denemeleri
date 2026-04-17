/*

hedef: 2d dinamik bir dizi oluşturmak

pointer kullanmadan nasıl olur?

*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int sutun, satir, i, j;

    printf("kaç sütun istiyorsun? ");
    scanf("%d", &sutun);

    printf("kaç satir istiyorsun? ");
    scanf("%d", &satir);

    int arr[sutun][satir];

    for (i = 0; i < sutun; i++)
    {
        for (j = 0; j < satir; j++)
        {
            printf("%d. sutun %d. satir elemanini giriniz: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (i = 0; i < sutun; i++)
    {
        printf("\n");
        for (j = 0; j < satir; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
    }
    
    
    
    return 0;
}
