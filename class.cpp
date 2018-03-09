#include<string>

class Event{
private:
  int start,end;
  std::string location;
public:
  Event(int sta,int en,std::string loc);
};

Event::Event(int sta,int en,std::string loc){
    start=sta;end=en;
    this->location=loc;
}
