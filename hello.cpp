#include<iostream>
#include<string>
int main(int argc,char* argv[])
{
  std::cout<<"Hello World!"<<std::endl;
  int a=1,b;
  b=2;
  b=b+a;
  std::cout<<b<<std::endl;
  std::string raw;

  std::cout<<"input 0 or 1 >";
  std::cin>>raw;
  a=std::stoi(raw);
  if(a==0)
  {
    std::cout<<"You typed a 0";
    std::cout<<std::endl;
  }
  else
  {
    std::cout<<"You typed "<<a;
    std::cout<<std::endl;
  }
  a=1;
  while(a>0)
  {
    std::cout<<"input 0 or 1 >";
    std::cin>>raw;
    a=std::stoi(raw);
    if(a==9)
    {
      std::cout<<"You seem to like "<<a;
      std::cout<<std::endl;
      break;
    }
  }
  if(a==0)std::cout<<"ends with 0"<<std::endl;
  char c[4]={'a','b','c','d'};
  for(unsigned int i=0;i<(sizeof(c)/sizeof(c[0]));i++)
  {
    std::cout<<c[i]<<std::endl;
  }
  return(0);
}
