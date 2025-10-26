#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  long long int A,B,C;cin>>A>>B>>C;

  int X = A;
  int Y = B;
  int Z = C;

  if (A>B)
  {
    swap(A,B);
    if (B>C)swap(B,C);
    if (A>B)swap(A,B);
  }else{
    if (B>C) swap(B,C);
    if (A>B) swap(A,B);
  }

  cout<<A<<endl;
  cout<<B<<endl;
  cout<<C<<endl;
  cout<<endl;
  cout<<X<<endl;
  cout<<Y<<endl;
  cout<<Z<<endl;
  
  return 0;
}
