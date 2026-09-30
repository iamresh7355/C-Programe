#include<stdio.h>
void main(){
  /*  int a[5];
    for(int i=0;i<5;i++){
        printf("Enter the value of a[%d]: ",i);    
        scanf("%d",&a[i]);
    }
    printf("The values of the array are: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}  */
//-------------------------------------------------------
   /** int a[5];
  int b[5];
  int c[5];
  int d[5];
  int i,j,k;
  printf("Enter the values of first array: ");
    for(i=0;i<5;i++){
            scanf("%d",&a[i]);
        }
        printf("Enter the values of second array: ");
        for(j=0;j<5;j++){
            scanf("%d",&b[j]);
        }
        printf("Sum the values of the two arrays: ");
        for(k=0;k<5;k++){
            c[k]=a[k]+b[k];
            d[k]=a[k]*b[k];
            printf("%d ",c[k]);
        }
        printf("\nProduct of the two arrays: ");
        for(k=0;k<5;k++){
            printf("%d ",d[k]);
        }
    }  */
   //---------------------------------------------------------------

    int a[3], b[3], sum[3], mul[3];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 3; i++) {
        sum[i] = a[i] + b[i];
        mul[i] = a[i] * b[i];
    }

    printf("\nSum of arrays: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", sum[i]);

    printf("\nMultiplication of arrays: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", mul[i]);
}
