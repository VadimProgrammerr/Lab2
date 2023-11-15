#include <iostream>
#include "funcs.h"
#include "CClass.h"
#include "globals.h"
using namespace std;
int main()
{
int balance;
balance = func1();
balance = func2();
cout << "balance: " << balance << " counter: " << global_var << endl;
CClass c1, c2;
if (c1.get_priv() == cint)
cout << "Ok" << endl;
cout << c2.get_counter() << endl;
return 0;
}
