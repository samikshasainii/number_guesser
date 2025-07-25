#include <iostream>
#include "HEADERFILE.H"

using namespace std;

int main(){
    string_view name;
    name = Greeting();
    cout<<name<<'\n';
    return 0;
}