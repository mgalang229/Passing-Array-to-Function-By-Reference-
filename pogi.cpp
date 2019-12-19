#include <iostream>
using namespace std;
void getGrade(int &a);
void grade(int &a);

int main(){
	int grades[5];
	cout << "Enter five grades: ";
	for(int i = 0; i < 5; i++){
		getGrade(grades[i]);
	}
	cout << "\nThe grades are: ";
	for(int i = 0; i < 5; i++){
		grade(grades[i]);
	}
	return 0;
}
void getGrade(int &a){
	int *x = &a;
	cin >> *x;
}
void grade(int &a){
	int* x = &a;
	cout << *x << " ";
}
