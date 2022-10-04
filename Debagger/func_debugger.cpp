#include<iostream>
#define DEBUG
void Log(const std::string&);

int main()
{
    std::string str;
    str = "Your programm is working :";
    std::cout << std::endl;
    
    Log(str);
    
  for (int i = 0; i < 10; ++i)
  {
      std::cout << i <<" , ";
  }
    std::cout << std::endl;
    
    Log(str); 
    
    return 0;
}
void Log(const std::string& str)
{
    #ifdef DEBUG
    std::cout << str << std::endl;
    #endif // DEBUG
}