#include <stdio.h>
int main()
{

    int n;
    printf("Enter The Value : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<= (2 * i - 1); k++)
        {
            printf("%c",k+64);
        }
        printf("\n");
    }

    //  int n;
    // printf("Enter The Value : ");
    // scanf("%d",&n);

    for(int l=1; l<=n; l++)
    {
        for(int m=1; m<=l; m++)
        {
            printf(" ");
        }
        for(int o=1; o<=2*(n-l)-1; o++)
        {
            printf("%c",o+64);
        }
        printf("\n");
    }


    return 0;
}