#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;

    cout << "Enter your weight in kilograms---: ";
    cin >> weight;

    cout << "Enter your height in meters------: ";
    cin >> height;

    bmi = weight/(height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi < 25)
    {
        cout << "Normal weight" << endl;
    }
    else if (bmi < 30)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Obese" << endl;
    }

    return 0;
}
