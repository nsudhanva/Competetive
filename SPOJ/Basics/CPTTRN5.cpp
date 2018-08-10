#include<stdio.h>

int main()
{
    int tc, l, c, w, i, j;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %d",&l,&c,&w);
        for(i=0; i<=(w+1)*l; i++)
        {
            for(j=0; j<=(w+1)*c; j++)
            {
                if(i%(w+1)==0 || j%(w+1)==0)printf("*");
                else if(((i/(w+1))%2==0 && (j/(w+1))%2==0) || (i/(w+1))%2==1 && (j/(w+1))%2==1)
                {
                    if(i%(w+1)==j%(w+1)) printf("\\");
                    else printf(".");
                }
                else if( ((i/(w+1))%2==1 && (j/(w+1))%2==0) || ((i/(w+1))%2==0 && (j/(w+1))%2==1) )
                {
                    if(i%(w+1) == ((w+1)-(j%(w+1)))) printf("/");
                    else printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
