#include<iostream>
using namespace std;

float findsmallest(float a, float b, float c) {
    if (a <= b && a <= c) {
        return a;
    }else if (b <= a && b <= c){
        return b;
    }else{
        return c;
    }
}

int main(){
    float num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    float smallest = findsmallest(num1, num2, num3);

    cout << "The samllest value is:" << smallest << endl;

    return 0;
}