#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int n;
	
	string s;
	cin>>t;

	while(t--)
	{
		cin>>n;
		cin>>s;
		if(s[0]=='1'&&s[1]!='1')
		s[1]='2';
		if(s[s.length()-1]=='1'&&s[s.length()-2]!='1')
		s[s.length()-2]='2';
		for(int i=1;i<s.length()-1;i++)
		{
			if(s[i]=='1')
			{
			if(s[i+1]!='1')
			s[i+1]='2';
			if(s[i-1]!='1')
			s[i-1]='2';
			}
			
		}
		int c=0;
		for(int i=0;i<s.length();i++)
		if(s[i]=='0')
		c++;
		
		cout<<c<<"\n";
	}
 
} 