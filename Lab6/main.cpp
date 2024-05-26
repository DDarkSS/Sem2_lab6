#include "Polinoms//MyVector/MyVector.h"
#include "Polinoms/Terms.h"
#include "Polinoms/Polynomial.h"

int class_term();
int class_polynomial();

int main(){
    class_polynomial();
}
int class_term(){
    Term t;
    Term t1("3");
    Term t2("5x^3");
    Term t3("3x^2");
    Term t4("-3x^2");
    std::cout << t1 << std::endl;
    std::cout << t2 << std::endl;
    std::cout << t3 << std::endl;
    std::cout << t4 << std::endl;
    std::cout << "Введите терм1: ";
    Term new_t;
    std::cin >> new_t;
    std::cout << "Введите терм2: ";
    Term new_t2;
    std::cin >> new_t2;
    new_t = new_t + new_t2;
    std::cout << new_t << std::endl;
    return 0;
}

int class_polynomial(){
    Polynomial pol("3x^2 - x^2 -    3x^2 + x ^2 + 5x^5   - 4x^3 +x^2 - 7");
    std::cout << pol << std::endl;
    std::cout << "Введите полином: ";
    Polynomial p1;
    std::cin >> p1;
    std::cout<<std::endl;
    std::cout << "Введите полином2: ";
    Polynomial p2;
    std::cin >> p2;
    std::cout << "==============" << std::endl;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    Polynomial poly_sum = p1 + p2;
    Polynomial poly_mult = p1 * p2;
    std::cout << "poly_sum: " << poly_sum << std::endl;
    std::cout << "poly_mult: " << poly_mult << std::endl;

};