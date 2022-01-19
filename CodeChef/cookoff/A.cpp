#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int small=0,large=0,dig=0,spec=0;
		if(s.length()>9)
		{
			for(int j=0;j<s.length();j++)
			{
				if(islower(s[j]))
					small++;
				if(isupper(s[j]) && j!=0 && isupper(s[j]) && j!=(s.length())-1)
					large++;
				if(isdigit(s[j]) && j!=0 && isdigit(s[j]) && j!=(s.length()-1))
					dig++;
				if(s[j]=='@'||s[j]=='#'||s[j]=='%'||s[j]=='&'||s[j]=='?')
				{   
				    if(j!=0 && j!=(s.length()-1))
				        spec++;
				}
			}

			if(small>0 && large>0 && dig>0 && spec>0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
            //cout<<small<<large<<dig<<spec;
		}
		else
			cout<<"NO"<<endl;

	}

	return 0;
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int small=0,large=0,dig=0,spec=0;
		if(s.length()>9)
		{
			for(int j=0;j<s.length();j++)
			{
				if(islower(s[j]))
					small++;
				if(isupper(s[j]) && j!=0 && isupper(s[j]) && j!=(s.length())-1)
					large++;
				if(isdigit(s[j]) && j!=0 && isdigit(s[j]) && j!=(s.length()-1))
					dig++;
				if(s[j]=='@'||s[j]=='#'||s[j]=='%'||s[j]=='&'||s[j]=='?')
				{   
				    if(j!=0 && j!=(s.length()-1))
				        spec++;
				}
			}

			if(small>0 && large>0 && dig>0 && spec>0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
            //cout<<small<<large<<dig<<spec;
		}
		else
			cout<<"NO"<<endl;

	}

	return 0;
}