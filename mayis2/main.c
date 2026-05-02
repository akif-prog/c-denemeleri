/*

hedef: büyük projeye ekleyebileceğim özelliklerin provasını yapmak

- birkaç argüman alıp bunu bir diziye kaydetmek

*/

#include <stdio.h>
#include <string.h>




int main()
{
    
    char komut[50];
    char *argumanlar[100];
    int n = 1;
    int i;
    char *kontrol;

    printf("> ");
    fgets(komut, sizeof(komut), stdin);

    argumanlar[0] = strtok(komut, " \n\t");

    while ((kontrol = strtok(NULL, " \n\t")) != NULL)
    {
        argumanlar[n] = kontrol;
        n++;
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%s ", argumanlar[i]);
    }
    

    return 0;
}
