#include<iostream>
#include<cstdlib>
#include<ctime>
const int M = 5;
const int N = 6;

int** change_matrix(int** &arr, int M, int N)
{
    int** arr_tmp = new int*[M];
    for (size_t i = 0; i < M; i++)
    {
        arr_tmp[i] = new int[N];
    }
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            arr_tmp[i][j] = arr[i][j];
        }
        std::cout<<std::endl;
    }
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if(arr[i][j] == 0)
            {
                int n = i; int m = j;
                for (size_t k{0}; k < N; ++k)
                {
                    arr_tmp[n][k] = 0;
                }
                for (size_t k{0}; k < M; ++k)
                {
                    arr_tmp[k][m] = 0;
                }               
            }
        }        
    }   
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            arr[i][j] = arr_tmp[i][j];
        }        
    }
    for (size_t i = 0; i < M; i++)
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
    std::srand(std::time(0));
    int** arr = new int*[M];
    for (size_t i = 0; i < M; i++)
    {
        arr[i] = new int[N];
    }
    int k{1};
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            arr[i][j] = std::rand() % 10;
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    } 
    change_matrix(arr, M, N);
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;        
    }
    for (size_t i = 0; i < M; i++)
    {
        delete [] arr[i];
        arr[i] = nullptr;
    }
    delete [] arr;
    arr = nullptr;
    
    return 0;
}