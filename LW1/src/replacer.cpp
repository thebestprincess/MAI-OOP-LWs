#include "../include/replacer.h"

void replacer(std::string& str)
{
    for (char& ch : str)
    {
        if (ch == 'a')
        {
            ch = 'b';
        } else if (ch == 'b') 
        {
            ch = 'a';
        } else 
        {
            continue;
        }
    }
}