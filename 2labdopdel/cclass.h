#ifndef __CCLASS_H__
#define __CCLASS_H__
class CClass {
public:
CClass();
~CClass();
void change(int arg);
int get_priv() const;
int get_counter() const;
private:
int priv;
static int counter;
};
#endif // __CCLASS_H__
