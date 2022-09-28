#include<iostream>
std::string ltrim( std::string & );
int main()
{
    std::string str;
    str = "  hello";
    ltrim(str);
    std::cout<<","<<str<<",";
    return 0;
}

std::string ltrim( std::string & str )
{
    int index = 0;
    int i = 0;
    while( str[i] == ' ' )
    {
        index++;
        ++i;
    }
    str.erase( 0,index );
    
    return str;
}