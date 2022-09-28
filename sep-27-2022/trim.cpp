#include<iostream>
std::string trim ( std::string & );
int main()
{
    std::string str;
    str = "  hello  ";
    trim ( str );
    std::cout << "," << str << ",";
    return 0;
}

std::string trim ( std::string & str )
{
    int index = 0;
    for( int i = 0; i < str.size() ; ++i )
    {
        while( str[i] == ' ' )
        {   
            str.erase( i,1 );
        }
     }
    return str;
}