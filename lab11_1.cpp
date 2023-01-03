#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int s = 0;
	string grade;
	do{
		cout << "Student [" << s+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A"){ // if grade is A
			count[0]++;
			s++;
		}else if(grade == "B"){ // if grade is B
			count[1]++;
			s++;
		}else if(grade == "C"){ // if grade is C
			count[2]++;
			s++;
		}else if(grade == "D"){ // if grade is D
			count[3]++;
			s++;
		}else if(grade == "F"){ // if grade is F
			count[4]++;
			s++;
		}else if(grade == "0") break; 
		else cout << "Wrong input. Please input again.\n"; // grade is wrong input
	}while(true);
	cout << "In total " << s << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	
	return 0;
}
