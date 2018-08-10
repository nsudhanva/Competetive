#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,x,y,i,j,f,k;
	    cin>>m>>x>>y;
	    x = x*y;
	    int a[101]={0};
	    for(i=0;i<m;i++)
	    {
	        cin>>f;
	        j = max(1,f-x);
	        k = min(f+x, 100);
	        while(j<=k)
	        {
	            a[j] = 1;
	            a[k] = 1;
	            j++;
	            k--;
	        }
	    }
	    int z=0;
	    for(i=1;i<=100;i++)
	    {
	        if(a[i]==0)
	        z++;
	    }
	    cout<<z<<endl;
	}
	
	return 0;
}