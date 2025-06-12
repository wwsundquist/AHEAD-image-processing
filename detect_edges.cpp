#define N 16
#define M 16

void detect_edges(int input[N][M], int output[N][M]) {
    int laplacian_kernel[3][3] = {{0, -1, 0}, {-1, 4, -1}, {0, -1, 0}};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i < 1 || i >= N - 1 || j < 1 || j >= M - 1) {
                output[i][j] = 0;
            }
            else {
                int sum = 0;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l <3; l++) {
                        sum += input[i + k -1][j + l - 1] * laplacian_kernel[k][l];
                    }
                }
                output[i][j] = sum;
            }
        }
    }
}
