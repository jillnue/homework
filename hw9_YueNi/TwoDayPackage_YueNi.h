//header file for class TwoDayPackage

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package_YueNi.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class TwoDayPackage: public Package{
public:
	TwoDayPackage(double = 2.00);
	virtual void print();
	virtual double calculateCost();

private:
	double flat_fee_per_ounce;
};

TwoDayPackage::TwoDayPackage(double flat_fee){
	flat_fee_per_ounce = (flat_fee>0)?flat_fee:0;
}
void TwoDayPackage::print() {
	cout<< "\nSender:"<<endl;
        cout << Package::get_sender_name() <<endl;
        cout << Package::get_sender_add()<<endl;
        cout << Package::get_sender_city()<< ", "<<Package::get_sender_state()<< " " << Package::get_sender_zip()<<endl;
        cout <<"\nReceipent:"<<endl;
        cout << Package::get_reci_name()<<endl;
        cout << Package::get_reci_add()<<endl;
        cout << Package::get_reci_city() << ", "<< Package::get_reci_state()<<" " <<Package::get_reci_zip()<<endl;
        cout <<"\nWeight of package: "<< Package::get_weight() << " ounces"<<endl;
        cout << "Type of delivery: Two Day Delivery"<<endl;
        cout << "Cost of Package: $"<<fixed<<setprecision(2)<<calculateCost()<<endl;
}
double TwoDayPackage::calculateCost(){
	double w,c;
	w = get_weight();
	c = get_cost_per_ounce();
	return w*(flat_fee_per_ounce+c);
}


#endif
