#include<stdio.h>
void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int si = 0 , ei = 9 ;
    int mid, key = 7, flag = 0;
    while(si <= ei){
        mid = (si + ei) / 2;
        if(arr[mid] == key){
            flag = 1;
            break;
        }
        else if(arr[mid] < key){
            si = mid + 1;
        }
        else{
            ei = mid - 1;
        }
    }
    if (flag=1)
    {
        printf("Element found at index %d", mid);
    }
    else{
        printf("Element not found");
    }
    
}