#include <stdio.h>


int main()

{

    int a[20],i,j,b[20],n;

    printf("Enter a limit\n");

    scanf("%d",&n);

    printf("Enter the array elements\n");

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)

    {

        b[i]=1;

        for(j=0;j<n;j++)

        {

            if(a[i]!=a[j])

            {

                b[i]=a[j]*b[i];

            }

        }

    }

    printf("Expected output is\n");

    for(i=0;i<n;i++)

    {

        printf("%d\n",b[i]);

    }


    return 0;

}