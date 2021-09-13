#include<stdio.h>
#include<stdlib.h>

int main(){
    //No of rows(r)=4 and no of cols(c)=5
    int r=4,c=5,i,j;
    //Dynamically allocating a matrix in heap using malloc function
    int **arr = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         arr[i] = (int *)malloc(c * sizeof(int));
         
    //Allocating values of the matrix     
    // Note that arr[i][j] is same as *(*(arr+i)+j)
    for (int i = 0; i <  r; i++)
      for (int j = 0; j < c; j++)
         arr[i][j]=10*i+j;
         
    //printing the matrix elements    
    for (i = 0; i <  r; i++){
      for (j = 0; j < c; j++){
         printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
    //Required element address=first element in second row address + 9 + 3(diff from row end to next row start)
    printf("%d",*(arr[1]+9+3));
    return 0;
}

