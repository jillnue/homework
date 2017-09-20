//Name: Yue Ni
//Course: 16:332:503, Programming Finance
//Monte Carlo method to calculate PI

#include<iostream>
#include<ctime>//use time to generate seed for rand()
#include<cstdlib>//contains srand and rand
#include<fstream>

using namespace std;

int main(){
	int interation;
	cout << "Please enter the number of interations for the simulation: "<<endl;
	cin >> interation;
	srand(time(0));
	

	int nu_in_circle=0;//record the number of points that is inside the circle

	//begin to simulate and write the result to myfile.txt
	ofstream file;
	file.open("myfile.txt");
	for (int i = 1; i <= interation;i++){
		double cor1 = rand()/double(RAND_MAX);//The first coordinate of the point
		double cor2 = rand()/double(RAND_MAX);//The second coordinate of the point
		file << cor1 <<"," << cor2<<"\n";
		if (cor1*cor1+cor2*cor2<=1.0)
			nu_in_circle ++;


	}	



	cout << "The estimate value of pi is "<<4* float(nu_in_circle)/interation <<endl;




	return 0;

}
