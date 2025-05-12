# Number-to-digit-sum
A simple C++ code to input a number and find its digit sum. Works upto 10 digit numbers.

# Working
- User is requested to input the number digit by digit (ofc from left to right)
- Digits are stored in array, untill user inputs -1
- Then, all digits are added one by one using for loop
- At last, it outputs the sum

# Known issues

- Code behave unexpectedly when inputting digits less than -1
- Code wont process perfectly when a 2 digit number is inputted at a time
- Cannot inform about reaching the limit of digits while inputting (May result in unexpected errors)

# Running

- Code tested in VS code with MinGW-x64
- GCC compiler is recommended
