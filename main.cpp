// Started at 5:21 4-28-2022

// Section 8
// Assingment Operator

#include <iostream>

using namespace std;

int main() {
    
    int num1 {10};
    int num2 {20};
    
    num1 = 100;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    cout << endl;
    
    return 0;
}

// Section 8
// Arithmetic operators
/*
    + addition
    - subtraction
    * multiplication
    / divison
    % modulo or remainder (only works with integers)
     
    +, -, *, and / operators are overloaded to work with multiple types such as int, double, etc. 
    % only for integer types
*/
#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
//    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    result = num1 * 10 + num2;
    
    cout << 5/10 << endl;
    
    cout << 5.0/10.0 << endl;
    
    cout << endl;
    return 0;
}

// Section 8
// Convert EUR to USD 

#include <iostream>

using namespace std;

int main() {
    
    const double usd_per_eur {1.19};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros * usd_per_eur;
    
    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;
    
    cout << endl;
    return 0;
}

// Section 8
/*
    Increment operator --
    Decrement operator --
    
    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointer
      
    Prefix ++num
    Postfix  num++
    
    Don't overuse this operator!
    Never use it twice for the same variable in the same statement!!
*/
#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
    
//    Example 1 - simple increment
//    cout << "Counter: " << counter << endl;
//    
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//    
//    counter++;
//    cout << "Counter: " << counter << endl;
//
//    ++counter;
//    cout << "Counter: " << counter << endl;

//    Example 2 - preincrement
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = ++ counter; // Note the pre increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

//    Example 3 - post-increment
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = counter++; // Note the post increment
//    cout<< "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
//    Example 4
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = ++counter + 10; // Note the pre increment
//    
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
//    Example 5
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++ + 10; // Note the post increment
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;
    return 0;
}

// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum fo the integers
    calculate the average of the 3 integers.
    
    Display the 3 integers entered
    the sum of the 3 integers and 
    the average of the 3 integers.
*/

#include <iostream>

using namespace std;

int main() {
    int total = {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double> (total) / count;
//    average = (double)total/count; Old-Style 
    
    
    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the number is: " << average << endl;
    
    cout << endl;
    return 0;
}
