#include<iostream>
using namespace std;
#include<cmath>

int main()
{

int i,t;
cin>>t;
for(i=0;i<t;i++)
{
	int n,j,a[n],val=0;
    cin>>n;
    for(j=0;j<n;j++)
        cin>>a[j];
    for(j=1;j<n-1;j++)
    {
        if(a[j-1]<a[j] && a[j+1]<a[j])
            val++;
        else if(a[j-1]>a[j] && a[j+1]>a[j])
            val++;
    }
    cout<<val<<endl;
}
return 0;
}