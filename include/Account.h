#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Client.h"

class Account : public Client
{
  private:
    double saldo;
  public:
    Account();
    Account(int, double);
    ~Account();

    void setSaldo(double);
    double getSaldo();

};

#endif //ACCOUNT_H