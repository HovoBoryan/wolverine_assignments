#include<iostream>
void mem_cpy(char*, char*, size_t);
int main()
{
    const size_t size = 5; 
    char arr[] = "hello";
    char arr1[size];
    mem_cpy(arr,arr1, size);
    return 0;
}
void mem_cpy(char* arr, char* arr1, size_t size)
{
        for (int i = 0; i < size; ++i)
            
            {
                arr1[i] = arr[i];
                
                std::cout << "'" << arr1[i] <<"'";
            }
        
        
}
    