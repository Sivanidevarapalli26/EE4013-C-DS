#include<stdio.h>
int main(){
    int arr[4][5] ;
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            arr[i][j]=10*i+j;
            
        }
        
    }
    int *ptr = &arr;

    //accessing the elements of 2D array using ptr
    for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
            printf("%d ",*((ptr+i*5)+j)); //5 is the number of columns
            //*((ptr+i*5)+j) is similar to arr[i][j]
            }
            printf("\n");
    }
printf("%d",*(arr[1]+9));
return 0;
}
