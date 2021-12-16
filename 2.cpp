#include<iostream>
bool is_permut(std::string str1, std::string str2)
{
    if(str1.size() != str2.size()) {return false;}
    for (size_t i = 0, j = str2.size() - 1; i < str1.size(); i++, --j)
    {
        if(str1[i] != str2[j])   {return false;}      
    }
    return true;    
}
int main()
{
    std::string str1 = "allign"; std::string str2 = "ngilla";
    std::cout<<is_permut(str1, str2)<<std::endl;
    return 0;
}