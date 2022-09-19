#include "Menu.h"

void Menu::mainMenu()
{
  string tarjeta;
  int opc, pin;

  cout << " ___________________________________"  << endl;
  cout << "|              ATM                  |" << endl;
  cout << "|-----------------------------------|" << endl;
  cout << "|      Ingrese su tarjeta           |" << endl;
  cout << "|___________________________________|" << endl;
  cin >> tarjeta;
  
  cout << " -----------------------------------"  << endl;
  cout << "|   Porfavor, ingrese su Pin        |" << endl;
  cout << "|___________________________________|" << endl;
  cin >> pin;

  Atm atm(9999, pin, 50000);

  atm.verifiedPin();

  if (atm.getVerified()){
    system("clear");
    do{
    
      cout << " ________________________"  << endl;
      cout << "|                        |" << endl;
      cout << "| MENU CAJERO AUTOMATICO |" << endl;
      cout << "|________________________|" << endl;
      cout << "| [1] Realizar Retiro    |" << endl;
      cout << "| [2] Realizar Deposito  |" << endl;
      cout << "| [3] Mostrar Saldo      |" << endl;
      cout << "| [4] Salir              |" << endl;
      cout << "|________________________|" << endl;
      cout << "Opcion:";
      cin >> opc;

      switch (opc){
        case 1: atm.retiro(); break;
        case 2: atm.deposito(); break;
        case 3: atm.saldo(); break;  
      }

    }while(opc != 4);
  }
}