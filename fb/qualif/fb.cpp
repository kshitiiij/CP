#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,k;
ll maximum(ll arr[])
{
	ll maxi = -1;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>=maxi)
			maxi = arr[i];
	}
	return maxi;
}

ll maximum_cons(ll arr[])
{
	ll maxi = -1;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>=maxi && (i!=0 && i!=4 && i!=8 && i!=14 && i!=20))
			maxi = arr[i];
	}
	return maxi;
}

int main()
{
	//cin>>t;
	fstream file1,file2;
	file1.open("consistency_chapter_1_input.txt",ios::in);
	file2.open("output.txt",ios::out);
	string s;
	file1>>s;
	t = stoi(s);
	
	for(k=1;k<=t;k++)
	{
		//string s;
		//cin>>s;
		file1>>s;
		ll alpha[26];
		memset(alpha, 0, sizeof(alpha));
		ll vow=0,cons =0,flag=0;
		for(i=0;i<s.length()-1;i++){
			if(s[i]!=s[i+1])
				flag=1;
		}

		for(i=0;i<s.length();i++)
		{
			if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ) {
				vow++;
			}
			else
				cons++;
			alpha[s[i]-'A']++;

		}

		ll maxi;
		ll mini = min(vow,cons);
		if(s.length()==1 || flag==0)
			file2<<"Case #"<<k<<": "<<0<<endl;
		else if(cons == 0)
		{
			maxi = maximum(alpha);
			file2<<"Case #"<<k<<": "<<min((vow-maxi)*2,vow)<<endl;
		}
		else if(vow ==0)
		{
			maxi = maximum(alpha);
			file2<<"Case #"<<k<<": "<<min((cons-maxi)*2,cons)<<endl;
		}
		else
		{
			ll max_cons = maximum_cons(alpha);
			ll max_vow = max({alpha[0],alpha[4],alpha[8],alpha[14],alpha[20]});
			ll ans = min(((vow-max_vow)*2+cons),((cons-max_cons)*2+vow));
			file2<<"Case #"<<k<<": "<<ans<<endl;
		}

	}
	file1.close();
	file2.close();
	return 0;
}