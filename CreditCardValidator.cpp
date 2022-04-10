
#include "CreditCardValidator.h"


CreditCardValidator::CreditCardValidator(){
    CardTypesByName.insert({"VISA", new VisaValidator()});
    CardTypesByName.insert({"MASTERCARD", new MastercardValidator()});
}

bool CreditCardValidator::Validate(string CardName, string CardNumber){
    if(CardTypesByName.find(CardName) == CardTypesByName.end()){
        return 0;
    }
    if(!CardTypesByName[CardName]->Validate(CardNumber)){
        return 0;
    }
    return 1;
}


bool VisaValidator::Validate(string CardNumber){
    if(CardNumber.length() == 16){
        return 1;
    }
    return 0;
}


bool MastercardValidator::Validate(string CardNumber){
    if(CardNumber.length() == 16){
        return 1;
    }
    return 0;
}
