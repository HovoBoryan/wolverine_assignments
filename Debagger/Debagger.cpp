#include<iostream>
#define DEBAG

int main()
{
    int num = 10;
    
    #ifdef DEBAG
    std::cout << "it is the start of your cicle : " << std::endl;
    #endif //DEBAG
    
    for (int i = 0; i < num; ++i)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
    
    #ifdef DEBAG
    std::cout << "it is the end of your cicle :" << std::endl;
    #endif// DEBAG
    
    return 0;
}