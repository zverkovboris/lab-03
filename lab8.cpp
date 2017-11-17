#include <iostream>
#include <cstring>

struct Matrix
{
    float **matrix;
    int n;
    int m;
};
Matrix newMatrix(const int& a, const int& b)
{
    float ** matrix = new float*[a];
    for (int i = 0; i < a; ++i)
    {
        matrix[i] = new float[b];
        memset(matrix[i], 0, b*sizeof(matrix[0]));
        std::cout << matrix[i][0] << " ";
    }
    Matrix matr ={matrix,a,b};
    return matr;
}
void deleteMatrix(Matrix& m)
{
    m.matrix = *m;
    for (int i = 0; i < a; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    *m = nullptr;
}
void snake( float ***matrix,const int& a, const int& b)
{
    int iter = 0;
    int sum = 0;
    while (iter != (a * b))
    {
        if((sum) % 2 == 0)
        {
            for (int i = 0; i < a; ++i)
            {
                for (int j = 0; j < b; ++j)
                {
                    if((j + i) == sum)
                    {
                        *matrix[i][j] = iter;
                        std::cout << iter << " ";
                        iter++;
                    }
                }
            }
        } else
        {
            for (int i = 0; i < b; ++i)
            {
                for (int j = 0; j < a; ++j)
                {
                    if((j + i) == sum)
                    {
                        *matrix[j][i] = iter;
                        iter++;
                    }
                }
            }
        }
        ++sum;
    }
}
void pr(float *** matrix, const int& a, const int& b)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    float ** matrix = newMatrix(10,10);
    pr(&matrix,10,10);
    //  snake(&matrix,10,10);
    std::cout<< matrix[0][0];
    //  pr(&matrix,10,10);
    return 0;
}
