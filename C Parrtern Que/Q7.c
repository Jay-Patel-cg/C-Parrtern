#include <stdio.h>
int main()
{

    int n;
    printf("Enter The Value : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ",j);
        }
        printf("\n");
    }
    return 0;
}
