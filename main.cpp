#include <iostream>
#include "HEADERFILE.H"

using namespace std;

int main(){
    Greeting();
    cout<<"Enter a 1 digit number!";
    int num1, num2, num3;
    cin>>num1;
    cout<<"The number was actually"<<NumberGenerator_1_to_9()<<'\n';
    cout<<"Enter a 2 digit number!";
    cin.ignore();
    cin>>num2;
    cout<<"The number was actually"<<NumberGenerator_10_to_99();
    cout<<"Enter a 3 digit number!";
    cin.ignore();
    cin>>num3;
    cout<<"The number was actually"<<NumberGenerator_100_to_999();
    bool bool1=num_compare(NumberGenerator_1_to_9(),num1);
    bool bool2= num_compare(NumberGenerator_10_to_99(),num2);
    bool bool3 = num_compare(NumberGenerator_100_to_999(), num3);

    int lucky_percentage=luck_calculator(bool1,bool2,bool3);
    cout<<"Your luck % is "<<lucky_percentage<<" !"<<'\n';
    return 0;

}