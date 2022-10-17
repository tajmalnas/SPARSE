#include<stdio.h>

int main(){
    int n,m;
    printf("Enter no of row and coloum:\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0){
                k++;
            }
        }
    }
    if(k>(n*m)/2){
        printf("it is a sparse matrix\n");
    }
    else{
        printf("it is a not sparse matrix\n");
    }
    return 0;
}
