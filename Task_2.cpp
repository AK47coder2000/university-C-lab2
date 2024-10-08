#include<iostream>
using namespace std;

void calculate(int a, int b, int &product, int &difference, int&sum) {
    product = a * b;
    difference = a - b;
    sum = a + b;
}

int main(){
    int a, b, product, difference, sum;
    cout << "Enter the two integers: ";
    cin >> a >> b;
    calculate(a, b, product, difference, sum);
    cout << "Product: " << product << endl;
    cout << "Difference:" << difference << endl;
    cout << "Sum: " << sum << endl;
    return 0;

}