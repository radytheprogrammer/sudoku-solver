#include <iostream>
using namespace std;
const int SIZE = 9;

int main()
{
	for(int row = 0; row < SIZE; row++) // moves down
		if ( row % 4 == 0 )
		{

			for ( int col = 0; col < SIZE; col++ ) // moves right
				if ( col % 4 == 0 ) // seperators every 4 intervals
					cout << '+' << ' ';
				else
					cout << '-' << ' '; // filler symbols
			cout << endl;

		}else{				// inner rows . . . | . . . | . . .

			for ( int col = 0; col < SIZE; col++ )
				if ( col % 4 == 0 )
					cout << '|' << ' ';
				else
					cout << '.' << ' ';
			cout << endl;
		}
		getchar(); // wait for the user
}