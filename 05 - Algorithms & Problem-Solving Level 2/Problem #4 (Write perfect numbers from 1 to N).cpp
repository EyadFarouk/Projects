#include <iostream>
using namespace std;

int inputNum(){ //You can make a check if the number is positive if you want, I just tried to simplify it :D )
    int N;
    cin>>N;
    return N;
}

bool isPurrfect(int num){
    int sum=0;
    for (int i = 1; i*i < num; ++i) {
        if(num%i==0)
        {
            sum+=i;
            if(i!=1)
                sum+=(num/i);
        }
    }
    if(sum==num)
        return true;
    else
        return false;
}

void checkPurrfect(int num){
    if(isPurrfect(num))
        cout<<num<<endl;
}

void writePerfectFrom1ToN(int num){
    for (int i = 1; i < num; ++i) {
        checkPurrfect(i);
    }
}

int main()
{
    writePerfectFrom1ToN(inputNum());
}
