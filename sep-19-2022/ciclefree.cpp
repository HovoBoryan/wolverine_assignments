#include<iostream>
int main()
{
    int num;
    int count = 0;
    std::cin>>num;
    loop:
    if(num--)
    {
     std::cout<<count++<<" , ";
     goto loop;
    }
    
    return 0;
}