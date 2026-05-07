#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n=5;
    int i;

    printf("Initialk array size:%d\n",n);

    // Allocate initial memory using calloc
    ptr=(int *)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    else
    {
        printf("Initial elements:\n");
        for(i=0;i<n;i++)
        {
            printf("%d",ptr[i]);
        }
        printf("\n");

        // Expand array to 10 elements using realloc
        n=10;
        printf("New array size:%d\n",n);

        ptr=realloc(ptr,n*sizeof(int));
        printf("Memory reallocated successfully.\n");

        // Fill new elements (index 5 to 9)
        for(i=5;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("All elements:\n");
        for(i=0;i<n;i++)
        {
            printf("%d, ",ptr[i]);
        }
        free(ptr);
    }
    return 0;
}

