//main file to test the inheritance hierarchy
#include<string>
#include<iomanip>
#include<iostream>
#include "Package_YueNi.h"
#include "TwoDayPackage_YueNi.h"
#include "OvernightPackage_YueNi.h"
#include <vector>
using namespace std;

int main(){
	
	cout << "Package delivery services program"<<endl;
	cout << "\nCost per ounce for a package: $.50/ounce";
	cout << "\nAdditonal cost for two day delivery: $2.00/ounce";
	cout << "\nAdditional cost for overnight delivery: $5.00/ounce"<<endl;
	//initialize the three packages that we will be testing
	Package package;
	package.set_sender_name("John Smith");
	package.set_sender_add("1 Davidson Road");
	package.set_sender_city("Piscataway");
	package.set_sender_state("NJ");
	package.set_sender_zip("08854");
	package.set_reci_name("Tom Smith");
	package.set_reci_add("2 Davidson Road");
	package.set_reci_city("Piscataway");
	package.set_reci_state("NJ");
	package.set_reci_zip("08854");
	package.set_weight(10);
	//package.print();


	TwoDayPackage package1;
        package1.set_sender_name("Mary Smith");
        package1.set_sender_add("3 Davidson Road");
        package1.set_sender_city("Piscataway");
        package1.set_sender_state("NJ");
        package1.set_sender_zip("08854");
        package1.set_reci_name("Jennifer Smith");
        package1.set_reci_add("4 Davidson Road");
        package1.set_reci_city("Piscataway");
        package1.set_reci_state("NJ");
        package1.set_reci_zip("08854");
        package1.set_weight(5);
        //package1.print();

   	OverNightPackage package2;
        package2.set_sender_name("John Smith");
        package2.set_sender_add("1 Davidson Road");
        package2.set_sender_city("Piscataway");
        package2.set_sender_state("NJ");
        package2.set_sender_zip("08854");
        package2.set_reci_name("Mary Smith");
        package2.set_reci_add("3 Davidson Road");
        package2.set_reci_city("Piscataway");
        package2.set_reci_state("NJ");
        package2.set_reci_zip("08854");
        package2.set_weight(2);
        //package2.print();


	
	vector<Package *> package_vector(3);
	package_vector[0]= &package;
	package_vector[1]= &package1;
	package_vector[2]= &package2;
	double cost_sum =0;
	for (int i =0;i<3;i++){
		cout <<"Package " << i+1<<":"<<endl;
		package_vector[i]->print();
		cost_sum += package_vector[i]->calculateCost();
	}
	cout <<"\nTotal cost of all packages: $"<<fixed<<setprecision(2)<<cost_sum<<endl;

	return 0;
}
