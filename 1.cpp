#include<iostream>

char to_lowercase(char& ch)
{
    if(ch <= 'Z' && ch >= 'A') {ch = ch + 32;}
    return ch;
}


bool is_unique(std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        for (size_t j = i + 1; j < str.size(); j++)
        {
            if(to_lowercase(str[i]) == to_lowercase(str[j])){return false;}
        }        
    }
    return true;    
}

bool is_unique_ascii(std::string& str)
{
    int len = str.size();
    int ascii[256]{0};
    for (size_t i = 0; i < str.size(); i++)
    {
        ascii[to_lowercase(str[i])]++;
        if(ascii[str[i]] > 1) {return false;}
    }
    return true;    
}

bool is_unique_bit(std::string& str)
{
    int a[4]{0};
    for (size_t i = 0; i < str.size(); i++)
    {
        if(a[str[i]%4] & 1 << str[i]/4){return false;}
        a[str[i]%4] |= 1 << str[i]/4;
    }
    return true;
    
}

int main()
{
    std::string str = "helo p";
    std::cout<<is_unique_ascii(str)<<std::endl;
    return 0;
}