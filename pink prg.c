#include<stdio.h>
void main()
{        
        int i,a,n,num[30],count=0;
        printf("Enter the value of N \n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for(i=1;i<=n;i++)
        scanf("%d", &num[i]);
       
        for(i=1;i<n;i++)
        {
                if (num[i]>num[i+1])
               {
                   a=num[i];
                   num[i]=num[i+1];
                   num[i+1]=a;
               }
        }
        for(i=1;i<=n;i++)
        {
        if(num[i]==i)
        {
        count++;
        }
        }
       
        if(count==n)
        printf("happy\n");
        else
        printf("sad\n");
}

