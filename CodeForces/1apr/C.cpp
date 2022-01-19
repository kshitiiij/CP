#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int c;
	if(s.length()<2)
	{
		cout<<"YES\n";
		return 0;
	}
	else
	{	
		for(int i=2;i<s.length();i++)
		{
			c = int(s[i-2])+int(s[i-1])-2*65;
			c = c%26;
			if(c+65 != int(s[i]))
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES\n";
	return 0;
}