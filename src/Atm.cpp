#include "Atm.h"

Atm::Atm(){

  this->truePin = 0;
  this->verified = NULL;

}

Atm::Atm(int truePin, int pin, double saldo){

  this->truePin = truePin;
  this->account.setPin(pin);
  this->account.setSaldo(saldo);

}

bool Atm::verifiedPin(){

  if(account.getPin() == getTruePin()){

    cout << "Pin correcto" << endl << endl;
    setVerified(true);
    return true;
  }
  else{

    cout << "\nPin incorrecto" << endl << endl;
    setVerified(false);
    return false;

  }

  return 0;
}

void Atm::setVerified(bool _verified){
  this->verified = _verified;
}

void Atm::setTruePin(int _truePin){
  this->truePin = _truePin;
}

int Atm::getTruePin(){

  return truePin;

}

bool Atm::getVerified(){

  return verified;

}

void Atm::retiro(){

  int retiro, aux;
  
  cout << "\nRETIROS A CUENTA";
  
  do
  {
    cout << "\nIngrese la cantidad que desea retirar: $";
    cin >> retiro;

    if (retiro % 100 == 0)
    {
      aux = 1;
    }else{
      aux = 0;
    }

    if ((aux != 1) || (retiro == 0))
    {
      system("clear");
      cout << "CANTIDAD NO VALIDAD, SOLO PUEDES RITIRAR CANTIDADES MULTIPLO DE 100" << endl;
    }

    if (retiro < 0)
    {
      system("clear");
      cout << "\nCANTIDAD NO VALIDA, EL RETIRO NO PUEDE SER NEGATIVO";
    }
    
    
  } while ((aux != 1) || (retiro < 0) || (retiro == 0));
  

  if (account.getSaldo() >= retiro){

    account.setSaldo(account.getSaldo() - retiro);
    
    system("clear");
    cout << "\nRETIRO REALIZADO CON EXITO\n";

  }else{
    system("clear");
    cout << "\nNO SE PUEDE REALIZAR SU TRANSSACION, SALDO INSUFICIENTE\n";

  }

}

void Atm::deposito()
{

  int deposito;
  int aux;

  cout << "\nDEPOSITO A CUENTA";
  do
  {
    cout << "\nIngrese la cantidad que desea depositar: $";
    cin >> deposito;

    if (deposito %100 == 0)
    {
      aux = 1;
    }else{
      aux = 0;
    }

    if ((aux != 1) || (deposito == 0))
    {
      cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE DEPOSITAR CANTIDADES MULTIPLO DE 100";
    }
    
    if (deposito < 0)
    {
      cout << "\nCANTIDAD NO VALIDA, EL DEPOSITO NO PUEDE SER NEGATIVO";
    }

  } while ((aux != 1) || (deposito == 0) || (deposito < 0));
  
  account.setSaldo(account.getSaldo() + deposito);

  system("clear");

  cout << "\nDEPOSITO REALIZADO CON EXITO\n";
  cout << "\tNuevo balance $" << account.getSaldo() << endl;

}

void Atm::saldo()
{

  system("clear");
  cout << "\tSALDO ACTUAL DISPONIBLE $" << account.getSaldo() << endl;
}

Atm::~Atm(){
  
}