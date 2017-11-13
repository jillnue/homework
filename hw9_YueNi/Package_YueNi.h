//header file for the class Package
//serve as a base class of the hierarchy

#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Package{
public:
	Package(double);

	virtual double calculateCost();
	virtual void print();
	void set_weight(double);
	void set_cost_per_ounce(double);
	void set_sender_name(string);
	void set_sender_add(string);
	void set_sender_city(string);
	void set_sender_state(string);
	void set_sender_zip(string);

	void set_reci_name(string);
        void set_reci_add(string);
        void set_reci_city(string);
        void set_reci_state(string);
        void set_reci_zip(string);

	double get_weight();
	double get_cost_per_ounce();

        string get_sender_name() ;
        string get_sender_add() ;
        string get_sender_city() ;
        string get_sender_state() ;
        string get_sender_zip() ;

        string get_reci_name() ;
        string get_reci_add() ;
        string get_reci_city() ;
        string get_reci_state() ;
        string get_reci_zip();
	

private:
	string sender_name, sender_add, sender_city, sender_state, sender_zip;
	string reci_name, reci_add, reci_city, reci_state, reci_zip; 
	double weight;
	double cost_per_ounce;

};

Package::Package(double cost_pounce = 0.5){
	weight = 0;
	cost_per_ounce = cost_pounce;
}

double Package::calculateCost(){
	return weight*cost_per_ounce;
}
void Package::print(){
	cout<< "\nSender:"<<endl;
	cout << sender_name <<endl;
	cout << sender_add<<endl;
	cout << sender_city<< ", "<<sender_state<< " " << sender_zip<<endl;
	cout <<"\nReceipent:"<<endl;
	cout << reci_name<<endl;
	cout << reci_add<<endl;
	cout <<reci_city << ", "<<reci_state<<" " <<reci_zip<<endl;
	cout <<"\nWeight of package: "<< weight << " ounces"<<endl;
	cout << "Type of delivery: Regular Delivery"<<endl; 
	cout << "Cost of Package: $"<<fixed<<setprecision(2)<<calculateCost()<<endl;
}
void Package::set_weight(double x){
	weight = (x>0)? x:0;
}
void Package::set_cost_per_ounce(double x){
	cost_per_ounce = (x>0)?x:0.5;
}
void Package::set_sender_name(string x){
	sender_name = x;
}
void Package::set_sender_add(string x){
	sender_add = x;
}
void Package::set_sender_city(string x){
	sender_city =x;
}
void Package::set_sender_state(string x){
	sender_state = x;
}
void Package::set_sender_zip(string x){
	sender_zip = x;
}

void Package::set_reci_name(string x){
	reci_name = x;
}
void Package::set_reci_add(string x){
	reci_add =x;
}
void Package::set_reci_city(string x){
	reci_city = x;
}
void Package::set_reci_state(string x){
	reci_state =x;
}
void Package::set_reci_zip(string x){
	reci_zip=x;
}
double Package::get_weight() {
	return weight;
}
double Package::get_cost_per_ounce() {
	return cost_per_ounce;
}

string Package::get_sender_name() {
        return sender_name;
}
string Package::get_sender_add() {
        return sender_add;
}
string Package::get_sender_city() {
        return sender_city;
}
string Package::get_sender_state() {
        return sender_state;
}
string Package::get_sender_zip() {
        return sender_zip;
}

string Package::get_reci_name() {
        return reci_name;
}
string Package::get_reci_add() {
        return reci_add;
}
string Package::get_reci_city() {
        return reci_city;
}
string Package::get_reci_state() {
        return reci_state;
}
string Package::get_reci_zip() {
        return reci_zip;
}

#endif








