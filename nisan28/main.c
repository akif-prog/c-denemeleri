/*

hedef: Kullanıcıdan bir taban (base) ve bir üs (exponent) değeri alan, ardından bu işlemin sonucunu 
özyinelemeli (recursive) olarak hesaplayan bir C programı yazmak

*/

#include <stdio.h>

int us_al(int taban, int us){

    if(us == 0){
        return 1;           //neden burada herşeyi sıfırlayıp sonucu 1 yapmadı?
    }                       //çünkü bu "base case", iç içe fonksiyonlar bu noktada durup geriye doğru
                            //işlemleri yapılır

    return taban * us_al(taban, us-1);
}


int main()
{
    
    printf("sonuc: %d", us_al(5,3));


    return 0;
}
