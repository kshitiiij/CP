#include<iostream>
#include<string>
using namespace std;

int main()
{
int t,i;
char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
cin>>t;
for(i=0;i<t;i++)
	{
	int len,j;
	cin>>len;
	string encod,word="";
	cin>>encod;
	int start=0,end=15;
	for(j=0;j<len;j++)
		{
		if(j%4==0)
			{
			start=0;
			end=15;
			}
		if(encod[j]=='0')
			end=(start+end)/2;
		else if(encod[j]=='1')			
			start=(start+end)/2 +1;	
		if(j%4==3)	
			word+=alpha[end];}
	cout<<word<<endl;
	}
return 0;
}