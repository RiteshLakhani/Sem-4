#include<stdio.h>
#include<stdbool.h>

#define V 5 
#define infinity 999

void Dijkstra(int cost[V][V], int src);
int min_dist(int dist[], bool visited[]);

int main() {
    int cost[V][V], i, j, s;
    
    printf("Enter The Cost Matrix:-\n");
    for(i = 0; i < V; i++) {
        for(j = 0; j < V; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0) {
                cost[i][j] = infinity;
            }
        }
    }
    
    printf("Enter The Source Vertex: ");
    scanf("%d", &s);
    
    Dijkstra(cost, s);
    
    return 0;
}

void Dijkstra(int cost[V][V], int src) {
    int dist[V], i, c, v;
    bool visited[V];
    for(i = 0; i < V; i++) {
        dist[i] = infinity;
        visited[i] = false;
    }
    
    dist[src] = 0;
    
    for(c = 1; c <= V - 1; c++) {
        int u = min_dist(dist, visited);
        visited[u] = true;
        
        for(v = 0; v < V; v++) {
            if(!visited[v] && cost[u][v] && dist[u] + cost[u][v] < dist[v]) {
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }
    
    printf("The Shortest Path from %d to all other vertices is:\n", src);
    for(i = 0; i < V; i++) {
        if(i != src) {
            printf("Source: %d, Destination: %d, Min Cost: %d\n", src, i, dist[i]);
        }
    }
}

int min_dist(int dist[], bool visited[]) {
    int min = infinity, index, x;
    
    for(x = 0; x < V; x++) {
        if(!visited[x] && dist[x] <= min) {
            min = dist[x];
            index = x;
        }
    }
    
    return index;
}

