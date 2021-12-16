#include<iostream>
#include<map>

void to_lowercase(std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[i] <= 'Z' && str[i] >= 'A') {str[i] = str[i] + 32;}
    }
}
void erase_spaces(std::string& str)
{
    for (size_t i = 0; i <= str.size(); i++)
    {
        if(str[i] == ' ') {str.erase(i,1);}
    }
}

bool is_palindrom_permutative(std::string& str)
{
    to_lowercase(str);
    erase_spaces(str);
    int ascii[128] {};
    for (size_t i = 0; i < str.size(); i++)
    {
        ascii[(str[i])]++;
    }
    size_t count{0}; int dang{};
    
    for (size_t i = 0; i < 128; i++)
    {
        if(ascii[str[i]] == 1){count++;}
        if((ascii[str[i]] % 2 == 0) && count == 1) {return true;}
    }
    return false;
}

bool canPermutePalindrome(std::string s) {
        std::map<char, int> count;
        for (const auto &n : s) {
            if (count.find(n) == count.end()) {
                count[n] = 1;
            } else {
                count[n] ++;
            }
        }
        int j = 0;
        for (auto i = count.begin(); i != count.end(); ++ i) {
            if ((i->second % 2) == 1) {
                j ++;
                if (j > 1) {
                    return false;
                }
            }
        }
        return true;
    }

int main()
{
    std::string str = "ATco ota";
    std::cout<<is_palindrom_permutative(str)<<"|"<<std::endl;
    std::cout<<canPermutePalindrome(str)<<"|"<<std::endl;
    return 0;
}
