class Account
{
private:
    int id;
    string name;
    long long balance;

// default constructor
public:
    Account(){

      
    }


// parametrised constructor
   Account(int id, string name, long long balance);


void deposit(long long balance);
bool withdraw(long long balance);

    long long getBalance();
};
