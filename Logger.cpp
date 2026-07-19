#include <fstream>

void Logger::log(string msg)
{
    ofstream file("data/transactions.txt", ios::app);

    file<<msg<<endl;
}
