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

string toBinary(int n)
{
    if (n==0)
    return "0";
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

void decimalmedium(int choice) {
    int op1,op2;
    cout<<"enter operator 1 in decimal \n";
    cin>>op1;
    cout<<"enter operator 2 in decimal \n";
    cin>>op2;
    if (choice==1)
    {
        if (op1+op2>=0)
        cout<<"As=0\n";
        else 
        cout<<"As=1\n";
    cout<<"A="<<toBinary(op1+op2);
    }
    else 
    {
        if (op1-op2>=0)
        cout<<"As=0\n";
        else 
        cout<<"As=1\n";
    cout<<"A="<<toBinary(op1-op2);
    }
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
    {
        if (nop1+nop2>=0)
        cout<<"As=0\n";
        else 
        cout<<"As=1\n";
    cout<<"A="<<toBinary(nop1+nop2);
    }
    else {
        if (nop1-nop2>=0)
        cout<<"As=0\n";
        else 
        cout<<"As=1\n";
    cout<<"A="<<toBinary(nop1-nop2);
    }
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
