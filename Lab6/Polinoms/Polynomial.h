#ifndef LAB6_POLYNOMIAL_H
#define LAB6_POLYNOMIAL_H

#pragma once
#include "iostream"

class Polynomial{
    typedef MyVector<Term> MT;
private:
    int degree;
    MT poly;
    bool order_ = false;
public:
    Polynomial(){degree = 0;
    }
    Polynomial(int m, int r = 0){
        if(m != 0){
        poly.add_element(Term(m, r), order_);
        degree = r;}
    }
    Polynomial(Term new_poly){
        if(new_poly.mult != 0){
        poly.add_element(new_poly, order_);
        degree = new_poly.rank;}
    }
    Polynomial(const Polynomial& new_poly){
        poly = new_poly.poly;
        degree = new_poly.degree;
    }
    Polynomial(char* data){
        degree = 0;
        const int MAX_LENGTH = 150;
        char* data_ = new char[MAX_LENGTH];
        const int ASCII_NUM = 48;
        int m = 0;int r = 0;
        bool f = false;
        int j = 0;
        for(int i = 0; i < strlen(data); i++){
            if(data[i] == ' '){}
            if(data[i] == '-'){
                if(!f){f = true;
                data_[j] = data[i];j++;}
                else{Term temp = Term(data_);
                int q_f_r = q_find_rank(temp.rank);
                if(q_f_r != -1){
                    if(temp.mult!=0){ poly.add_element_sp(temp, q_f_r);}
                    }
                else if(temp.mult!=0){poly.add_element(temp, order_);}
//                    delete[] data_;
                    f = false;j = 0;
                    data_[0] = '-';
                }
            }

            else if(data[i] == '+'){
                Term temp = Term(data_);
                if(temp.mult != 0){int q_f_r = q_find_rank(temp.rank);
                    if(q_f_r != -1){
                        if(temp.mult!=0){ poly.add_element_sp(temp, q_f_r);}
                    }
                    else if(temp.mult!=0){poly.add_element(temp, order_);}
                }
//                delete[] data_;
                f = false;j = 0;
            }
        }
    }

    int q_find_rank(int rank_to_find){
        for(int i = 0; i < poly.MT::get_size(); i++){
            if(poly[i].rank == rank_to_find){return i;}
        }
        return -1;
    }
    void print_v(){
        std::cout << "degree = " << degree << std::endl;
        for(int i = 0; i < poly.get_size(); i++){
            poly[i].print_v();
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    void operator+=(Polynomial poly1) {
        for (int i = 0; i < poly1.poly.MT::get_size(); i++) {
            int q_f_r = q_find_rank(poly1.poly[i].rank);
            if (q_f_r != -1) {
                if(poly1.poly[i].mult != 0){
                poly.add_element_sp(poly1.poly[i], q_f_r);}
            } else {
                if(degree < poly1.poly[i].rank){degree = poly1.poly[i].rank;}
                if(poly1.poly[i].mult != 0){
                poly.add_element(poly1.poly[i], order_);}
            }
        }
        check_m();
    }
    void operator*=(Polynomial poly1) {
        Polynomial temp;
        for(int i = 0; i < poly.get_size(); i++){
            if(poly[i].mult != 0){temp.poly.add_element(poly[i]);}
        }
        Polynomial temp2 = temp * poly1;
        while(poly.get_size() != 0){
            poly.delete_element();
        }
        degree = temp2.degree;
        poly = temp2.poly;
    }
    void operator=(Polynomial ant){
        while(poly.get_size() != 0){
            poly.delete_element();
        }
        for(int i = 0; i < ant.poly.MT::get_size();i++) {
            if(ant.poly[i].mult != 0){
            poly.add_element(ant.poly[i], order_);}
        }
        degree = ant.degree;
    }
    friend Polynomial operator*(Polynomial p1, Polynomial p2){
        Polynomial new_polinom;
        for(int i1 = 0; i1 < p1.poly.get_size(); i1++){
            for(int i2 = 0; i2 < p2.poly.get_size(); i2++){
                Term temp = p1.poly[i1] * p2.poly[i2];
                int q_f_r = new_polinom.q_find_rank(temp.rank);
                if(q_f_r != -1){new_polinom.poly.add_element_sp(temp, q_f_r);}
                else{
                    if(new_polinom.degree < temp.rank){new_polinom.degree = temp.rank;}
                    if(temp.mult != 0){
                    new_polinom.poly.add_element(temp, new_polinom.order_);}}
            }
        }
        new_polinom.check_m();
        return new_polinom;
    }
    friend Polynomial operator+(Polynomial p1, Polynomial p2){
        Polynomial temp = p1;
        temp += p2;
        temp.check_m();
        return temp;
    }
    friend std::ostream &operator<<(std::ostream &out, Polynomial &obj) {
        for(int i = 0;i < obj.poly.get_size(); i++){
            out << obj.poly[i].get_mult() << "x^" << obj.poly[i].get_rank() << " ";
        }
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Polynomial& poly_in){
        const int MAX_LENGTH = 100;
        char* str = new char[MAX_LENGTH];
        int index = 0;
        char temp;
        while(std::cin.get(temp)){
            if (temp != '\n'){str[index] = temp;index++;}
            else{break;}
        }
        Polynomial temp1(str);
        poly_in = temp1;
        return in;
    }

    void check_m(){
        bool check = false;
        for(int i = 0; i < poly.get_size(); i++){
            if(poly[i].mult == 0){poly.delete_element(i+1);check = true;break;}
        }
        if(check){check_m();}
    }
};



#endif //LAB6_POLYNOMIAL_H
