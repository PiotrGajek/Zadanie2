
#include "issue.h"
#include "pole.c"
#include "objetosc.c"

int main(){
	int wybor=1;
	while(wybor!=0){
		printf("\nWybierz figure: 1-kwadrat, 2-szescian; wybierz 0 by wyjsc.\n");
		scanf("%d",&wybor);
		if(wybor==0)return 0;
		float bok;
		printf("\nWprowadz dlugosc boku: ");
		scanf("%f",&bok);
		if(bok<=0){
			printf("\ndlugosc boku musi byc wieksza od 0!");
		}
		else{
			pole(bok,wybor);
			if(wybor==2)objetosc(bok);
		}
	}
}
