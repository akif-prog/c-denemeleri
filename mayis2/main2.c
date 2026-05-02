/*

hedef: büyük projeyi yeniden yazmak 
eklenecek özellik
-2'den  fazla argüman almak

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int topla(char *dizi[], int n){

    int toplam = 0;

    for (int i = 0; i < n; i++)
    {
        toplam += atoi(dizi[i]);
    }
 
    return toplam;
}

int main(){
    
    char komut[50];
    char *argumanlar[50];
    
    while (1){
        int n = 1;

        printf("> ");
        fgets(komut, sizeof(komut), stdin);

        argumanlar[0] = strtok(komut, " \n");

        while ((argumanlar[n] = strtok(NULL, " \n")) != NULL){
            n++;
        }

        if(strcmp(argumanlar[0], "topla") == 0){
            printf("toplam: %d\n", topla(&argumanlar[1], n-1));
        }

        if(strcmp(argumanlar[0], "cikis") == 0){
            break;
        }
        
    }
    

    return 0;
}
