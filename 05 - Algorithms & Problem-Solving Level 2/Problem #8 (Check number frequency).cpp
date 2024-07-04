#include <iostream>
using namespace std;

int inputNum(){ //You can make a check if the number is positive if you want, I just tried to simplify it :D )
    int N;
    cin>>N;
    return N;

}

bool checkUnitIsFrequency(int& num,int check){  //Passing by reference
    int unit = num%10;
    num/=10;
    return unit==check;
}

void checkFrequency(int num,int check){
    int counter=0;
    while (num) {
        if(checkUnitIsFrequency(num,check))
        {
            counter++;
        };
    }
    cout<<"Digit "<<check<<" frequency is "<<counter<<" times(s)";
}

int main()
{
    cout<<"Enter the number:";
    int number = inputNum();
    cout<<"Enter the number to check its frequency:";
    int check= inputNum();
    checkFrequency(number,check);
}
