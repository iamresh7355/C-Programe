#include<stdio.h>
void main(){
  /*  int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter the values of first 2D array: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of second 2D array: ");      // Addition of two 2D arrays
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the two 2D arrays is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of the two 2D arrays is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];          // multiplication of two 2D arrays
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("Modulo of the two 2D arrays is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]%b[i][j];          // modulo of two 2D arrays
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the first 2D array is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[j][i]);         // transpose of first 2D array
        }
        printf("\n");
    }
}  */
//---------------------------------------------------------------

int a[2][3]={{5,6,7},{9,10,11}};
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",a[i][j]);        // 2D array initialization and printing
    }
    printf("\n");
}
}

