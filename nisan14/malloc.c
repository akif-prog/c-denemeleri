#include <stdio.h>
#include <stdlib.h>

/*

hedef: dinamik bellek tekrarı

tamam peki nasıl bu diziden bir şeyler çıkarırım

*/



int main()
{
    int n, i;
    float toplam = 0;
    

    printf("ne kadar büyük bir dizi istiyorsun? ");
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    if(arr == NULL){
        printf("bellek ayrilmadi\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &arr[i]);
        toplam = toplam + arr[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\ndizideki sayilarin ortalamasi: %.2f\n", toplam / n);
    
    
    free(arr);

    return 0;
}
