/*You are given an array a[0…n−1] of n integers. This array is called a "valley" if there exists exactly one subarray a[l…r] such that:

0≤l≤r≤n−1,
al=al+1=al+2=⋯=ar,
l=0 or al−1>al,
r=n−1 or ar<ar+1.
Here are three examples:


The first image shows the array [3,2,2,1,2,2,3], it is a valley because only subarray with indices l=r=3 satisfies the condition.

The second image shows the array [1,1,1,2,3,3,4,5,6,6,6], it is a valley because only subarray with indices l=0,r=2 satisfies the codition.

The third image shows the array [1,2,3,4,3,2,1], it is not a valley because two subarrays l=r=0 and l=r=6 that satisfy the condition.

You are asked whether the given array is a valley or not.

Note that we consider the array to be indexed from 0.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,s=0;
        cin>>n>>b;
        for(int i=1;i<n;i++)
        {
            cin>>a;
            if(b<a)
            s=max(s,1);
            if(b>a&&s)
            s=2;
            b=a;
        }
        if(s<=1)
        cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
}
