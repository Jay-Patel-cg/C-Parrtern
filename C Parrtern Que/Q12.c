#include <stdio.h>
int main()
{

   int n;
    printf("Enter The Value : ");
    scanf("%d",&n);

    for(int i=65; i<65+n; i++)
    {
        for(int j=1; j<=65+n-i; j++)
        {
            printf(" ");
        }
        for(int k=65; k<=i; k++)
        {
            printf("%c",k);
        }
        printf("\n");
    } 
    
    return 0;
}