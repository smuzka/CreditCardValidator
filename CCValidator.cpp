#include <iostream>
#include "CreditCardValidator.h"

using namespace std;


int main(int argc, char *argv[])
{
    if(argc < 3){
        cout << "please pass Card Name and Card Number" << endl;
        return 0;
    }

    CreditCardValidator validator;

    if(validator.Validate(argv[1], argv[2])){
        cout << "success" << endl;
    }
    else{
        cout << "failure" << endl;
    }



}
