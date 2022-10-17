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
            if(a[i][j]!=0){
                k++;
            }
        }
    }
    int s[k][3];
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(a[i][j]!=0){
                s[p][0]=i; 
                s[p][1]=j;
                s[p][2]=a[i][j];  
                p++; 
            }
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<3;j++){
            printf("%d ",s[i][j]);
        }printf("\n");
    }
    return 0;
}
