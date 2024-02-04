#include<stdio.h>

#define vertices 100

int adjmat[vertices][vertices]; 
int visited[vertices], queue[vertices], n;

void bfs(int startPoint){
    int front = -1, rear = -1;
    visited[startPoint] = 1;
    queue[++rear] = startPoint;
    while(rear != front){
        int current_vertex = queue[++front];
        printf("%d ", current_vertex);

        for(int i = 0; i<n; i++){
            if(adjmat[current_vertex][i] && !visited[i]){
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

void main(){
    int starting_point;
    printf("\nEnter number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the adjacent matrix:\n");
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            scanf("%d", &adjmat[i][j]);
        }
        printf("\n");
    }
    printf("Enter the starting vertex (1st Vertex is 0): ");
    scanf("%d", &starting_point);
    bfs(starting_point);
}

