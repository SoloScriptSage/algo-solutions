// Hirchuk Vladyslav
// Corporate sales [Files]

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct Company {
    string division_name;
    float first_quarter_sales;
    float second_quarter_sales;
    float third_quarter_sales;
    float fourth_quarter_sales;
    float total_annual_sales;
    float average_quarterly_sales;
};

Company division[4];

void readFile(string filename) {
    ifstream Stream(filename);

    if (!Stream) {
        cerr << "Error opening file: " << filename << endl; 
        exit(1);
    }

    for (int i = 0; i < 4; ++i) {
        // TODO: Fill in quarterly sales figures for each division.
        Stream >> division[i].division_name >> division[i].first_quarter_sales
            >> division[i].second_quarter_sales >> division[i].third_quarter_sales
            >> division[i].fourth_quarter_sales;

        // TODO: Calculate total sales for each division.
        division[i].total_annual_sales = division[i].first_quarter_sales +
            division[i].second_quarter_sales +
            division[i].third_quarter_sales +
            division[i].fourth_quarter_sales;
        // TODO: Calculate average quarterly sales for each division.
        division[i].average_quarterly_sales = division[i].total_annual_sales / 4;
    }

    Stream.close();
}

int main() {
    string filename = "sales.txt";

    readFile(filename);
    // TODO: Print report of all sales data from all four divisions.
    cout << endl << fixed << setprecision(2);
    for (int i = 0; i < 4; ++i) {
        cout << "\t[Sales report for " << division[i].division_name << "]" << endl;
        cout << "Total annual sales: $" << division[i].total_annual_sales << endl;
        cout << "Average quarterly sales: $" << division[i].average_quarterly_sales << endl;
    }

    return 0;
}
