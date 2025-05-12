#include <iostream>
using namespace std;
int main()
{
    // Initializing variables and array
    int number[11];
    int sum = 0, temp = 0, count = 0;

    // Asking user to input the number
    cout << "\nEnter the number you need to calculate, digit by digit.";
    cout << "\nTo stop, enter -1.";

    // For loop to input
    for (int i = 0; i < 11; i++)
    {
        cout << "\nEnter digit " << i+1 << " : ";
        cin >> temp;

        // For stopping at -1
        if (temp == -1)
         break;
        
        number[i] = temp;
        count++;
        temp = 0;
    }

    // Now taking sum
    temp = 0;
    for (int j = 0; j < count; j++) 
    {
        temp = number[j];
        sum = sum + temp;
    }

    // Outputting sum
    cout << "\nThe sum is: " << sum;

    return 0;
}
