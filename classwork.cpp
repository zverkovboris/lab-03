#include <iostream>
#include <math.h>

int main() {
   // variant 7
    char n=0;
    do
    {
        std::cout << "What chess piece?" << std::endl;
        std::cin >> n;
    } while ((n!='p') && (n!='N') && (n!='Q') && (n!='R') && (n!='B'));
    std::pair<char, int> myf;
    do
    {
        std::cout << "initial coordinate?" << std::endl;
        std::cin >> myf.first >> myf.second;
    } while ((myf.second > 8) || ((myf.first != 'a') && (myf.first != 'b') && (myf.first != 'c') &&
            (myf.first != 'd') && (myf.first != 'e') && (myf.first != 'f') && (myf.first != 'h')));
    std::pair<char, int> nex;
    do
    {
        std::cout << "next coordinate?" << std::endl;
        std::cin >> nex.first >> nex.second;
    } while ((myf.second > 8) || ((myf.first != 'a') && (myf.first != 'b') && (myf.first != 'c') && 
            (myf.first != 'd') && (myf.first != 'e') && (myf.first != 'f') && (myf.first != 'h')));
    std::cout << "Answer: " << std::endl;
    if (n=='p') {
        if (((nex.first == myf.first) && (nex.second - 1 == myf.second)) &&
            ((nex.first != 'f') && (myf.second != 7))) {
            std::cout << "True" << std::endl;
        } else if ((myf.second == 2) && (nex.second - 2 == myf.second) && (nex.first == myf.second)) {
            std::cout << "True" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
    }
    if (n=='R')
    {
        if ((nex.first == myf.first) || (nex.second == myf.second))
        {
            if ((myf.first == 'f') && (nex.first == 'f')) {
                if ((nex.second > 7) && (myf.second < 7)) {
                    std::cout << "false" << std::endl;
                }
                if ((nex.second < 7) && (myf.second < 7)) {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second > 7) && (myf.second > 7)) {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second < 7) && (myf.second > 7)) {
                    std::cout << "false" << std::endl;
                }
            }
            if ((myf.first == 7) && (nex.first == 7)) {
                if ((myf.first < 'f') && (nex.first < 'f')) {
                    std::cout << "true" << std::endl;
                }
                if ((nex.first > 'f') && (myf.first > 'f')) {
                    std::cout << "True" << std::endl;
                }
                if ((nex.first > 'f') && (myf.first < 'f')) {
                    std::cout << "false" << std::endl;
                }
                if ((nex.first < 'f') && (myf.first > 'f')) {
                    std::cout << "false" << std::endl;
                }
            }
            std::cout << "True" << std::endl;
        }
        else
        {
            std::cout << "false" << std::endl;
        }
    }
    if (n=='B')
    {
        if (abs(myf.first - myf.first) == abs(nex.second - myf.second))
        {
            if (abs(nex.first - 'f') ==abs(nex.second - 7))
            {
                if ((nex.second > 7) && (myf.second < 7))
                {
                    std::cout << "false" << std::endl;
                }
                if ((nex.second < 7) && (myf.second < 7))
                {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second > 7) && (myf.second > 7))
                {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second < 7) && (myf.second > 7))
                {
                    std::cout << "false" << std::endl;
                }
            }
            std::cout << "True" << std::endl;
        }
        else
        {
            std::cout << "True" << std::endl;
        }
    }
    if (n=='Q')
    {
        if ((abs(myf.first - myf.first) == abs(nex.second - myf.second)) ||
            ((nex.first == myf.first) || (nex.second == myf.second)))
        {
            if ((myf.first == 'f') && (nex.first == 'f')) {
                if ((nex.second > 7) && (myf.second < 7)) {
                    std::cout << "false" << std::endl;
                }
                if ((nex.second < 7) && (myf.second < 7)) {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second > 7) && (myf.second > 7)) {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second < 7) && (myf.second > 7)) {
                    std::cout << "false" << std::endl;
                }
            }
            if ((myf.first == 7) && (nex.first == 7)) {
                if ((myf.first < 'f') && (nex.first < 'f')) {
                    std::cout << "true" << std::endl;
                }
                if ((nex.first > 'f') && (myf.first > 'f')) {
                    std::cout << "True" << std::endl;
                }
                if ((nex.first > 'f') && (myf.first < 'f')) {
                    std::cout << "false" << std::endl;
                }
                if ((nex.first < 'f') && (myf.first > 'f')) {
                    std::cout << "false" << std::endl;
                }
            }
            if (abs(nex.first - 'f') ==abs(nex.second - 7))
            {
                if ((nex.second > 7) && (myf.second < 7))
                {
                    std::cout << "false" << std::endl;
                }
                if ((nex.second < 7) && (myf.second < 7))
                {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second > 7) && (myf.second > 7))
                {
                    std::cout << "True" << std::endl;
                }
                if ((nex.second < 7) && (myf.second > 7))
                {
                    std::cout << "false" << std::endl;
                }
            }
            std::cout << "True" << std::endl;
        }
        else
        {
            std::cout << "True" << std::endl;
        }
    }
    return 0;

}
