#include <cmath>
#include <iostream>



int main() {
    std::cout << "Pi=" << 3.14 << std::endl;//print pi
    ///////////////////////////////////////
    char q= ' ';
    std:: cout << 1 << q << 13 << q << 49 << std::endl;// print 1 13 49
    //////////////////////////////////
    std::cout << "symbol" << std::endl;
    char w=0;
    std::cin >> w;
    std:: cout << 1 << w << 13 << w << 49 << std::endl;//print 1 13 49 with symbol between
    //////////////////////////////////////////
    int a1=0,a2=0,a3=0;
    std::cout << "3 numbers" << std::endl;
    std::cin >> a1;
    std::cin >> a2;
    std::cin >> a3;
    std::string z="  ";
    std::cout << a1 << z << a2 << z << a3 << std::endl;// print 3 numbers with 2 ' '
    //////////////////////////////////////////
    float a=0;
    std::cout << "for solution a=" << std::endl;
    std::cin >> a;
    float y=12*a*a+7*a-12;
    std::cout << "y=12*a*a+7*a-12=" << y << std::endl;// print solution
    ///////////////////////////////////////////////////
    float x=0;
    std::cout << "for solution x=" << std::endl;
    std::cin >> x;
    y=3*x*x*x+4*x*x-11*x+1;
    std::cout << "y=3*x*x*x+4*x*x-11*x+1=" << y << std::endl;// print solution
    //////////////////////////////////////////////////
    float m=0,V=0;
    std::cout << "mass" << std::endl;
    std::cin >>m;
    std::cout << "volume" << std::endl;
    std::cin >>V;
    float p=m/V;
    std::cout << "p=m/V=" << p << std::endl;
    //////////////////////////////////
    float b=0;
    std::cout <<"a(<>0), b for ax+b=0" << std::endl;
    std::cin >>a;
    std::cin >>b;
    x=a/(-b);
    std::cout << "x=" << x << std::endl;
    /////////////////////////////////////////////
    float x1=0,x2=0,y1=0,y2=0;
    std::cout << "print a(x1,y1)" << std::endl;
    std::cin >> x1;
    std::cin >> y1;
    std::cout << "print b(x2,y2)" << std::endl;
    std::cin >> x2;
    std::cin >> y2;
    std::cout << "distanse between a,b=" << sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) << std::endl;
    ///////////////////////////
    float h=0,b1=0,b2=0;
    std::cout << "print height,basis 1,basis2" << std::endl;
    std::cin >> h;
    std::cin >> b1;
    std::cin >> b2;
    std::cout << "perimeter=" << b1+b2+2*sqrt(h*h+(b1-b2)*(b1-b2)/4);
    /////////////////////////////////

return 0;
}
