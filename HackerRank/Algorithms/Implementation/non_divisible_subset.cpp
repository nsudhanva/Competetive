#include<stdio.h>
#include<stdlib.h>

int find_max(int b[],int n,int i,int p) //maximum no of element present in modulo array 'b'
{
    int j;
    int count1=0;
    int count2=0;
    if(i==p) //in case of k/2 + k/2 = k, 1 value can be considered in subset
    {
        return 1;
    }
    for(j=0; j<n; j++)
    {
        if(b[j]==i)
        {
            count1++;
        }
    }
    for(j=0; j<n; j++)
    {
        if(b[j]==p)
        {
            count2++;
        }
    }

    if(count1>count2)
    {
        return count1;
    }
    else
    {
        return count2;
    }
}

int main()
{
    int n,k,i,sum,sum1,total_;
    scanf("%d%d",&n,&k); //no of element, modulo value
    int* a=(int*) malloc(n*sizeof(int));
    int* b=(int*) malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]); //scanning inputs
    }

    for(i=0; i<n; i++)
    {
        b[i]=a[i]%k; //finding the modulo & storing in saparate array
    }

    sum=0; //for initial nof element in subset is 0

    for(i=1; i<=k/2; i++) //half of k combination is distinct, total combination of k is repeated.
    {
        sum=sum+find_max(b,n,i,k-i);  //i+k-i=k
    }
    total_=sum;
    for(i=0; i<n; i++)
    {
        if(b[i]==0) //in case of 0 value modulo in array of modulo,then atleast 1 element can be considered
        {
            total_++;
            break;
        }
    }

    printf("%d",total_);
    return 0;
}
