#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i;

int main()
{
	fstream file1,file2;
	file1.open("weak_typing_chapter_1_input.txt",ios::in);
	file2.open("output1.txt",ios::out);
	string s;
	file1>>s;
	t = stoi(s);
	//cin>>t;
	for(int j=1;j<=t;j++)
	{	
		//cin>>n; 
		file1>>s;
		n = stoi(s);
		//string s;
		//cin>>s;
		file1>>s;

		ll flag =0,count=0;
		char hand;
		for(i=0;i<n;i++)
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
				hand = 'L';
			}

			else if(flag ==1 and s[i] == 'O' and hand == 'L')
			{
				count++;
				hand = 'R';
			}

		}
		file2<<"Case #"<<j<<": "<<count<<endl;
		
	}
	file1.close();
	file2.close();
	return 0;
}