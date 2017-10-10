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

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    std::vector<T> result(num);
    std::generate_n(result.begin(), num, lambda);
    return result;
}


int main()
{
    std::vector <int> v = generate_random_vector <int> (10, -100, 50);
    for (int i = 0; i < 10; ++i)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    // *2
    for (int i = 0; i < 10; ++i)
    {
        std::cout << v[i]*2 << " ";
    }
    std::cout << std::endl;
    // -a
    std::cout << "Print a" << std::endl;
    int a = 0;
    std::cin >> a;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << v[i] - a << " ";
    }
    std::cout << std::endl;
    // /v[0]
    float b = v[0];
    for (int i = 0; i < 10; ++i)
    {
        std::cout << v[i]/b << " ";
    }
    std::cout << std::endl;
    // summ
    a = 0;
    for (int i = 0; i < 10; ++i)
    {
        a += v[i];
    }
    std::cout << "summ =" << a << std::endl;
    // summ ^2
    a = 0;
    for (int i = 0; i < 10; ++i)
    {
        a += v[i]*v[i];
    }
    std::cout << "summ =" << a << std::endl;
    // summ 6
    a = 0;
    for (int i = 0; i < 6; ++i)
    {
        a += v[i];
    }
    std::cout << "summ =" << a << std::endl;
    // summ from k1 to k2
    std::cout << "print k1 and k2, k2>k1" << std::endl;
    unsigned int k1 = 0;
    unsigned int k2 = 0;
    std:: cin >> k1 >> k2;
    a = 0;
    for (unsigned int i = k1 - 1; i < k2; ++i)
    {
        a += v[i];
    }
    std::cout << "summ =" << a << std::endl;
    // the arithmetic mean
    a = 0;
    b = 0;
    for (int i = 0; i < 10; ++i)
    {
        b +=1;
        a += v[i];
    }
    std::cout << "the arithmetic mean =" << a/b << std::endl;
    // arifm mean from s1 to s2
    std::cout << "print s1 and s2, s2>s1" << std::endl;
    unsigned int s1 = 0;
    unsigned int s2 = 0;
    std:: cin >> s1 >> s2;
    a = 0;
    b = 0;
    for (unsigned int i = s1 - 1; i < s2; ++i)
    {
        b += 1;
        a += v[i];
    }
    std::cout << "the arithmetic mean =" << a/b << std::endl;
    // change places 3 elements
    int q[20];
    for (int i = 0; i < 20; ++i)
    {
        q[i] = rand()%100;
        std::cout << q[i] << " ";
    }
    std::cout << std::endl;
    a = 0;
    for (int i = 0; i < 20; ++i)
    {
        if(i < 3)
        {
            a = q[i];
            q[i] = q[17+i];
            q[17+i] = a;
        }
        std::cout << q[i] << " ";
    }
    std::cout << std::endl;
    // delete first <0
    a = 0;
    for (int i = 0; i < 20; ++i)
    {
        if (a == 0)
        {
            if (q[i] <0)
            {
                a = 1;
            }
        }
        if ((a == 1) && (i <19))
        {
            std::cout << q[i+1] << " ";
        } 
        else if (a == 0)
        {
            std::cout << q[i] << " ";
        }
    }
    // delete first <0
    int n =0;
    if (a == 1)
    {
        n = 19;
    }
    else
    {
        n = 20;
    }
    a = 0; 
    std::cout << std::endl;
    for (int i = 0; i < n; ++i)
    {
        if (a == 0)
        {
            if (q[i] % 2 == 0)
            {
                a = 1;
            }
        }
        if ((a == 1) && (i < n-1))
        {
            std::cout << q[i+1] << " ";
        } 
        else if (a == 0)
        {
            std::cout << q[i] << " ";
        }
    }
    std::cout << std::endl;
    // city
    std::cout << "Print city" << std::endl;
    std::string c1 = "0";
    std::cin >> c1;
    std::cout << "City name " << c1.size() << std::endl;
    // length second name
    std::cout << "Print second names" << std::endl;
    std::string f1 = "0";
    std::string f2 = "0";
    std::cin >> f1 >> f2;
    if (f1.size() > f2.size())
    {
        std::cout << "First second name longer" << std::endl;
    }
    else if (f1.size() < f2.size())
    {
        std::cout << "The second second name longer" << std::endl;
    } else
    {
        std::cout << "second names have the same length" << std::endl;
    }
    // cities
    std::cout << " Print 3 cities" << std::endl;
    std::string c2 = "0";
    std::string c3 = "0";
    std::cin >> c1 >> c2 >> c3;
    if ((c1.size() >= c2.size()) && (c1.size() >= c3.size()))
    {
        if (c2.size() >= c3.size())
        {
            std::cout << c1 << " " << c3 << std::endl;
        }
        else
        {
            std::cout << c1 << " " << c2 << std::endl;
        }
    }
    if ((c2.size() > c1.size()) && (c2.size() >= c3.size()))
    {
        if (c1.size() >= c3.size())
        {
            std::cout << c2 << " " << c3 << std::endl;
        }
        else
        {
            std::cout << c2 << " " << c1 << std::endl;
        }
    }
    if ((c3.size() > c1.size()) && (c3.size() > c2.size()))
    {
        if (c1.size() >= c2.size())
        {
            std::cout << c3 << " " << c2 << std::endl;
        }
        else
        {
            std::cout << c3 << " " << c1 << std::endl;
        }
    }
    // word m n
    int m = 0;
    n = 0;
    do
    {
        std::cout << "Print word and m,n" << std::endl;
        std:: cin >> c1 >> m >> n;
    } while ((c1.size() < n) && (m > n));
    for (int i = m - 1; i < n; ++i)
    {
        std::cout << c1[i];
    }
    std::cout << std::endl;
    a = c1.size();
    for (int i = 0; i < a; ++i)
    {
        c1.push_back('*');
        c1.insert(c1.begin(),'*');
    }
    std::cout << c1 << std::endl;
    // sentence
    std::cout << "Print sentence: ";
    // fflush (stdin);
    std::cin.clear();
    std::getline(std::cin,c1);
    a = c1.size();
    b = 0;
    for (int i = 0; i < a; ++i)
    {
        if (c1[i] == 'a')
        {
            b += 1;
        }
    }
    std::cout << (100*b)/a << "% letter a in this sentence" << std::endl;
    // change can
    std::cin.clear();
    c1 = "Can you can a can as a canner can can a can?";
    std::cout << "Print word that you want to see(not can) ";
    
    std::cin >> c2;
    n = -1;
    n = c2.find("can");
    if (n != -1)
    {
        std::cout << "ERROR!!!!! infinity cycle" << std:: endl;
    }
    else
    {
        m = c2.size();
        n = 0;
        int o =0;
        do
        {
            o = c1.find (" can ");
            if (o == 0)
            {
                std::size_t o = c1.find (" can?");
                
            }
            if ((n == 0) || ( o > n+m))
            {
                n = o;
                c1.replace (o+1, o+4, c2);
            }
        } while ( o != 0);
    }
    std::cout << c1 << std::endl;
    return 0;
}
