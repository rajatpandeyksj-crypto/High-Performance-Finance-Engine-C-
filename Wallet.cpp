void Wallet::createAccount()
{
   int id;
    string name;
    long long balance;

    cout <<"Enter Id: ";
    cin>>id;

    cout <<"Enter Name: ";
    cin>>name;

    cout <<"Enter balance: ";
    cin>>balance;

account acc(id, name, balance);
    account[id] = acc;
}


    void Wallet::transferMoney()
{
    int from, to;
    long long amount;

    cin >> from;
    cin >> to;
    cin >> amount;


    if(accounts[from].withdraw(amount))
    {
        accounts[to].deposit(amount);

        cout << "Transfer Successful";
    }
    else
    {
        cout << "Insufficient Balance";
    }
}

