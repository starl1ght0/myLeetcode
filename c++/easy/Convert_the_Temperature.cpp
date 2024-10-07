// task №2469

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    double ans[2] = { kelvin, fahrenheit };
    
    return {kelvin, fahrenheit};
    }
};
