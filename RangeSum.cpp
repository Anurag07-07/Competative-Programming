#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    int sum = 0;
    int A,B;cin>>A>>B;
    for (int i = A; i <= B; i++)
    {
      sum += i;
    }

    cout<<sum<<endl;
  }
  return 0;
}
