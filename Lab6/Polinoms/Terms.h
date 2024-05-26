#ifndef LAB6_TERMS_H
#define LAB6_TERMS_H

#include "iostream"

class Polynomial;

class Term{
private:
    int mult;
    int rank;
    friend class Polynomial;
public:
    Term(int new_mult = 0, int new_rank = 0){
        mult = new_mult;rank = new_rank;
    }
    Term(char* Data){
        const int ASCII_NUM = 48;
        bool has_x = false;
        bool has_rank = false;
        int negative = 1;
        int top = 0; int bottom = 0;
        for(int i = 0; i < strlen(Data);i++){
            if(Data[i] == 'x'){
                if(has_x){std::cout << "Невозможные данные" << std::endl;exit(0);}
                has_x = true;
            }
            else if(Data[i] == '^'){
                if(has_rank){std::cout << "Невозможные данные" << std::endl;exit(0);}
                has_rank = true;
            }
            else if(Data[i] == '-'){negative = -1;}
            else{
                if((int)Data[i] < 48 || (int)Data[i] > 57){std::cout << "Невозможные данные" << std::endl;exit(0);}
                if(has_rank){bottom = bottom * 10 + (int)Data[i] - ASCII_NUM;}
                else{top = top * 10 + (int)Data[i] - ASCII_NUM;}
            }
        }
        if(has_x && !has_rank){std::cout << "Невозможные данные" << std::endl;exit(0);}
        if (bottom == 0 && has_x){bottom = 1;}
        if (top == 0 && has_x){top = 1;}
        Set_mult(negative * top);
        Set_rank(bottom);
    }

    friend Term operator+(Term T1, Term T2){
        if(T1.rank == T2.rank){return Term(T1.mult + T2.mult, T1.rank);}
        std::cout << "Термы невозможно сложить" << std::endl;
        exit(0);
    }
    friend Term operator*(Term T1, Term T2){
        return Term(T1.mult * T2.mult, T1.rank + T2.rank);
    }
    void operator=(const Term& ant){
        this->rank = ant.rank;
        this->mult = ant.mult;
    }

    void print_v(){
        std::cout << mult << "x^" << rank;
    }
    int get_mult(){return mult;}
    int get_rank(){return rank;}
    void Set_mult(int new_mult){this->mult = new_mult;}
    void Set_rank(int new_rank){this->rank = new_rank;}


    friend std::istream& operator>>(std::istream& in, Term& term_obj);
    friend std::ostream& operator<<(std::ostream& out, Term& term_obj);
    friend bool operator>(const Term, const Term);
    friend bool operator<(const Term, const Term);
    friend bool operator==(const Term, const Term);
};

#endif //LAB6_TERMS_H
