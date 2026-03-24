#include <stdio.h>

int m[20][20];
int s[20][20];

void printOptimal(int i, int j) {
    if (i == j) {
        printf("A%d", i);
        return;
    }
    printf("(");
    printOptimal(i, s[i][j]);
    printOptimal(s[i][j] + 1, j);
    printf(")");
}

int main() {
    int n, i, j, k, L;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    int p[n+1];

    printf("Enter dimensions array:\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &p[i]);

    
    for (i = 1; i <= n; i++)
        m[i][i] = 0;

    //table
    for (L = 2; L <= n; L++) {
        printf("\n--- Chain Length = %d ---\n", L);

        for (i = 1; i <= n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = 999999;

            printf("\nCalculating m[%d][%d]:\n", i, j);

            for (k = i; k < j; k++) {
                int cost = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];

                printf("k=%d -> cost = %d\n", k, cost);

                if (cost < m[i][j]) {
                    m[i][j] = cost;
                    s[i][j] = k;
                }
            }

            printf("Minimum cost for m[%d][%d] = %d (k=%d)\n",
                   i, j, m[i][j], s[i][j]);
        }
    }

    printf("\nMinimum multiplications = %d\n", m[1][n]);

    printf("Optimal Parenthesization: ");
    printOptimal(1, n);

    return 0;
}