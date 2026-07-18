#include "Account.h"

Account :: Account(int id, string name, long long balance){

  this ->id = id;
  this ->name = name;
  this ->balance = balance;
  
}

void Account::deposit(long long amount){
balance+=amount;

}

bool Account::withdraw(long long amount){
if (balance>=amount){
balance -=amount;
  return true;
  
}

  else {
  
  return false;   
  }

}
