#include<iostream>

bool isSubString(std::string& str, std::string& s)
{
    for (int i = 0; i < str.size(); i++)
        {
            int count = 0; int j = 0; int tmp_i = i;
            while (j < s.size() && str[i] == s[j])
            {
                ++count;++j;++i;
            }
            i = tmp_i;
            if (count == s.size())
            {
                return true;
            }    
        }
    return false;
}

bool is_a_rotate_type(std::string str, std::string s)
{
    if(str.size() != s.size()){return false;}
    for (size_t i = 0, j = s.size() - 1; i < str.size(); ++i, --j)
    {
        if(str[i] != s[j]) {return false;}
    }
    return true;    
}
int main()
{
    std::string str = "hayhayko"; std::string s = "okyihyah";
    std::cout<<std::boolalpha<<is_a_rotate_type(str, s)<<std::endl;
    return 0;
}