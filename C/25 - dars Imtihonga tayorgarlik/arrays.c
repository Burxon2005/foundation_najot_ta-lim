#include<stdio.h>


int main(){
    int n,a=0;
    scanf("%d",&n);

    int array[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            array[i][j] = a++;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            array[i][j] = a++;
            if (j<=n-1-i){
                printf("%2d ",array[i][j]);
            }
            else{
                printf("*  ");
            }
            //printf("%2d ",array[i][j]);
        }
        printf("\n");
        
    }
    

    

    return 0;
}