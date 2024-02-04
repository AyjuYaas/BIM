/* Smallest element in array of size 8 */

#include<stdio.h>

int main(){

    int a[8] = {11, 22, 33, 4, 5, 6, 3, 8};
    int i, small;
	small = a[0]; //Suppose "small" i.e. a[0] is smallest at 1st
	
	/***** Calculation *****/
    for (i=1; i<8; i++){
        if (small > a[i]){ //if any a[] value is smaller than small
    		small = a[i];  // Replace that value with small
		}	         
    }
    
    printf ("%d is smallest", small);
    /*###############################################*/

    return 0;
}
