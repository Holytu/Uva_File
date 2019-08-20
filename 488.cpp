#include <iostream>
using namespace std;
int main()
{
	int n , fuck = 1;
	int A , F;

	while(cin >> n )
	{	
		while( n > 0 )
		{
			cin >> A;
			cin >> F;

			while ( F > 0 )
			{
				//cout << "F = " << F << endl;

				for (int i = 1 ; i <= A ; i++ )
				{
					for (int j = 1 ; j <= i ; j++ )
					{
						cout << i ;
					}
					cout << endl;
				}

				for (int i = A - 1 ; i >= 1 ; i-- )
				{
					for (int j = i ; j >= 1 ; j-- )
					{
						cout << i;
					}
					cout << endl;
				}
				
				if( n > 1 || F > 1 )
				{
					cout << endl;
				}
				
				F = F - 1;	
			}

			n = n - 1 ;
		}
		
	}
	return 0;	
}