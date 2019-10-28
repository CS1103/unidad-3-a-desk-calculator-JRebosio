
#ifndef UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_PARSER_H
#define UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_PARSER_H

using namespace std;
enum class Kind : char {
    name, number, end, plus='+', minus='-', mul='*', div='/', print=';', assign='=', lp='(', rp=')'
};
struct Token {
    Kind kind;
    string string_value;
    double number_value;
};


#endif //UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_PARSER_H
