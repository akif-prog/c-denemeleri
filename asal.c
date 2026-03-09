#include <stdio.h>

int main(){

	int ilkSayi, sonSayi, i, j;
	
	printf("ilk sayi girin:");
	scanf("%d",&ilkSayi);
	
	printf("son sayi girin:");
	scanf("%d",&sonSayi);
	
	for(i=ilkSayi; i<=sonSayi; i++){
		
		int asal=1;
		
		if(i<2){
			asal=0;
		}
		
		for(j=2; i/2>=j; j++){
			
			
			if(i%j==0){
				asal=0;
				break;
			}
			
		}
		
		if(asal==1){
				printf("%d ",i);
			}
	}
	
	return 0;
}
