//Functions
// -- Block of code which runs when it is called

// returnType fName () {

//        do some work
//     return someValue; //optional

// }

// fName();  //function call

#include<iostream>
using namespace std;

void sayHello() {
    cout<<"Hello :)\n";
}

void assistant(){
    sayHello();
    cout<<"Work Done\n";
}

int main(){

    sayHello(); //function call
    assistant();
    return 0;
}