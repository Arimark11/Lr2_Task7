#include <iostream>

int main(){

    double a = -13.8 , b =  8.9, c = 25;
    int N = 0;

    std::cout << " Include N";
    std::cin >> N;

    double Y = 0;

    switch (N)
    {
    case 2:
        Y = b*c - a*a;
        break;
    case 56:
        Y = b*c;
        break;
    case 7:
        Y = a*a*a*a*a*a*a + c;
        break;
    case 3:
        Y = a - b*c;
        break;
    default:
        Y = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b;
        break;
    }

    std::cout <<" Y = " << Y;

    return 0;
}