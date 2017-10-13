#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <random>
#include <string>
#include <vector>

template<class T>

std::vector<T> generate_random_vector(std::size_t num, T min = -10, T max = 10)
{
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist]() -> T { return dist(e2); };

    std::vector<T> result(num);
    std::generate_n(result.begin(), num, lambda);
    return result;
}

int main()
{
    std::cout << "Print n1" << std::endl;
    int n1 = 0;
    std::cin >> n1;
    std::vector<int> num = generate_random_vector<int>(n1, -100, 50);
    int c = 0;
    for (int i = 0; i < n1; ++i)
    {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    for ( int i = 0; i < n1-1; ++i)
    {
        for (int j = i + 1; j < n1; ++j)
        {
            if (num[i] >= num[j])
            {
                c = num[i];
                num[i] = num[j];
                num[j] = c;
            }
        }
    }
    for (int i = 0; i < n1; ++i)
    {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Print n2" << std::endl;
    int n2 = 0;
    std::cin >> n2;
    std::vector <int> mas;
    for (int i = 0; i < n2; ++i)
    {
        mas.push_back(rand() % 100);
    }
    std::cout << std::endl;
    for ( int i = 0; i < n2-1; ++i)
    {
        for (int j = i + 1; j < n2; ++j)
        {
            if (mas[i] >= mas[j])
            {
                c = mas[i];
                mas[i] = mas[j];
                mas[j] = c;
            }
        }
    }
    for (int i = 0; i < n2; ++i)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;
    int a = 0;
    int b = 0;
    do
    {
        if (num[a] >= mas[b])
        {
            std::cout << mas[b] << " ";
            b +=1;
        }
        if (num[a] < mas[b])
        {
            std::cout << num[a] << " ";
            a +=1;
        }
        if (b == n2 )
        {
            for (int i = a; i < n1; ++i)
            std::cout << num[i] << " ";
        }
        if (a == n1 )
        {
            for (int i = b; i < n2; ++i)
                std::cout << mas[i] << " ";
        }
    } while ((a < n1) && (b < n2));
    return 0;
}
