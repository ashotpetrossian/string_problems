#include<iostream>

std::string compress_string(std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        int count{0};
        for (size_t j = i; j < str.size() - 1; j++)
        {
            if(str[j] != str[j+1]) {break;}
            else{++count;}
        }
        str.erase(i, count); 
        std::string str_count = std::to_string(count);
        if(count >= 1){
        str.insert(i + 1, std::to_string(count + 1));
        }
    }   
    return str; 
}

int main()
{
    std::string str = "aaaabcd";
    std::cout<<compress_string(str)<<std::endl;
    return 0;
}