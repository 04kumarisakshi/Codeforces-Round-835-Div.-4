#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            s = s+c;
            
        }
         sort(s.begin(), s.end());

        int A= int(s.back());
        int  ans =A-96;
         cout<<ans<<endl;
    }
    return 0;
}
