#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int rows;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	while(rows<=0){
		cout<<"Number of rows cannot be less than or equal to 0. Enter an accepted value: ";
		cin>>rows;
	int cols;
	cout<<"Enter the number of columns: ";
	cin>>cols;
	while(cols<=0){
		cout<<"Number of cols cannot be less than or equal to 0. Enter an accepted value: ";
		cin>>cols;
	}
	int a[rows][cols];
	cout<<"Enter the elements of the matrix: "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<"Enter ["<<i+1<<"]["<<j+1<<"] element: ";
			cin>>a[i][j];
		}
	}
	cout<<"The matrix entered is: "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Row"<<setw(10)<<"Column"<<setw(10)<<"Value"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(a[i][j]!=0){
				cout<<setw(2)<<i<<setw(9)<<j<<setw(10)<<a[i][j]<<endl;		
			}	
		}
	}
	return 0;
}
