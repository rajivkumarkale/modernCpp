/*
    Possible Internal Implementation of Inheritance
    using Virtual Table and Virtual pointers

    only func1 and func2 are virtual functions.
*/
#include <iostream>

using namespace std;

struct VTABLE {
    void (*func1_ptr[2])();
};

class Base {
   protected:
    static VTABLE baseTable;
    VTABLE *vptr;

   public:
    Base() { vptr = &baseTable; }

    void func1() { vptr->func1_ptr[0](); }

    void func2() { vptr->func1_ptr[1](); }

    void func3() { cout << "base func3" << endl; }
};

VTABLE Base::baseTable = {[]() { cout << "base func1" << endl; },
                          []() { cout << "base func2" << endl; }};

class Derived : public Base {
   private:
    static VTABLE derivedTable;

   public:
    Derived() { vptr = &derivedTable; }

    void func1() { vptr->func1_ptr[0](); }

    void func2() { vptr->func1_ptr[1](); }
};

VTABLE Derived::derivedTable = {[]() { cout << "derived func1" << endl; },
                                []() { cout << "derived func2" << endl; }};

int main() {
    Base base;
    Derived derived;

    base.func1();
    base.func2();
    base.func3();

    derived.func1();
    derived.func2();
    derived.func3();

    cout << "-----------------" << endl << endl;
    Base *bptr = &base;
    bptr->func1();
    bptr->func2();
    bptr->func3();

    bptr = &derived;
    bptr->func1();
    bptr->func2();
    bptr->func3();

    return 0;
}

/*
Output:

base func1
base func2
base func3
derived func1
derived func2
base func3
-----------------

base func1
base func2
base func3
derived func1
derived func2
base func3
*/