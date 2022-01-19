#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,rem,len;
		long long mod = pow(10,9)+7;
		cin>>n>>m;
		string s = "";
		
		while(m--)
		{	
			s = "";
			while(n>0)
			{	
				rem = n%10;
				rem++;
				s = to_string(rem) + s;
				n=n/10;
			}

			n = stoll(s);
		}
		len = s.length()%mod;
		
		//len = len%mod;
		cout<<len<<endl;

	}

	return 0;
}