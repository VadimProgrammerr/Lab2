#include "funcs.h"
#include "globals.h"
int module_var = 0; // ���������� ���������� ��� func1 � func2
int func1() {
++global_var;
return ++module_var;
}
int func2() {
++global_var;
return --module_var;
}
