#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,m,a,i;


int main()
{
		cin>>t;
		while(t--)
		{
			string s;
			ll a=0,b=0,c=0;
			cin>>s;
			for(i=0;i<s.length();i++)
			{
				if(s[i]=='A')
					a++;
				else if(s[i]=='B')
					b++;
				else
					c++;
			}

			if((a+c)==b)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		
	
	return 0;
}