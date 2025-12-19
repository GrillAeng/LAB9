#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,PerYear,NewBalance,total;
	int year;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> PerYear;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	do{
	total = ((rate/100)*loan)+loan;
	cout << setw(13) << left << year+1; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << (rate/100)*loan;
	cout << setw(13) << left << total;
	if(PerYear>total) PerYear = total ;
	cout << setw(13) << left << PerYear;
	NewBalance=(((rate/100)*loan)+loan) - PerYear;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
	year++;
	loan=NewBalance;
	}while(loan>0.00);

	return 0;
}
