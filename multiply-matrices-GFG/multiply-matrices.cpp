/*Complete the function below*/
void multiply(int A[][100], int B[][100], int C[][100], int N) {
    // add code here.
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int sum=0;
            for(int k=0;k<N;k++){
                sum+=A[i][k]*B[k][j];
                C[i][j]=sum;
            }
        }
    }
}
