#include <stdio.h>

int main()
{
    int array[100], n, position, i;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    
    printf("Enter the elements\n");
    
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);
        
    printf("Enter the position of element to delete\n");
    scanf("%d", &position);
    
    for( i=position-1; i<n; i++)
        array[i]=array[i+1];
        
    for(i=0; i<n-1; i++)    
    printf("%d\n", array[i]);
    
    return 1;
}           