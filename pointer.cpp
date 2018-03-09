#include<iostream>
int main()
{
  int a=0,b=1;
  int *p=&a; //アドレスを代入
  std::cout<<*p<<std::endl;//0
  *p=2;
  std::cout<<a<<std::endl;//2
  p=&b;
  std::cout<<*p<<std::endl;//1
  return(0);
}
