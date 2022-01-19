//New Theatre Square
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,h,m,x,y,i,j;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n>>m>>x>>y;
		char sq[n][m];
		ll cost =0;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) 
				cin>>sq[i][j];
		}
		
		ll left,right;
		for(i=0;i<n;i++) {
			left =0;
			right = m-1;
			while(left<=right) {
				if(sq[i][left]=='.' and sq[i][left+1]=='.') {
					if(y<2*x)
						cost += y;
					else
						cost += 2*x;
					left ++;
				}
				else if(sq[i][left]=='.' and sq[i][left+1]!='.') {
					cost += x;
					
				}
				left++;
			}
		}

		cout<<cost<<endl;
	}

	return 0;
}