#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,m,i,j,k;

int main()
{
	// fstream file1,file2;
	// file1.open("weak_typing_chapter_1_input.txt",ios::in);
	// file2.open("output1.txt",ios::out);
	string s;
	// file1>>s;
	// t = stoi(s);
	cin>>t;
	vector<vector<ll>> style,trial;
	vector<ll> initial;
	for(int j=1;j<=t;j++)
	{	
		cin>>n>>m;
		// n = stoi(s);
		ll arr[m];
		ll a;
		for(i=0;i<m;i++) {
			cin>>a;
			initial.push_back(a);
		}

		// ll grid[n][m];

		for(i=0;i<n;i++)
		{
			vector<ll> temp;
			for(k=0;k<m;k++) {
					cin>>a;
					temp.push_back(a);
				}
			style.push_back(temp);
			temp.clear();
		}

		// trial = style;
		//sort(trial[0].begin(),trial[0].end());

		ll same,dorothy=0,one,two;
		
		sort(initial.begin(),initial.end());

		for(ll p=0;p<n;p++) {

			same = 0;
			ll first =0;
			sort(style[p].begin(),style[p].end());
			one =0;
			two =0; 
			if(p==0) {

				for(i=0;i<m;i++) {
					if(initial[one] == style[0][two]) {
						same++; one++; two++; first++;
					}
					else if(initial[one] < style[0][two])
						one++;
					else
						two++;
				}
		
			}
			else  {
				for(i=0;i<m;i++) {
					if(style[p-1][one] == style[p][two]) {
						same++; one++; two++;
					}
					else if(style[p-1][one] < style[p][two])
						one++;
					else
						two++;
				}

			}
			// if(same>0) {

			// }
			if(p==1)
				dorothy -= first;
			
			dorothy += m - same;
		
		}
		 
		cout<<dorothy<<endl;

	// file1.close();
	// file2.close();
	
}
return 0;
}