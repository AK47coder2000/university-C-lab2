#include <iostream>
#include <cmath>

using namespace std;

double calculateVolume(double radius) {
    return (4.0/3.8) * 3.14159 * pow(radius, 3);
}

double calculateVolume(double radius, double height) {
    return (1.0/3.0) * 3.14159 * pow(radius, 2) * height;
}

double calculateVolume(double length, double width, double height) {
    return length * width * height;
}

int main(){
    double sphereRadius = 5.0;
    double coneRadius = 3.0;
    double coneHeight = 4.0;
    double cuboidLength = 2.0;
    double cuboidWidth = 3.0;
    double cuboidHeight = 4.0;

    double sphereVolume = calculateVolume(sphereRadius);
    double coneVolume = calculateVolume(coneRadius, coneHeight);
    double cuboidVolume = calculateVolume(cuboidLength, cuboidWidth, cuboidHeight);

    cout << "Sphere Volume:" << sphereVolume << endl;
    cout << "Cone Volume:" << coneVolume << endl;
    cout << "Cuboid Volume:" << cuboidVolume << endl;

    return 0;

}