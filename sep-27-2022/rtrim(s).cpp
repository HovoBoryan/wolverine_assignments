#include<iostream>
std::string rtrim(std::string&);
int main()
{
    std::string str;
    str = "hello  ";
    
    std::cout<<rtrim(str);
    
    return 0;
}
std::string rtrim(std::string& str)
{
    std::string str1;
    for( int i = 0; i < str.size(); ++i)
    {
        if(str[i] != ' ')
        {
          str1 += str[i];  
        }
    }
    return str1;
}
