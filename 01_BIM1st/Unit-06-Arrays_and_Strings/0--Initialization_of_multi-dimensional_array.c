#include<stdio.h>
int main(){

/******** METHOD 1 FOR INITIALIZATION ************/
    int a[3][2] = {{13, 12}, {1, 5}, {7, 8}};


/******* METHOD 2 FOR INITIALIZATION ***********/
    int a1[3][2] = {13, 12, 1, 5, 7, 8};
                // ------  ----  ----
               // Working same as above
              // Just no barckets


/******* METHOD 3 FOR INITIALIZATION ********/
    int a2[][2] = {13, 12, 1, 5, 7, 8};
                // ------  ----  ----
               //  2 colums makes up a row so the more the data
              // the more the row it sets up automatically 
             // thus column more inmortant than row


/********* PRINTING SECTION ****************/



return 0;
 
}