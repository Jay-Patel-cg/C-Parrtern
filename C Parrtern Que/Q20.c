#include <stdio.h>
int main()
{

    // int n;
    // printf("Enter THe Value : ");
    // scanf("%d",n);
    // int num = 1;

    // for(int i=65; i<=65+n; i++)
    // {
    //     for(int j=65; j<=i; j++)
    //     {
    //         printf("%c ",num);
    //         num++ ;
    //     }
    //     printf("\n");
    // }

     int n;
    printf("Enter The value : ");
    scanf("%d",&n);
    int num=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c ", 'A' + num);
            num++ ;
        }
        printf("\n");
    }

    return 0;
}
