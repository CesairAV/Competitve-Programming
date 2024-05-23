#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    long long count=0;
    vector<long long> v;
    for(long long i=0;i<n;i++)
    {
      long long x;
      cin>>(x);
      v.push_back(3*x+i);
      cout<<3*x+i<<endl;
    }
    sort(v.begin(),v.end());
    long long c=1;
    for(long long i=1;i<n;i++)
    {
      if(v[i]==v[i-1])
      c++;
      else
      {
        if(c%2==0)
        count+=(c/2)*(c-1);
        else
        count+=(c)*((c-1)/2);
        c=1;
      }
    }
    if(c%2==0)
    count+=(c/2)*(c-1);
    else
    count+=(c)*((c-1)/2);
    cout<<count<<endl;
  }
}