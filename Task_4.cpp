#include <iostream>
using namespace std;

double calculateDeliveryCharges(double weight, double distance, double rate = 0.50, double insurance = 5.00, bool priority = false){
    double totalCharges = (weight * distance * rate) + insurance;
    if (priority) {
        totalCharges += 0.10;
    }
    return totalCharges;
}

int main(){
    double weight1 = 10.0;
    double distance1 = 50.0;
    cout << "Total delivery charges for" << weight1 << "pounds and " << distance1 << "km: $" << calculateDeliveryCharges(weight1, distance1) << endl;

    double weight2 = 20.0;
    double distance2 = 100.0;
    double rate = 0.75;
    cout << "Total delivery charges for" << weight2 << "pounds and " << distance2 << "km: and rate $" << rate << calculateDeliveryCharges(weight2, distance2, rate) << endl;

    double weight3 = 30.0;
    double distance3 = 150.0;
    double insurance = 10.0;
    cout << "Total delivery charges for" << weight3 << "pounds and " << distance3 << "km, insurance " << insurance << ", and default rate: $" << calculateDeliveryCharges(weight3, distance3, 0.50, insurance) << endl;

    double weight4 = 40.0;
    double distance4 = 300.0;
    double insurance2 = 15.00;
    bool priority = true;
    cout << "Total delivery charges for " << weight4 << " pounds, " << distance4 << " km, insurance $" << insurance2 << ", rate " << 0.50 << "km, and priority $" << calculateDeliveryCharges(weight4, distance4, 0.50, insurance2, priority) << endl;

    return 0;
}