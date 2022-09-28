#include<iostream>
void mem_set(char*, char, size_t);
int main()
{
    const size_t size = 4; 
    char ch = 'a';
    char arr[size];
    mem_set(arr, ch, size);
    return 0;
}
void mem_set(char* arr, char ch, size_t size)
{
        for (int i = 0; i < size; ++i)
            
            {
                arr[i] = ch;
        
                std::cout << "'" << arr[i] <<"'";
            }
}
    