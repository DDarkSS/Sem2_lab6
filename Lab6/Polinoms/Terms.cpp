#include "Terms.h"
#include <iostream>

std::istream &operator>>(std::istream &in, Term &term_obj) {
    const int MAX_LENGTH = 50;
    char* Data = new char[MAX_LENGTH];
    int index = 0;
    char temp;
    in >> Data;
    Term new_term(Data);
    term_obj = new_term;
    return in;
}
bool operator>(const Term t1, const Term t2){
    if (t1.rank > t2.rank){return true;}
    if(t1.rank == t2.rank){
        if(t1.mult == t2.mult){return true;}
    }
    return false;
}
bool operator==(const Term t1, const Term t2){
    if((t1.rank == t2.rank) &&(t1.mult == t2.mult)){return true;}
    return false;
}
bool operator<(const Term t1, const Term t2){
    if (t1.rank > t2.rank){return false;}
    if(t1.rank == t2.rank){
        if(t1.mult == t2.mult){return false;}
    }
    return true;
}

std::ostream &operator<<(std::ostream &out, Term &term_obj) {
    out << term_obj.get_mult() << "x^" << term_obj.get_rank();
    return out;
}
