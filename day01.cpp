// Working with arrays 
#include<iostream>
using namespace std;

int main(){
    float monthsArray[12]; // = { 200, 220, 300, 0, 300, 400 };

    float total;

    for(int i = 0; i < 12; i++){
        cout << "Enter the amount for the month : "<< i + 1  << endl;
        cin >> monthsArray[i];

        total += monthsArray[i];
    }

    // float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + 
    //     monthsArray[3] + monthsArray[4] + monthsArray[5];

    float average = total / 12;
    float inTwoYears = average * 24;

    cout << "Total: " << total <<endl;
    cout << "Average: " << average <<endl;
    cout << "In two years: " << inTwoYears <<endl;

    return 0;
}