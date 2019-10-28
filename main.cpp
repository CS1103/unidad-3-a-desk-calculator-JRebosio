#include <iostream>
#include "TokenStream.h"
#include "Error.h"
#include "Calculate.h"

using namespace std;


map<string,double> table;
Token_stream ts {cin};

int main()
{
    table["pi"] = 3.1415926535897932385; 
    table["e"] = 2.7182818284590452354;
    calculate();
    return no_of_errors;
}