#include <iostream>
#include <fstream>
int main ()
{
    std::ifstream infile;
    std::ofstream outfile;
    infile.open("input.txt");
    outfile.open("output.txt");
    while (!infile.eof())
    {
        std::string str;
        std::string str1;
        getline(infile,str);
        int size = str.size();
        
        for (int i = 0; i < size; ++i)
        {
            if (str[i] != ' ' && str[i] != ',')
            {
                str1 += str[i];
                if (i == size - 1)
                {
                    outfile << str1;
                }
                continue;
            }
            str1 += '\n';
            outfile << str1;
            str1 = "";
        }
    }
    infile.close();
    outfile.close();
}