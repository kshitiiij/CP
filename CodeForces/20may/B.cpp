#include<bits/stdc++.h>
#include<cstring>
using namespace std;

typedef long long int ll;

ll t,len,i;

bool pal(string s,ll len)
{
	if(len%2==0)
	{
		string sub = s.substr(len/2,len-1)
		string rev = string(sub.rbegin(),sub.rend());

		if(s.substr(0,len/2-1)==rev)
			return true;
		else 
			return false;
	}
	else
	{
		sub = s.substr(len/2+1,len-1);
		rev = string(sub.rbegin(),sub.rend());

		if(s.substr(0,len/2-1)==rev)
			return true;
		else
			return false;
	}
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>len;
		string s;
		cin>>s;
		ll alice=0,bob=0;
		ll flag=0;
		ll change = 0;

		for(i=0;i<len/2;i++)
		{
		
			if(!pal(s,len) && change == 0)
			{
				reverse(s);
				flag ==0 ? 1:0;
			}


			else
			{	
			
				if(s[i]=='0' && flag == 0)
				{
				s[i] = '1';
				flag=1;
				alice++;
				}
				else if(s[i]=='0' && flag == 1)
				{
				s[i] = '1';
				flag=0;
				bob++;
				}
			}

		





		}
		
	}
	return 0;
}