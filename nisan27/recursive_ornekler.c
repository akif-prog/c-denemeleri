/*

görev: 
Kullanıcıdan pozitif bir sayı al

(+)Sayının basamak sayısını bul
Sayının rakamları toplamını bul
Sayıyı tersten yazdır (örn: 1234 → 4321)
Sayının içinde kaç tane belirli bir rakam var (örneğin kullanıcıdan bir rakam daha al)

*/


#include <stdio.h>

int basamak_bulucu(int a){

    if(a <= 9){
        return 1;
    }

    return 1 + basamak_bulucu(a/10);
}

int basamak_toplayici(int a){

    if(a <= 9){
        return a;
    }
    
    return a%10 + basamak_toplayici(a/10);
}

int sayiyi_tersle(int a, int sonuc){

    if(a == 0){
        return sonuc;
    }

    sonuc = (sonuc * 10) + (a % 10);

    return sayiyi_tersle(a/10, sonuc);
}

int main()
{

    int sayi;
    int sonuc = 0;

    printf("pozitif sayi giriniz: ");
    scanf("%d", &sayi);

    printf("basamak sayisi: %d\n", basamak_bulucu(sayi));
    printf("basamak sayilarinin toplami: %d\n", basamak_toplayici(sayi));
    printf("sayinin ters yazimi: %d\n", sayiyi_tersle(sayi, sonuc));

    
    return 0;
}
