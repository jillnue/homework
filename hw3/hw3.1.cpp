//Matrix operations
//assignment 3
//16:332:503:01
//Yue Ni
//vector version

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;


void Inputting(vector<double> &);
void Displaying(int, vector<double> &);
void Addition(void);
void Substraction(void);
void Multiplication(void);
void Transpose(void);
void Determinant(void);
void Inverse(void);



int main()
{
	bool user_continue = true;
	while(user_continue){
		cout << "Menu" <<endl;//output the menu
		cout << " Choice 1: Addition"<<endl;
		cout << " Choice 2: Substraction"<<endl;
		cout << " Choice 3: Multiplication"<<endl;
		cout << " Choice 4: Transpose"<<endl;
		cout << " Choice 5: Determinant"<<endl;
		cout << " Choice 6: Inverse"<<endl;
		cout << " Choice 7: Quit"<<endl;
		cout << " Enter your choice"<<endl;
		int choice;
		cin >> choice;
		switch(choice)
		{

			case 1: Addition();
				break;
			case 2: Substraction();
				break;
			case 3: Multiplication();
				break;
			case 4: Transpose();
				break;
			case 5: Determinant();
				break;
			case 6: Inverse();
				break;
			case 7: user_continue = false;
				break; 
			default: cout <<"Please enter a interger from 1 to 7"<<endl; 
				break;

		}



	}
	return 0;
}

void Inputting( vector<double> &array){
	size_t i;
	for ( i = 0; i < array.size();i++)
		cin >> array[i];	
}


void Displaying(int column, vector<double> &array){
	size_t i;
	for(i=0;i< array.size();i++){
		cout << setw(10) << array[i];
		if ((i+1)%column ==0)
			cout <<endl;
	}		
}

void Addition(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx1(row_1*column_1);
        Inputting(mtx1);
	cout <<"Your input is:"<<endl;
	Displaying(column_1,mtx1);


	int row_2, column_2;
	cout <<"Please enter the number of rows: ";
	cin >> row_2;
	cout << "Please enter the number of columns: ";
	cin >> column_2;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx2(row_2*column_2);
        Inputting(mtx2);
	cout <<"Your input is:"<<endl;
	Displaying(column_2,mtx2);


	if (row_1 != row_2|| column_1 != column_2)
		cout <<"Can not add two matrices with different size together"<<endl;
	else{
		int row = row_1;
		int column = column_1;
		vector<double> result(row*column);
		for (int i =0; i<row;i++)
			for (int j = 0; j< column;j++)
				result[i*column+j]= mtx1[i*column+j]+mtx2[i*column+j];
		cout << "The result is:"<<endl;
		Displaying(column,result);	

	}
		
}


void Substraction(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout <<"Please enter the values of elements: ";
	vector<double> mtx1(row_1*column_1);
        Inputting(mtx1);
	cout <<"Your input is:"<<endl;
	Displaying(column_1,mtx1);


	int row_2, column_2;
	cout <<"Please enter the number of rows: ";
	cin >> row_2;
	cout << "Please enter the number of columns: ";
	cin >> column_2;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx2(row_2*column_2);
        Inputting(mtx2);
	cout <<"Your input is:"<<endl;
	Displaying(column_2,mtx2);


	if (row_1 != row_2|| column_1 != column_2)
		cout <<"Can not substract a matrix by a matrix of different size"<<endl;
	else{
		int row = row_1;
		int column = column_1;
		vector<double> result(row*column);
		for (int i =0; i<row;i++)
			for (int j = 0; j< column;j++)
				result[i*column+j]= mtx1[i*column+j]-mtx2[i*column+j];
		cout << "The result is:"<<endl;
		Displaying(column,result);	

	}
}


