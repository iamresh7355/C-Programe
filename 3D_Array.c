#include<stdio.h>
int main(){
    int i,j,k;
    int arr[2][3][4];
    printf("Enter the elements of the 3D array:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                scanf("%d",&arr[i][j][k]);      // taking input for 3D array
            }
        }
    }
    printf("The elements of the 3D array are:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d ",arr[i][j][k]);      // printing the elements of 3D array
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}