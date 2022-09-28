#include<iostream>
std::string ToLowerCase ( std::string & );
int main()
{
    std::string str;
    str = "HELLO";
    ToLowerCase ( str );
    std::cout << str;
    return 0;
}

std::string ToLowerCase ( std::string & str )
{

    for( int i = 0; i < str.size() ; ++i )
    {
       if( str[i] >= 'A' && str[i] <= 'Z' )
       {
           str[i] += 32;
       }
     }
    return str;
}