void Multiplication(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx1(row_1*column_1);
        Inputting(mtx1);
	cout <<"Your input is:"<<endl;
	Displaying(column_1,mtx1);


	int row_2, column_2;
	cout <<"Please enter the number of rows: ";
	cin >> row_2;
	cout << "Please enter the number of columns: ";
	cin >> column_2;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx2(row_2*column_2);
        Inputting(mtx2);
	cout <<"Your input is:"<<endl;
	Displaying(column_2,mtx2);


	if (column_1 != row_2)
		cout <<"Can not multiply two matrices together if the number of columns of the first matrix is not equal to\
			the number of rows of the second matrix"<<endl;
	else{
		int max_k = row_2;
		int row = row_1;
		int column = column_2;
		vector<double> result(row*column);
		for (int i =0; i<row;i++)
			for (int j = 0; j< column;j++){
				result[i*column+j]= 0;
				for (int k =0; k<max_k;k++)
					result[i*column+j]+= mtx1[i*column_1+k]*mtx2[k*column_2+j];
			}
		cout << "The result is:"<<endl;
		Displaying(column,result);	
	}
}

void Transpose(){

	int row, column;
	cout <<"Please enter the number of rows: ";
	cin >> row;
	cout << "Please enter the number of columns: ";
	cin >> column;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx(row*column);
        Inputting(mtx);
	cout <<"Your input is:"<<endl;
	Displaying(column,mtx);

	vector<double> result(row*column);
	for (int i =0;i<row;i++)
		for (int j =0;j<column;j++){
			result[j*row+i] = mtx[i*column+j];
		}	
	cout << "The result is:"<<endl;
	Displaying(row,result);	
	
}

void Determinant(){

	int row, column;
	cout <<"Please enter the number of rows: ";
	cin >> row;
	cout << "Please enter the number of columns: ";
	cin >> column;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx(row*column);
        Inputting(mtx);
	cout <<"Your input is:"<<endl;
	Displaying(column,mtx);

	
	if (row !=3 || column !=3)
                cout <<"The operation is not supported."<<endl;
        else{
                double result;
                result = mtx[0]*(mtx[4]*mtx[8]-mtx[5]*mtx[7]);
                result -= mtx[1]*(mtx[3]*mtx[8]-mtx[5]*mtx[6]);
                result += mtx[2]*(mtx[3]*mtx[7]-mtx[4]*mtx[6]);
                cout << "The result is:"<<endl;
                cout << result<<endl;
        }

}

void Inverse(){
	int row, column;
	cout <<"Please enter the number of rows: ";
	cin >> row;
	cout << "Please enter the number of columns: ";
	cin >> column;
	cout <<"Please enter the values of elements: "<<endl;
	vector<double> mtx(row*column);
        Inputting(mtx);
	cout <<"Your input is:"<<endl;
	Displaying(column,mtx);

	
	if (row !=3 || column !=3)
		cout <<"The operation is not supported."<<endl;
	else{	
		double det;
                det = mtx[0]*(mtx[4]*mtx[8]-mtx[5]*mtx[7]);
                det -= mtx[1]*(mtx[3]*mtx[8]-mtx[5]*mtx[6]);
                det += mtx[2]*(mtx[3]*mtx[7]-mtx[4]*mtx[6]);
		if (det ==0)
			cout <<"The inverse does not exist."<<endl;
		else{
			vector<double> minor(9);
			minor[0] = mtx[4]*mtx[8]-mtx[5]*mtx[7];
			minor[1] = mtx[3]*mtx[8]-mtx[5]*mtx[6];
			minor[2] = mtx[3]*mtx[7]-mtx[4]*mtx[6];
			minor[3] = mtx[1]*mtx[8]-mtx[2]*mtx[7];
			minor[4] = mtx[0]*mtx[8]-mtx[2]*mtx[6];
			minor[5] = mtx[0]*mtx[7]-mtx[1]*mtx[6];
			minor[6] = mtx[1]*mtx[5]-mtx[2]*mtx[4];
			minor[7] = mtx[0]*mtx[5]-mtx[2]*mtx[3];
			minor[8] = mtx[0]*mtx[4]-mtx[1]*mtx[3];

			for (int i=0;i<3;i++)
				for (int j=0;j<3;j++){
					if ((i+j)%2!=0)
						minor[i*column+j] = (-1)*minor[i*column+j];
			}
			vector<double> result(9);
			for (int i=0;i<3;i++)
				for (int j=0;j<3;j++)
					result[i*3+j] = minor[j*3+i]/det;
			cout <<"The result is:"<<endl;
			Displaying(3,result);


		}
	}


}
