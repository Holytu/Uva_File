#include <iostream>
using namespace std;
int NumCycle(int i , int j)
{
    int n ;
    int max_num = 0 ;

    for ( n = i ; n <= j ; n++)
    {
        int ans = n , num = 0 ;
		
        while( ans > 1 )
        {
            if(ans & 1)
            {
                ans = ans * 3 + 1;
                num++;
            }
            else
            {
                ans = ans / 2;
                num++;
            }
        }

        if(ans == 1)
        {
            num++;
        }

        if(num > max_num)
        {
            max_num = num;
        }
        //cout << "n = " << n << ", num = " << num << "\n";
    }
    return max_num;
}
int main()
{
    int i , j ;

    while( cin >> i >> j )
    {
		bool change = false;
		int ans ;
		if(i > j)
		{
			int tmp = i ;
			i = j ;
			j = tmp ;
			change = true;
		}
		
		ans = NumCycle(i , j);
		
		if(change == true)
		{
			cout << j << " " << i << " " << NumCycle(i , j) << endl;
		}
		else
		{
			cout << i << " " << j << " " << NumCycle(i , j) << endl;
		}
        
    }


    return 0;
}
