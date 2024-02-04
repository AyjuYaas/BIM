/* Profit, Loss or Breakeven Point */
#include<stdio.h>
int main(){
	float sp, cp;
	
	printf ("Enter Cost price: ");
	scanf ("%f", &cp);
	printf ("Enter Seling Price: ");
	scanf ("%f", &sp);
	
	if ((sp-cp)>0){
		printf ("There has been a profit");
	}
	
	else if ((sp-cp) == 0){
		printf ("Their is neither loss nor profit (Breakeven point)");
	}
	
	else{
		printf ("There has been a loss");
	}
	
	return 0;
}
