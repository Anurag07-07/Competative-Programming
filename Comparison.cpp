#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int A,B;
  char S;
  cin>>A>>S>>B;
  if (S=='<')
  {
    if (A<B)
    {
      cout<<"Right"<<endl;
    }else{
      cout<<"Wrong"<<endl;
    }
  }
  if (S=='>')
  {
    if (A>B)
    {
      cout<<"Right";
    }else{
      cout<<"Wrong";
    }
    
  }

  if (S=='=')
  {
    if (A==B)
    {
      cout<<"Right";
    }else{
      cout<<"Wrong";
    }
  }
  
  
  
  return 0;
}
