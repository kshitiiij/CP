#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int len = s.length();
		int bud=0,group=0;
		for(int j=0;j<len;j++)
		{
			if(s[j]=='0' && bud==0)	
				bud=0;
			else if(s[j]=='0'&& bud!=0)
			{
				bud=0;
				group++;
			}
			else if(s[j]=='1'&& j==len-1)
			{
				bud++;
				group++;
			}
			else
				bud++;
		}

		cout<<group<<endl;
	}
	return 0;
}