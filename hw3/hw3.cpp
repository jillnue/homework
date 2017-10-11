//Matrix operations
//assignment 3
//16:332:503:01
//Yue Ni
//matrices version

#include<iostream>
#include<iomanip>
using namespace std;


void Inputting(int, int, double*);
void Displaying(int, int, double*);
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
		cout << "Enter your choice"<<endl;
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

void Inputting(int row, int column, double * mtx_ptr){
	
	for (int i=0;i<row;i++)
		for ( int j = 0;j<column;j++)
			cin >> *(mtx_ptr+i*column+j);
}


void Displaying(int row, int column, double * mtx_ptr){
	for (int i=0;i<row;i++){
		for (int j = 0;j<column;j++){
			cout <<setw(10)<<*(mtx_ptr+ i*column+j);
		}
	cout <<  endl;
	}
}

void Addition(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout <<"Please enter the values of elements:"<<endl;
	double mtx1[row_1][column_1];
	Inputting(row_1, column_1,&mtx1[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_1,column_1,&mtx1[0][0]);


	int row_2, column_2;
	cout <<"Please enter the number of rows: ";
	cin >> row_2;
	cout << "Please enter the number of columns: ";
	cin >> column_2;
	cout << "Please enter the values of elements:"<<endl;
	double mtx2[row_2][column_2];
	Inputting(row_2, column_2,&mtx2[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_2,column_2,&mtx2[0][0]);
	
	if (row_1 != row_2|| column_1 != column_2)
		cout <<"Can not add two matrices with different size together"<<endl;
	else{
		int row = row_1;
		int column = column_1;
		double sum[row][column];
		for (int i =0; i<row;i++)
			for (int j = 0; j< column;j++)
				sum[i][j] = mtx1[i][j]+mtx2[i][j];
		cout << "The result is:"<<endl;
		Displaying(row,column,&sum[0][0]);	

	}
		
}


void Substraction(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout << "Please enter the values of elements:"<<endl;
	double mtx1[row_1][column_1];
	Inputting(row_1, column_1,&mtx1[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_1,column_1,&mtx1[0][0]);


	int row_2, column_2;
	cout <<"Please enter the number of rows: ";
	cin >> row_2;
	cout << "Please enter the number of columns: ";
	cin >> column_2;
	cout << "Please enter the values of elements:"<<endl;
	double mtx2[row_2][column_2];
	Inputting(row_2, column_2,&mtx2[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_2,column_2,&mtx2[0][0]);
	
	if (row_1 != row_2|| column_1 != column_2)
		cout <<"Can not substract a matrix with different size from the original matrix"<<endl;
	else{
		int row = row_1;
		int column = column_1;
		double result[row][column];
		for (int i =0; i<row;i++)
			for (int j = 0; j< column;j++)
				result[i][j] = mtx1[i][j]-mtx2[i][j];
		cout << "The result is:"<<endl;
		Displaying(row,column,&result[0][0]);	

	}
		
}


void Multiplication(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout << "Please enter the values of elements:"<<endl;
	double mtx1[row_1][column_1];
	Inputting(row_1, column_1,&mtx1[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_1,column_1,&mtx1[0][0]);


	int row_2, column_2;
	cout <<"Please enter the number of rows: ";
	cin >> row_2;
	cout << "Please enter the number of columns: ";
	cin >> column_2;
	cout << "Please enter the values of elements:"<<endl;
	double mtx2[row_2][column_2];
	Inputting(row_2, column_2,&mtx2[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_2,column_2,&mtx2[0][0]);
	
	if (column_1 != row_2)
		cout <<"Can not multiply two matrices together if the number of columns of the first matrix\
			 is not equal to the number of rows of the second metrix."<<endl;
	else{
		int max_k = row_2;
		double result[row_1][column_2];
		for (int i =0; i<row_1;i++)
			for (int j = 0; j< column_2;j++){
				result[i][j] = 0 ;
				for (int k =0; k<max_k;k++)
					result[i][j]+= mtx1[i][k]*mtx2[k][j];
				
			}
		cout << "The result is:"<<endl;
		Displaying(row_1,column_2,&result[0][0]);	

	}
		
}

void Transpose(){

	int row_1, column_1;
	cout <<"Please enter the number of rows: ";
	cin >> row_1;
	cout << "Please enter the number of columns: ";
	cin >> column_1;
	cout << "Please enter the values of elements:"<<endl;
	double mtx1[row_1][column_1];
	Inputting(row_1, column_1,&mtx1[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row_1,column_1,&mtx1[0][0]);


	double result[column_1][row_1];
	for (int i =0; i<row_1;i++)
		for (int j = 0; j< column_1;j++)
			result[j][i] = mtx1[i][j];
	cout << "The result is:"<<endl;
	Displaying(column_1,row_1,&result[0][0]);	

}

void Determinant(){

	int row, column;
	cout <<"Please enter the number of rows: ";
	cin >> row;
	cout << "Please enter the number of columns: ";
	cin >> column;
	cout << "Please enter the values of elements:"<<endl;
	double mtx[row][column];
	Inputting(row, column,&mtx[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row,column,&mtx[0][0]);
	
	if (row !=3 || column !=3)
		cout <<"The operation is not supported."<<endl;
	else{	
		double result;
		result = mtx[0][0]*(mtx[1][1]*mtx[2][2]-mtx[1][2]*mtx[2][1]);
		result -= mtx[0][1]*(mtx[1][0]*mtx[2][2]-mtx[1][2]*mtx[2][0]);
		result += mtx[0][2]*(mtx[1][0]*mtx[2][1]-mtx[1][1]*mtx[2][0]);
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
	cout <<"Please enter the values of elements:"<<endl;
	double mtx[row][column];
	Inputting(row, column,&mtx[0][0]);
	cout <<"Your input is:"<<endl;
	Displaying(row,column,&mtx[0][0]);
	
	if (row !=3 || column !=3)
		cout <<"The operation is not supported."<<endl;
	else{	
		double det;
		det = mtx[0][0]*(mtx[1][1]*mtx[2][2]-mtx[1][2]*mtx[2][1]);
		det -= mtx[0][1]*(mtx[1][0]*mtx[2][2]-mtx[1][2]*mtx[2][0]);
		det += mtx[0][2]*(mtx[1][0]*mtx[2][1]-mtx[1][1]*mtx[2][0]);
		if (det ==0)
			cout <<"The inverse does not exist."<<endl;
		else{
			double minor[3][3];
			minor[0][0] = mtx[1][1]*mtx[2][2]-mtx[1][2]*mtx[2][1];
			minor[0][1] = mtx[1][0]*mtx[2][2]-mtx[1][2]*mtx[2][0];
			minor[0][2] = mtx[1][0]*mtx[2][1]-mtx[1][1]*mtx[2][0];
			minor[1][0] = mtx[0][1]*mtx[2][2]-mtx[0][2]*mtx[2][1];
			minor[1][1] = mtx[0][0]*mtx[2][2]-mtx[0][2]*mtx[2][0];
			minor[1][2] = mtx[0][0]*mtx[2][1]-mtx[0][1]*mtx[2][0];
			minor[2][0] = mtx[0][1]*mtx[1][2]-mtx[0][2]*mtx[1][1];
			minor[2][1] = mtx[0][0]*mtx[1][2]-mtx[0][2]*mtx[1][0];
			minor[2][2] = mtx[0][0]*mtx[1][1]-mtx[0][1]*mtx[1][0];

			for (int i=0;i<3;i++)
				for (int j=0;j<3;j++){
					if ((i+j)%2!=0)
						minor[i][j] = (-1)*minor[i][j];
			}
			double result[3][3];
			for (int i=0;i<3;i++)
				for (int j=0;j<3;j++)
					result[i][j] = minor[j][i]/det;
			cout <<"The result is:"<<endl;
			Displaying(3,3,&result[0][0]);


		}
	}


}
