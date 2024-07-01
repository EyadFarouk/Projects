#include <iostream>
using namespace std;

int inputNum(){ //You can make a check if the number is positive if you want, I just tried to simplify it :D )
    int N;
    cin>>N;
    return N;
}

int getUnitDigit(int& num){  //Passing by reference
    int unit = num%10;
    num/=10;
    return unit;
}

void SumOfDigits(int num){
    int sum=0;
    while (num) {
        sum+=getUnitDigit(num);
    }
    cout<<sum;
}

int main()
{
    SumOfDigits(inputNum());
}
