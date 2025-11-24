#include <stdio.h>

#define INF 999999

int main() {

    int n;
    scanf("%d",&n);

    int dist[10][10];

    // input adjacency matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&dist[i][j]);
            if(dist[i][j] == -1) dist[i][j] = INF; // -1 means no edge
        }
    }

    // floyd warshall
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][j] >= INF) printf("INF ");
            else printf("%d ",dist[i][j]);
        }
        printf("\n");
    }
    return 0;
}