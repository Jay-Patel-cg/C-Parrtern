#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Value : ");
    scanf("%d",&n);

    for(int i=n; i>0;i--)
    {
        for(int j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(int k=n; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}








// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("ENter The Value : ");
//     scanf("%d",&n);

//     for(int i=1; i)



//     return 0;
// }
















