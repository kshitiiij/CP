#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		cin>>s1;
		int len = s1.length();
		for(int i=0;i<len;i++)
		{
			if(s1[i]=='p')
			{
				if(s1.substr(i,5)=="party")
				{
					s1.replace(i,5,"pawri");
					i+=4;
				}
			}
		}
		cout<<s1<<endl; 
	}


	return 0;
}