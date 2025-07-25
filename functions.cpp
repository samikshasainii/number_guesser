#include <iostream>
#include <random>
#include <string>
#include <string_view>
#include "HEADERFILE.H"

using namespace std;
random_device rd;
mt19937_64 mt(rd());

string Greeting (){
    cout<<"Welcome to the name guesser";
    cout<<"Hi there. Enter your name! ";
    string user_name;
    getline(cin,user_name);
    cout<<"Hi there! "<<user_name<<" Let's determine how lucky you are"<<'\n';
    return user_name;

}

int NumberGenerator_1_to_9(){

    uniform_int_distribution<int>range(1,9);
    return range(mt);
}

int NumberGenerator_10_to_99(){
    uniform_int_distribution<int>range(10,99);
    return range(mt);
}

int NumberGenerator_100_to_999(){
    uniform_int_distribution<int>range(100,999);
    return range(mt);
}

bool num_compare(int generated_num,int user_input){
    if (generated_num==user_input){
        return true;
    }
    return false;
}

int luck_calculator(int x, int y,int z){

    int lucky_num{0};
    if (x){
        ++lucky_num ;
    }

    if(y){
        ++lucky_num ;
    }

    if(z){
        ++lucky_num ;
    }

    return (lucky_num/3)*100;

}
