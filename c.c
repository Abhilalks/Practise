int main()

{

    int a[20],i,j,n,k;

    printf("Enter the limit\n");

    scanf("%d",&n);

    printf("Enter numbers\n");

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

    }

    printf("Enter value for k\n");

    scanf("%d",&k);

    for(i=0;i<n;i++)

    {

        for(j=i+1;j<n;j++)

        {

            if((a[i]+a[j])==k)

            {

                printf("True for %d + %d",a[i],a[j]);

            }

        }

    }

    

    return 0;

}