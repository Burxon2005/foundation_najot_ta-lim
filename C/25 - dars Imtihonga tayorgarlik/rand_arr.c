
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_arr(int *array,int n){
    for (int i = 0; i < n; i++){
        array[i] = 1 + rand()%10;
    }
}



void Print_half_arr(int *array, int n){
    for (int i = 0; i < n/2; i++){
        printf("%d ",array[i]);
    }
}


void Print_second_half_arr(int *array, int n){
    for (int i = n/2; i < n; i++){
        printf("%d ",array[i]);
    }
}


int main(){


    int n;

    printf("n = "); 
    scanf("%d",&n);
    
    srand(time(0));

    int *array;

    array = (int*)malloc(n*sizeof(int));


    rand_arr(array,n);
    puts("");
    Print_half_arr(array,n);
    Print_second_half_arr(array,n);


    return 0;
}