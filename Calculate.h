#ifndef UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_CALCULATE_H
#define UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_CALCULATE_H

#include "TokenStream.h"
#include "Functions.h"


void calculate()
{
    for (;;) {
        ts.get();
        if (ts.current().kind == Kind::end) break;
        if (ts.current().kind == Kind::print) continue;
        cout << expr(false) << '\n';
    }
}

#endif //UNIDAD_3_A_DESK_CALCULATOR_JREBOSIO_CALCULATE_H