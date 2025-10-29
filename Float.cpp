#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  float num;cin>>num;
  //Find The Integer Value
  int Integer_value = num;

  //Find the float Value
  float Float_Value = num-Integer_value;

  //According to condition run the loop
  if (Float_Value == 0)
  {
    cout<<"int"<<" "<<Integer_value<<endl;
  }else{
    cout<<"float"<<" "<<Integer_value<<" "<<setprecision(3)<<Float_Value<<endl;
  }
  
  return 0;
}
