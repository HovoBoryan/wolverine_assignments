#include<iostream>
#include<map>

std::string to_string(int);
int to_enum(std::string);
enum colors
{
    red,
    green,
    blue
};

int main()
{
    std::string str;
    int my_color;
    std::cout << "please enter 'red','green' or 'blue' colors names for searching numbers :" << std::endl;
    std::getline(std::cin,str);
    
    std::cout << "enter 0, 1 or 2 from enum number :" << std::endl;
    std::cin >> my_color;
    
    std::cout <<"Your "<<my_color<<" number color is  ' "<< to_string(my_color)<<" ' :"<< std::endl;
    
    std::cout << std::endl;
    
    std::cout <<"Your "<<str<<" color namber is '"<< to_enum(str)<<"' :"<< std::endl;
}

std::string to_string(int my_color)
{
   std::map < int, std::string > my_map;
   
    my_map[colors::red] = "red";
    my_map[colors::green] = "green";
    my_map[colors::blue] = "blue";
   
   return my_map[my_color];
}

int to_enum(std::string str)
{
  std::map < std::string,int > MY_map;
 
    MY_map["red"] = colors::red;
    MY_map["green"] = colors::green;
    MY_map["blue"] = colors::blue;
 
    return MY_map[str];
}