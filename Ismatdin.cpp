#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    int n;cin>>n;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
   
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
      if ((arr[i]%2==0) && (arr[i-1]%2!=0) || (arr[i]%2!=0) && (arr[i-1]%2==0) )
      {
        flag = true;
        break;
      }
    }

    if (flag)
    {
      sort(arr.begin(),arr.end());
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      
    }else{

      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
    }
    cout<<endl;
  }
  
  return 0;
}
