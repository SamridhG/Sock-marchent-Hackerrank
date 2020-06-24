#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,a,i;
    static int sum;
    cin>>n;
    vector<int>L;
    for(i=0;i<n;i++)
    {
         cin>>a;
        L.push_back(a);
    }
    sort(L.begin(),L.end());
    for(i=0;i<n-1;i++)
    {
        if(L[i]==L[i+1])
        {
            sum+=1;
            i=i+1;
        }
    }
    cout<<sum;
    return 0;
}
