#include <stdio.h>
   int main(){
   

    int left, n, i, right, mid, target;
    left = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    right = n-1;
    int arr[n];


    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]); 
    }


    printf("Enter the target value: ");
    scanf("%d", &target);


    while(left<=right){
      mid = (left+right)/2;
        if(arr[mid] == target){
            printf("\nThe value is %d & the index position is %d", target, mid);
            return 0;
        }
        else if(arr[mid] < target){
            left = mid+1;
            }
        else{
            right = mid-1;
          }   
    }
    printf("The value %d is not present in the array", target);

}
