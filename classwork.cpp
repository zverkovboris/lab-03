#include <iostream>
#include <math.h>


int main() {
    float pi = 3.14;
    std::cout << "Pi=" << pi << std::endl;  // print pi
    ///////////////////////////////////////
    char q = ' ';
    std::cout << 1 << q << 13 << q << 49 << std::endl;  // print 1 13 49
    //////////////////////////////////
    std::cout << "symbol" << std::endl;
    std::cin >> q;
    std::cout << 1 << q << 13 << q << 49 << std::endl;  // print 1 13 49 with symbol between
    //////////////////////////////////////////
    std::cout << "print 3 numbers" << std::endl;
    int a1 = 0;
    std::cin >> a1;
    int a2 = 0;
    std::cin >> a2;
    int a3 = 0;
    std::cin >> a3;
    std::cout << a1 << "  " << a2 << "  " << a3 << std::endl;  // print 3 numbers with 2 ' '
    //////////////////////////////////////////
    std::cout << "for solution a=" << std::endl;
    float a = 0;
    std::cin >> a;
    std::cout << "y=12*a*a+7*a-12=" << 12 * a*a + 7 * a - 12 << std::endl;  // print solution
    ///////////////////////////////////////////////
    std::cout << "for solution x=" << std::endl;
    float x = 0;
    std::cin >> x;
    std::cout << "y=3*x*x*x+4*x*x-11*x+1=" << 3 * x*x*x + 4 * x*x - 11 * x + 1 << std::endl;
    //////////////////////////////////////////////
    std::cout << "mass" << std::endl;
    float m = 0;
    std::cin >> m;
    std::cout << "volume" << std::endl;
    float v = 0;
    std::cin >> v;
    std::cout << "p=m/V=" << m / v << std::endl;
    //////////////////////////////////
    std::cout << "a(<>0), b for ax+b=0" << std::endl;
    std::cin >> a;
    float b = 0;
    std::cin >> b;
    std::cout << "x=" << (-b) / a << std::endl;
    /////////////////////////////////////////////
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    std::cout << "print a(x1,y1)" << std::endl;
    
    std::cin >> x1;
    std::cin >> y1;
    std::cout << "print b(x2,y2)" << std::endl;
    std::cin >> x2;
    std::cin >> y2;
    std::cout << " betwen a, b=" << sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)) << std::endl;
    ///////////////////////////
    float h = 0;
    std::cout << "print height,basis 1,basis2" << std::endl;
    std::cin >> h;
    std::cin >> a;
    std::cin >> b;
    std::cout << "perimeter=" << a + b + 2 * sqrt(h*h + (a - b)*(a - b) / 4) << std::endl;
    /////////////////////////////////
    std::cout << "print R,r for circles R>r" << std::endl;
    float R = 0, r = 0;
    std::cin >> R;
    std::cin >> r;
    std::cout << "S=pi(R*R-r*r)=" << pi*(R*R - r*r) << std::endl;
    ///////////////////////
    std::cout << "print the side of cube" << std::endl;
    std::cin >> a;
    std::cout << "V=a*a*a=" << a*a*a << std::endl;
    std::cout << "S of all cube=6*a*a=" << 6 * a*a << std::endl;
    std::cout << "S without downside and upside=4*a*a=" << 4 * a*a << std::endl;
    ///////////////////////
    std::cout << "print the side of sqare" << std::endl;
    std::cin >> a;
    std::cout << "perimeter=a*4=" << 4 * a << std::endl;
    ///////////////////////
    std::cout << "print r for circle" << std::endl;
    std::cin >> r;
    std::cout << "diameter=2*r=" << 2 * r << std::endl;
    return 0;
}
