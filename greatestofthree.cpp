//Maitreyee Gohad
//24070123509
#include <iostream>
using namespace std;

int main() 
{
    
    double n1, n2, n3;

    cout << "Enter three numbers: "<<endl;
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
    {
    	cout << "Largest number: " << n1;
	}
		
    else if(n2 >= n1 && n2 >= n3)
    {
    	 cout << "Largest number: " << n2;
	}
    
    else 
    {
    	 cout << "Largest number: " << n3;
	}
	
}


/*OUTPUT: 
Enter three numbers: 
34 35 36
Largest Number: 36*\
