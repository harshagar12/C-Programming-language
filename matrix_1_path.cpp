#include <stdio.h>

int main() {
    int n;

    // Read matrix dimension
    scanf("%d", &n);

    // Create matrix to store the binary data
    int A[n][n];

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Start at the top-left corner (0, 0)
    int i = 0, j = 0;

    // Build the path string
    char path[2 * n - 1]; // Maximum path length: n moves (R or D)
    int path_length = 0;

    // Traverse the matrix until reaching the bottom-right corner (n-1, n-1)
    while (i != n - 1 || j != n - 1) {
        // Check if we can move down (D)
        if (i + 1 < n && A[i + 1][j] == 1) {
            path[path_length++] = 'D';
            i++;
        } else { // Otherwise, move right (R)
            path[path_length++] = 'R';
            j++;
        }
    }

    // Print the path
    printf("Path: ");
    for (int i = 0; i < path_length; i++) {
        printf("%c ", path[i]);
    }

    return 0;
}
