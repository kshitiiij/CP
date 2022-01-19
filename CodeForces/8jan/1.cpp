#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#include<cmath>

int main()
{

int i,t;
cin>>t;
for(i=0;i<t;i++)
{
	int n,j,k=0;
	cin>>n;
	string s="989";
	string h;
	int num=0;
	
	if(n==1)
		cout<<9<<endl;
	else if(n==2)
		cout<<98<<endl;
	else if(n==3)
		cout<<989<<endl;
	else
	{
		for(j=4;j<=n;j++,k++)
			{
				stringstream ss;
				ss<<k;
				ss>>h;
				s+=h;
				if(k==9)
					k=-1;
			}
		cout<<s<<endl;
	}
	


}
return 0;
}