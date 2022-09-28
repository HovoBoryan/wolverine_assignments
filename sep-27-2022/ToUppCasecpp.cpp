#include<iostream>
std::string ToUpperCase ( std::string & );
int main()
{
    std::string str;
    str = "hello";
    ToUpperCase ( str );
    std::cout << str;
    return 0;
}

std::string ToUpperCase ( std::string & str )
{

    for( int i = 0; i < str.size() ; ++i )
    {
       if( str[i] >= 'a' && str[i] <= 'z' )
       {
           str[i] -= 32;
       }
     }
    return str;
}