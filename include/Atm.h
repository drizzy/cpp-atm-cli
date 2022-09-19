#ifndef ATM_H
#define ATM_H

#include "Account.h"

class Atm{
  private:
    int truePin;
    bool verified;
    Account account;
  public:
    Atm();
    Atm(int, int, double);
    ~Atm();

    
    bool verifiedPin();

    void setTruePin(int);
    void setVerified(bool);

    void retiro();
    /* void defaultWithdrawal(); */
    void deposito();
    void saldo();

    int getTruePin();
    bool getVerified();
};

#endif //ATM_H