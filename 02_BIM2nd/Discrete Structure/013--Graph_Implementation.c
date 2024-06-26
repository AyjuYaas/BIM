#include<stdio.h>

void main(){
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    int adjMat[vertices][vertices];
    printf("\nEnter the adjacency matrix:\n");
    for(int i = 0; i<vertices; i++){
        for(int j = 0; j<vertices; j++){
            printf("From %d to %d: ", i, j);
            scanf("%d", &adjMat[i][j]);
        }
        printf("\n");
    }

    //Displaying
    for(int i = -1; i<vertices; i++){
        if(i==-1){
            printf("V ");
            for(int k = 0; k<vertices; k++){
                printf("%d ", k);
            }
            printf("\n");
            continue;
        }
        for(int j = -1; j<vertices; j++){
            if(j==-1) printf("%d ", i);
            else{
                printf("%d ", adjMat[i][j]);
            }
        }
        printf("\n");
    }
}