#include <bits/stdc++.h>
using namespace std;
int t[1002][1002];

int knapsack(int wt[],int val[],int W, int n)
{
    
    if(n==0 || W==0)
        return 0;
    if(t[n][W] != -1)
        return t[n][W];
    if(wt[n-1]<=W)
    {
        t[n][W]= max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
        return t[n][W];
    }
    else if(wt[n-1]>W)
    {
        t[n][W]=knapsack(wt,val,W,n-1);
        return t[n][W];
    }
}

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int i,n,W;
	    cin>>n;
	    cin>>W;
	    int value,val[n],wt[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>val[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>wt[i];
	    }
	    memset(t,-1,sizeof(t));
	    value=knapsack(wt,val,W,n);
	    cout<<value<<endl;
	}
	return 0;
}
