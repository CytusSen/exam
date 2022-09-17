#include <stdio.h>
int main()
{
      int a[100], number, i, j, temp;

 	    printf("\n please enter the total number of elements :");
	    scanf("%d",&number);

            printf("\n please enter the array elements :");
	    for( i =0; i < number; i++)
            scanf("%d", &a[i]);

     	    for(i =1; i <= number - 1; i++)
	    {
		     for(j = i; j > 0&& a[j -1] > a[j]; j--)
	 	        {
		              temp = a[j];
		              a[j] = a[j - 1];
	                      a[j - 1] = temp;
		        }
            }
	   printf("\n insertion sort result : ");
	       for(i = 0; i < number; i++ )
		   {
		            printf(" %d \t",a[i]);
      	           }
	    printf("\n");    
	    return 0;
}
