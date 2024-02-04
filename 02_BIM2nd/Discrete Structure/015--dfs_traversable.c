#include<stdio.h>
#define vertices 100

int adjmat[vertices][vertices];
int visited[vertices], no;

void dfs(int n){
    printf("%d ", n);
    visited[n] = 1;
    for(int i = 0; i<no; i++){
        if((visited[i] == 0) && (adjmat[n][i] == 1)){
            dfs(i);
        }
    }
}

void main(){
    int startVertex;
    printf("\nEnter number of vertices: ");
    scanf("%d", &no);
    printf("\nEnter the adjacent matrix:\n");
    for(int i = 0; i<no; i++){
        visited[i] = 0;
        for(int j =0; j<no; j++){
            scanf("%d", &adjmat[i][j]);
        }
        printf("\n");
    }
    printf("Enter the starting vertex:");
    scanf("%d", &startVertex);
    dfs(startVertex);
}