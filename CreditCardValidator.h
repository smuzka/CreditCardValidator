
#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

class ICreditCardValidationProvider{

    public:

        virtual bool Validate(string CardNumber) = 0;

};


class VisaValidator : public ICreditCardValidationProvider{

    public:

        bool Validate(string CardNumber);

};


class MastercardValidator : public ICreditCardValidationProvider{

    public:

        bool Validate(string CardNumber);

};


class CreditCardValidator{

    private:
        map <string, ICreditCardValidationProvider*> CardTypesByName;

    public:

        CreditCardValidator();

        bool Validate(string CardName, string CardNumber);

};
