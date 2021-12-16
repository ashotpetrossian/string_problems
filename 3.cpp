#include<iostream>

std::string replace(std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[str.size() - 1] == ' ') {str.pop_back();}
        if(str[i] == ' ')
        str.replace(i , 1,  "%20");
    }
    return str;
}
int main()
{
    std::string str = "s  r g       ";
    std::cout<<replace(str)<<"|"<<std::endl;
    return 0;
}