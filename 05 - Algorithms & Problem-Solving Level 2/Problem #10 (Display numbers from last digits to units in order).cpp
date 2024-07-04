#include <iostream>
using namespace std;

int inputNumber(){ //You can make a check if the number is positive if you want, I just tried to simplify it :D )
    int N;
    cin>>N;
    return N;

}

int reverseNumber(int num){  //Passing by reference
    int num2=0,reminder=0;
    while(num){
        reminder=num%10;
        num /= 10;
        num2 = num2*10 + reminder;
    }
    return num2;
}

int getUnitDigit(int& num){  //Passing by reference
    int unit = num%10;
    num/=10;
    return unit;
}

void displayNumber(int num){
    while (num) {
        cout<<getUnitDigit(num)<<endl;
    }
}

int main()
{
    cout<<"Enter the number:";
    displayNumber(reverseNumber(inputNumber()));
}
