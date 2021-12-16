#include<iostream>
#include<cstring>

//solved with two types
bool threeTypesOfEdit(std::string& str, std::string& s)
{
    if(str.size() > s.size())
    {
        for (size_t i = 0; i < str.size(); i++)
        {
            std::string temp = str;
            str.erase(i, 1);
            if(str == s){return true;}
            str = temp;
        }
    }
    if(str.size() == s.size())
    {
        int count {0};
        for (size_t i = 0; i < str.size(); i++)
        {
            if(str[i] == s[i]){count++;}
        }
        if(count == str.size() - 1){return true;}
    }   
}
int main()
{
    std::string str = "bake";
    std::string s = "pale";
    std::cout<<threeTypesOfEdit(str, s)<<std::endl;
    return 0;
}