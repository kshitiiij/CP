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
		ll a=0;
		for(int k=j;k<j+len;k++)
		{
			s[a] = str[k];
			a++;
		}

		

		ll flag =0,count=0;
		char hand;
		for(i=0;i<len;i++)
		{
			if(flag ==0 and s[i] == 'X')
			{
				flag=1;
				hand = 'L';
			}
			else if(flag == 0 and s[i] == 'O')
			{
				flag=1;
				hand = 'R';
			}
			else if(flag ==1 and s[i] == 'X' and hand == 'R')
			{
				count++;
				sum++;
				hand = 'L';
			}
			else if(flag ==1 and s[i] == 'O' and hand == 'L')
			{
				count++;
				sum++;
				hand = 'R';
			}

		}
	}
	return sum;

		
}

int main()
{
	fstream file1,file2;
	file1.open("weak_typing_chapter_2_validation_input.txt",ios::in);
	file2.open("output.txt",ios::out);
	file1>>s;
	t = stoi(s);
	for(int j=1;j<=t;j++)
	{	

		file1>>s;
		n = stoi(s);
		file1>>str;
		ll sum =0;
		
		for(int len=1;len<=n;len++)
		{
			sum += fw(str,len,n);
		}

		ll ans = sum % 1000000007;
		file2<<"Case #"<<j<<": "<<ans<<endl;
	}
	file1.close();
	file2.close();
	return 0;
}