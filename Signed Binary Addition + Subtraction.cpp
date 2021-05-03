#include <iostream>

using namespace std;

int unsignedpart(string binary) {
    binary.erase(binary.begin());
    int value = stoull(binary, 0, 2); 
    return value;
}

int todecimal(string binary) {
    if (binary[0]=='1')
    return -1*unsignedpart(binary);
    else 
    return unsignedpart(binary);
}

string decimal_to_binary(int n){
   if ( n < 0 )
   {
      return string("1") + decimal_to_binary(-n);
   }

   if ( n == 0 )
   {
      return string("0");
   }

   string result = "";
   while(n > 0){
      result = string(1, (char) (n%2 + 48)) + result;
      n = n/2;
   }
   return result;
} 

void decimalmedium(int choice) {
    int op1,op2;
    cout<<"enter operator 1 in decimal \n";
    cin>>op1;
    cout<<"enter operator 2 in decimal \n";
    cin>>op2;
    if (choice==1)
    cout<<op1+op2;
    else 
    cout<<op1-op2;
}

void binarymedium(int choice) {
    string op1, op2;
    cout<<"enter operator 1 in signed binary notation \n";
    cin>>op1;
    cout<<"enter operator 2 in signed binary notation \n";
    cin>>op2;
    int nop1,nop2;
    nop1 = todecimal(op1);
    nop2 = todecimal(op2);
    if (choice == 1)
    cout<<decimal_to_binary(nop1+nop2);
    else 
    cout<<decimal_to_binary(nop1-nop2);
}

int main() {
    int medium, choice;
    cout<<"In which medium input is being given? \n 1. Decimal \n 2. Binary \n";
    cin>>medium;
    cout<<"Choose Operation \n 1. Addition \n 2. Subtraction \n";
    cin>>choice;
    switch (medium){
        case 1: decimalmedium(choice);break;
        case 2: binarymedium(choice);break;
        default: cout<<"invalid input";
    }
}