#include<stdio.h>
void main()
{   
    printf("Even:- ") ;
    for(int i = 0; i <= 10; i++)
    {
       if (i%2==0)
       {
        printf("%d ",i) ;
       }
       
    }
    printf("\nOdd:- ") ;
    for(int i = 0; i <= 10; i++)
    {
       if (!(i%2==0))
       {
        printf("%d ",i) ;
       }
       
    }
    
}
