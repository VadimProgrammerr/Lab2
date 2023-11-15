#include <iostream>
using namespace std;
const int cint = 10; // глобальная константа
int global_var = 0; // глобальная переменная
int module_var = 0; // глобальная переменная для func1 и func2
int func1() {
++global_var;
return ++module_var;
}
int func2() {
++global_var;
return --module_var;
}
class CClass {
public:
CClass() : priv(cint) { ++counter; }
~CClass() { --counter; }
void change(int arg);
int get_priv() const;
int get_counter() const;
private:
int priv;
static int counter;
};
int CClass::counter = 0;
void CClass::change(int arg) {
priv += arg;
}
int CClass::get_priv() const {
return priv;
}
int CClass::get_counter() const {
return counter;
}
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
system("pause");
return 0;
}

