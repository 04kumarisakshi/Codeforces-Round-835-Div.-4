/*Given three distinct integers a, b, and c, find the medium number between all of them.

The medium number is the number that is neither the minimum nor the maximum of the given three numbers.

For example, the median of 5,2,6 is 5, since the minimum is 2 and the maximum is 6.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b,c;
    int t;
    cin>>t;
    while(t--)
    { cin>>a>>b>>c;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        cout<<arr[1]<<endl;



    }
    return 0;
}
