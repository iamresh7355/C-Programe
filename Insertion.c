#include<stdio.h>
int main(){
  /*  int arr[6]={10,30,60,90,100};
    int position=2;
    int n=5,value=20,i;
    printf("Original array: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);                 // printing the original array
    }
    for(i=n; i>position;i--){
        arr[i]=arr[i-1];                       // shifting elements to the right
    }
    arr[position]=value; 
                                          // inserting the new value at the specified position
    printf("\nArray after insertion: ");
    for(i=0;i<n+1;i++){
        printf("%d  ",arr[i]);                   // printing the array after insertion
    }
    return 0;
}  */
//-------------------------------------------------------------------------
  
//     int arr[] = {10, 20, 30, 40, 50,60};
//     int n = 6; 
//     int position;

//     printf("Original array: ");
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     printf("\nEnter position to delete: ");   //deletion of an element from the array
//     scanf("%d", &position);

    
//     for(int i = position; i <= n - 2; i++) {
//         arr[i] = arr[i + 1];
//     }
//     n--; 

//     printf("\nArray after deletion: ");
//     for(int i = 0; i < n; i++) 
//         printf("%d ", arr[i]);
//     return 0;
// }
//--------------------------------------------------------------------------------


    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;  
    int position, newValue;

    printf("Original array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter position to update and new value: ");
    scanf("%d\n%d", &position, &newValue);                // updating an element in the array

    // printf("Enter new value: ");
    // scanf("%d", &newValue);

    if(position >= 0 && position < n) {
        arr[position] = newValue;
    } else {
        printf("Invalid position!\n");
    }
    printf("\nArray after updation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
