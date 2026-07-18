#include "Account.h"

Account :: Account(int id, string name, long long balance){

  this ->id = id;
  this ->name = name;
  this ->balance = balance;
  
}

void Account::deposit(long long amount){
balance+=amount;

}
