#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>

using namespace std; 

class Client {

  private:
   int pin;

  public:
    Client();
    Client(int);
    ~Client();

    void setPin(int);
    int getPin();
};

#endif //CLIENT_H