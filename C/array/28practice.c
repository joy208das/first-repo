/*find unique element*/
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
               int arr[n];
        for(int j=0; j<=n; j++)
        {

            scanf("%d",&arr[j]);
        }
        for(int i=0; i<=n; i++)
        {
            int dc=0;
            for(int j=0; j<=n; j++)
            {
                if(i!=j && arr[i]==arr[j])
                {
                    dc++;
                }

            }
            if(dc=0)
            {
                printf("%d",arr[i]);
            }
        }
    }


    return 0;
}
