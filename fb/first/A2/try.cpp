#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i;
string str,s;

ll fw(string str,ll len,ll n)
{
	ll sum =0;
	for(int j=0;j<=n-len;j++)
	{
		//s = str.substr(j,j+len);
		// for(int k=j;k<j+len;k++)
		// 	cout<<str[k];
		s = str.substr(j,j+len);
		//s =str.substr(1,1);
		cout<<s<<" ";

	}

	return sum;

		
}

int main()
{
	// fstream file1,file2;
	// file1.open("weak_typing_chapter_1_input.txt",ios::in);
	// file2.open("output1.txt",ios::out);
	
	// file1>>s;
	// t = stoi(s);
	
		
		cin>>n;
		//file1>>s;

		cin>>str;
		ll sum =0;
		//n = stoi(s);
		//file1>>s;

		for(int len=n;len>=0;len--)
		{
			sum += fw(str,len,n);
			
		}
		//cout<<sum<<endl;
		
		//file2<<"Case #"<<j<<": "<<count<<endl;
		
	
	// file1.close();
	// file2.close();
	return 0;
}