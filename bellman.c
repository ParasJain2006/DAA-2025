#include <stdio.h>
#include <limits.h>

int main() {

    int V = 5;
    int edges[5][3] = {
        {1,3,2},
        {4,3,-1},
        {2,4,1},
        {1,2,1},
        {0,1,5}
    };

    int src = 0;

    int dist[5];
    for(int i=0;i<V;i++) dist[i] = 100000000; // 1e8
    dist[src] = 0;

    // relax V times
    for(int i=0;i<V;i++){
        for(int j=0;j<5;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if(dist[u] != 100000000 && dist[u] + wt < dist[v]){
                if(i == V-1){
                    printf("-1\n"); // negative cycle
                    return 0;
                }
                dist[v] = dist[u] + wt;
            }
        }
    }

    for(int i=0;i<V;i++)
        printf("%d ", dist[i]);

    return 0;
}