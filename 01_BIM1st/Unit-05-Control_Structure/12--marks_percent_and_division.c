/* Marks of students and determine division */
#include<stdio.h>
int main(){
	float p, m1, m2, m3, m4, m5;
	
	printf ("Enter Marks of the 5 subjects\n");
	scanf ("%f %f %f %f %f", &m1, &m2,&m3,&m4, &m5);
	
	p = ((m1+m2+m3+m4+m5)/500.0)*100.0;
	printf ("Your Percentage = %.2f%%\n", p);
	
	if (p>79){
		printf ("Distincton");
	}
	
	else if (p>69){
		printf ("First Divison");
	}
	
	else if (p>59){
		printf ("Second Division");
	}
	
	else if (p>49){
		printf ("Third Division");
	}
	
	else{
		printf ("Fail");
	}
	
	return 0;
}
