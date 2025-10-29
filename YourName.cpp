#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    int n;cin>>n;
    string s,t;cin>>s>>t;
    //Create a frequency Array of char

    if (n!=s.length() && n!=t.length())
    {
      cout<<"NO"<<endl;
      break;
    }else{
    vector<int> freq(26,0);

    for (int i = 0; i < s.length(); i++)
    {
      freq[s[i]-'a']++;
    }

    for (int i = 0; i < t.length(); i++)
    {
      freq[t[i]-'a']--;
    }

    bool flag = false;
    
    for (int i = 0; i < freq.size(); i++)
    {
      if (freq[i]!=0)
      {
        flag = true;
      }
    }

    if (flag)
    {
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
    
  }
  }
  return 0;
}
