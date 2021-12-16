#include<iostream>
const unsigned int N = 4; 
int** rotate_matrix(int** &arr, int N)
{
    int** arr_tmp = new int*[N];
    for (size_t i = 0; i < N; i++)
    {
        arr_tmp[i] = new int[N];
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            arr_tmp[i][j] = arr[i][j];
        }
        std::cout<<std::endl;
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            int n = i; int m = j;
            m = n; 
            n = N - 1 - j;
            arr[n][m] = arr_tmp[i][j];
        }        
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    } 
    for (size_t i = 0; i < N; i++)
    {
        delete [] arr_tmp[i];
        arr_tmp[i] = nullptr;
    }
    delete [] arr_tmp;
    arr_tmp = nullptr;    
    return arr;
    
}
int main()
{
    int** arr = new int*[N];
    for (size_t i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }
    int k{0};
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            arr[i][j] = k++;
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    } 

    std::cout<<"Matrix:";

    rotate_matrix(arr, N); 
    for (size_t i = 0; i < N; i++)
    {
        delete [] arr[i];
        arr[i] = nullptr;
    }
    delete [] arr;
    arr = nullptr;
      
    return 0;
}