#include "CClass.h"
#include "globals.h"
int CClass::counter = 0;
CClass::CClass() : priv(cint) {
++counter;
}
CClass::~CClass() {
--counter;
}
void CClass::change(int arg) {
priv += arg;
}
int CClass::get_priv() const {
return priv;
}
int CClass::get_counter() const {
return counter;
}
