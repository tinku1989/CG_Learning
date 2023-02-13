/*# CG_Learning*/
/*Training purpose*/

#include <stdio.h>
int main() 
{
    large_element();
	small_element();
}
void larger_array()
{
    // Write C code here
    int i,larger_value;
    int arr[]={1,4,2,9,10,8};
    int *ptr=&arr;
    for(i=0;i<6;i++)
    {
        if((ptr[4]) <= (ptr[i])) 
        {
            larger_value = ptr[i];
    
        }
    }
    printf("larger values is = ");   //printing the larger value in the array
    printf("%d",larger_value );
    return 0;
}
