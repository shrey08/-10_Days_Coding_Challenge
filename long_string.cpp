#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n][102];
    for(int i=0;i<n;i++)
    {
        cin>>s[i][102];
    }
    for(int i=0;i<n;i++)
    {
        int l=strlen(s[i]);
        if(l>10)
        {
            cout<<s[i][0]+"(l-2)"+s[i][l-1]<<endl;
        }
        else
        {
            cout<<s[i];
        }
    }
    return 0;
}