#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n,int m)
{
    sort(arr,arr+n);
    int ans=INT_MAX;
    for(int i=0;i<=n-m;i++)
    {
        int d= arr[i+m-1]-arr[i];
        if(d<ans)
        {
            ans=d;
        }
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int m;
	    cin>>m;
	    cout<<find(arr,n,m)<<endl;
	}
	return 0;
}
