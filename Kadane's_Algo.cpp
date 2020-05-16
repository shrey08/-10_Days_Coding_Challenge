#include <bits/stdc++.h>
using namespace std;

int Maxsum(int a[], int n)
{
    int i, max_till_now = a[0],cur_max=a[0];
    for(i=1;i<n;i++)
    {
        cur_max=max(a[i],cur_max+a[i]);
        max_till_now=max(max_till_now,cur_max);
    }
    return max_till_now;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,a[n],max_sum;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    max_sum=Maxsum(a,n);
	    cout<<max_sum<<endl;
	}
	return 0;
}