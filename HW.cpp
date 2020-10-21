#include<iostream>
#include <time.h> 
using namespace std;

int main()
{
    int number, num, x = 1;
       srand(time(NULL));
        number = rand() % 20;
         cout << "-------------------------------------------\n";
        do
        {
          
            cout << " Enter luckynumber  " << x++ << "(1-20) : ";
            cin >> num;

            if (number != num)
            {
                cout << "This is wrong number\n";
            }
            else if (number == num)
            {
                cout << "Lucky!!!!!!\n";
            }
        }
        while  (number != num);
        cout << "You got 1,000,000 bath!\n";
        cout << "-------------------------------------\n";
        return 0;
    
}