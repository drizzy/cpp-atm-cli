#include "Account.h"

Account::Account(){
  this->saldo = 0;
}

Account::Account(int _pin, double _saldo) : Client(_pin){
  this->saldo = _saldo;
}

void Account::setSaldo(double _saldo){
  saldo = _saldo;
}

double Account::getSaldo(){
  return saldo;
}

Account::~Account(){

}
