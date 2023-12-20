/*Selsius'u fahrenhayt'a, fahrenhayt'ı selsius'a çeviren kod
Özlem HEZER
20.12.2023*/
#include<stdio.h>
int main(){
	int secim;
	float fahrenheit=0.0,selcius=0.0;
	printf("1-)selsius'u fahrenhayt'a cevir.\n2-)fahrenhayt'i selsius'a cevir\n");
	scanf("%d",&secim);
	if(secim==1){
		printf("Lutfen selsius degerini girin\n");
		scanf("%f",&selcius);
		fahrenheit=selcius*1.8+32;
		printf("fahrenhayt= %.2f",fahrenheit);
		
	}
	else if(secim==2){
		printf("Lutfen fahrenhayt degerini girin\n");
		scanf("%f",&fahrenheit);
		selcius=(fahrenheit-32)/1.8;
		printf("selsius= %.2f",selcius);
	}
	else{
		printf("Hatali giris");
	}
	return 0;
}
