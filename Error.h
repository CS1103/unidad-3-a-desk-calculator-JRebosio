
#ifndef UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_ERROR_H
#define UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_ERROR_H

int no_of_errors;
double error(const string& s)
{
    no_of_errors++;
    cerr << "error: " << s << '\n';
    return 1;
}

#endif //UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_ERROR_H
