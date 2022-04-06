#include "std_lib_facilities.h"
#include "str_opera/str_opera.h"

int main() {

    string a = "hello";
    string b = "world"; 
    string c = "hElLO WoRlD";

    // check for concatenation
    cout << StrOp::MyString::concaten(a, b);

    // check for comparing 
    cout << StrOp::MyString::compare(a, b);
    cout << StrOp::MyString::compare(b, a);
    cout << StrOp::MyString::compare(a, a);

    // check for upper case 
    cout << StrOp::MyString::toUpp(c);

    // check for lower case
    cout << StrOp::MyString::toLow(c);

    return 0;
}