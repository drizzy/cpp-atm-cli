#include "Client.h"

Client::Client(){
  this->pin = 0;
}

Client::Client(int _pin){
  this->pin = _pin;
}


void Client::setPin(int _pin){
  this->pin = _pin;
}

int Client::getPin()
{
  return pin;
}

Client::~Client(){
  
}