#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    printf("Enter number of matrices: ");
    scanf("%d",&n);

    // array will have n dimensions => n matrices means n dimensions but actually
    // input will be n+1 because A1 = p0 x p1, A2 = p1 x p2 ... An = p(n-1) x pn
    int p[n+1];
    printf("Enter %d dimensions: ",n+1);
    for(int i=0;i<=n;i++) scanf("%d",&p[i]);

    int dp[n][n];

    // dp[i][i] = 0 (single matrix no multiplication)
    for(int i=0;i<n;i++)
        dp[i][i] = 0; 

    for(int L=2; L<=n; L++){   // L = chain length
        for(int i=0; i<=n-L; i++){
            int j = i+L-1;
            dp[i][j] = INT_MAX;
            for(int k=i; k<j; k++){
                int cost = dp[i][k] + dp[k+1][j] + p[i]*p[k+1]*p[j+1];
                if(cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }

    printf("Minimum multiplication cost = %d\n", dp[0][n-1]);
    return 0;
}
