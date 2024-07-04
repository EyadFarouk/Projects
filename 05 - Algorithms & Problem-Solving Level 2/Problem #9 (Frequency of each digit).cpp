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
    if(counter!=0)
        cout<<"Digit "<<check<<" frequency is "<<counter<<" times(s)"<<nl;
}

int main()
{
    cout<<"Enter the number:";
    int number = inputNum();
    for (int i = 0; i <= 9; ++i) {
        checkFrequency(number,i);
    }
}
