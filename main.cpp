#include<iostream>
#include"BondCalculator.h"

int main(){

    std::string issuer = "us 10 year bond yield";
    double principal = 1000;
    double coupon = 20;
    int numPeriods = 10;
    BondCalculator bc(issuer, numPeriods, principal, coupon);
    std::cout << "reading information for bond issued by us 10 year bond yield "<< std::endl;
    std::cout << " the internal rate of return is " << bc.interestRate() << std::endl;
    return 0;
}