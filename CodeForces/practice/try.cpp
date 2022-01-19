#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n;


int recur(vector<int> arr, int n, int k, vector<int> ::iterator num) {
        
        if(n==2) {
        	//cout<<n<<"dfd"<<endl;
            return 1;
        }
        else {
        	//cout<<n<<" ";
            cout<<*num<<" ";
            vector<int> ::iterator i;
            // i = num;
            i =arr.begin();
            //cout<<*i<<" ";
            int m = k;
            for(int j=1;j<=k;j++)
            {
            	// if(i == arr.end()-1)
            	// 	i = arr.begin();
            	// else
            	// 	++i;
                i == arr.begin()-1 ? i = arr.begin() : i++;

            }
            
            arr.erase(i);
            i--;
            
            
            // for(auto j=arr.begin();j!=arr.end();j++)
            //     cout<<*j<<" ";
            cout<<endl;
            n--;
            if(i!=arr.end()-1)
                return recur(arr,n,k, i);
            else
                return recur(arr,n,k,i);
            //return 0;
            
        }
    }



int main()
{
	
	vector<int> arr;
	int n=8,k=3;
	for(int i =1;i<=8;i++) arr.push_back(i);

	// for(int i =0;i<8;i++) cout<<arr[i]<<" ";
	// cout<<endl;

	int ans = recur(arr, n, k-1,arr.begin());

	
	
	return 0;
}













// class Solution {
// public:
//     int findTheWinner(int n, int k) {
        
//         vector<int> arr;
//         for(int i=1;i<=n;i++)   arr.push_back(i);
//         // for(int j=0;j<arr.size();j++)    cout<<arr[j]<<" ";
//         // cout<<endl;
//         //return 0;
//         return recur(arr, n, k, arr.begin());
        
//     }
    
    
    
// };