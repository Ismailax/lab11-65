#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    double sum = 0, sd, y, mean;
    ifstream source("score.txt");
    string text;
    while(getline(source,text)){
        sum += stof(text);
        y += pow(stof(text),2);
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    mean = sum/count;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = ";
    sd = sqrt((y/count) - pow(mean,2));
    cout << sd;
}