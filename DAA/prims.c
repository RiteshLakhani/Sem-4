#include<stdio.h>

void main(){
    int n, i, j, u, v, ne = 1, min;
    int cost[10][10];
    int visited[10] = {0};
    int min_cost = 0;

    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);

    printf("\n Enter the cost matrix:");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0) {
                cost[i][j] = 999;
            }
        }
    }

    visited[1] = 1;

    while(ne < n) {
        min = 999;
        for(i = 1; i <= n; i++) {
            if(visited[i]) {
                for(j = 1; j <= n; j++) {
                    if(!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        visited[v] = 1;
        ne++;
        min_cost += min;
        printf("\n Edge %d: (%d,%d) cost: %d\n", ne, u, v, min);
    }

    printf("\n Minimum cost = %d", min_cost);
}

