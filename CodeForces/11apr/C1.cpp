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
			string num = to_string(n);
			s = "";
			for(int i=0;i<num.length();i++)
			{
				string l = num[i];
				long long m = stoll(l) +1;
				s = s + to_string(m);
			}
			n = stoll(s);
		}
		len = s.length()%mod;
		cout<<len<<endl;

	}

	return 0;
}