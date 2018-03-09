#include<iostream>
int main()
{
  int a=0,b=1;
  int &r=a;
  std::cout<<r<<std::endl;//0
  r=2;
  std::cout<<a<<std::endl;//2
  //p=&b 参照先を変えることはできない
  std::cout<<r<<std::endl;//2
  return(0);
}
