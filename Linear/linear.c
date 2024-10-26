#include<stdio.h>
int main(){

        //initialization variables
        int i, s_data=9, arraySize;
       // int d_list[arraySize];
        int found = 0;


        int d_list[20]={1,2,3,4,5,6,7,8,9};
       /* 
       //input array size and searching element
        printf("Enter the array size & searcing data:");
        scanf("%d",&arraySize);


        //Take array data
        printf("Enter the list of data: ");
        for ( i = 0; i < arraySize; i++)
        {
            scanf("%d",&d_list[i]);
              
        }

        //Take searcing element
        printf("Enter the searching data: ");
        scanf("%d",&s_data);\*/

        //find searching result
        for (i = 0; i < arraySize; i++){
            if (d_list[i] == s_data)
            {
                printf("Data found at index %d",i);
                found = 1;
                break;
            }  
        }
        if (found == 0)
            {
                printf("Data not found");
            }
       
      return 0;  
       
}
