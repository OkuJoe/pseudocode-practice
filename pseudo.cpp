/*
a pseudocode is simle code in. plain english before it is imlemented in a programming language
*/
 



/* hello world pseudocode
start 
print(" hello bro")
end.

or you just say print(hello bro)
*/


/*
#include <iostream>
using namespace std;
 int main(){
string name;
name=" hello bro";

cout<<name;

return 0;
 }
*/

// pseudocode for opeartors
/*
declare/ define var1,var2,var3
input var1=" enter your first var"
input var2=" enter second var"
var3=var1+var2
print(" sum is ")

*/

/*
#include <iostream>
#include <cmath>
using namespace std;
 int main(){
int var1;
cout<< " enter first number";
cin>>var1;
int var2;
cout<< " enter second number";
cin>> var2;
int var3;
var3=var1+var2;

cout<< " sum is:";
cout<<var3;




return 0;
}

*/



// decison making pseudocode
/*
declare var1, var2,
if var1>var2 then
     print(" var 1 iss bigger")
else 
     print(" var 2 is bigger")
end 

*/

/*
#include <iostream>
#include <cmath>
using namespace std;
 int main(){
 
int var1;
cout<< " enter value:" <<endl;
cin>> var1;
int var2;
cout<< " enter value:" <<endl;
cin>>var2;
if(var1>var2){
cout<< " var1 is bigger" <<endl;

}
else {
    cout<< " var2 is bigger" <<endl;

}





return 0;
}

*/










/* CW NUMBER 1
#include <iostream>
using namespace std;

int main(){
    int numbers;
    
    while(true){
        cout << "Please enter number: ";
        cin >> numbers;
        
        // Exit if negative number
        if(numbers < 0){
            cout << "Negative number entered. Exiting..." << endl;
            break;
        }
        
        // Skip multiplication if 0
        if(numbers == 0){
            cout << "Zero entered. Skipping multiplication." << endl;
            continue;
        }
        
        // Calculate and display product for positive numbers
        int product = numbers * numbers;
        cout << "Product is = " << product << endl;
    }
    
    return 0;
}
    */




/*
 NUMBER ONE CW
#include <iostream>
using namespace std;

int main(){
    int numbers;
    int count ;           // Count of valid numbers (excluding 0 and negative) intialize because we can get wrong answers at times with 1 and 0
    int totalProduct ;    // Product of all valid numbers
    
    while(true){
        cout << "Please enter number: ";
        cin >> numbers;
        
        // Exit if negative number
        if(numbers < 0){
            cout << "Negative number entered. Exiting..." << endl;
            break;
        }
        
        // Skip multiplication if 0
        if(numbers == 0){
            cout << "Zero entered. Skipping multiplication." << endl;
            continue;
        }
        
        // Calculate and display product for positive numbers
        int product = numbers * numbers;
        cout << "Product is = " << product << endl;
        
        // Update count and total product
        count++;
        totalProduct *= numbers;
    }
    
    // Display summary before exiting
    cout << "\n--- Summary ---" << endl;
    cout << "Total numbers entered (excluding 0 and negative): " << count << endl;
    cout << "Product of all entered numbers: " << totalProduct << endl;
    
    return 0;
}

*/

 
     // CWW NUMBER 2 
#include <iostream>
#include <vector>
// <random> is no longer needed

int main() {
    // --- New Setup: Get numbers from the user ---
    int count = 0;
    std::cout << "How many numbers would you like to enter? ";
    std::cin >> count;

    // Add a check to make sure we get at least one number
    if (count <= 0) {
        std::cout << "You must enter at least one number." << std::endl;
        return 1; // Exit with an error
    }

    std::vector<int> number_list;
    std::cout << "Please enter " << count << " numbers (you can separate them with spaces or press Enter after each):" << std::endl;

    // Loop 'count' times to read in each number
    for (int i = 0; i < count; ++i) {
        int input_number;
        std::cin >> input_number;
        number_list.push_back(input_number); // Add the user's number to our list
    }
    // --- End of New Setup ---


    // Your pseudocode implementation starts here (and is unchanged)
    
    // 1. Initialize our "sticky notes".
    // We already know the list isn't empty because of our 'count' check.
    int max_number = number_list[0];
    int min_number = number_list[0];

    // 2. Loop through all the numbers in the list.
    for (int number : number_list) {
        
        // 3. Check against the current maximum
        if (number > max_number) {
            max_number = number;
        }

        // 4. Check against the current minimum
        if (number < min_number) {
            min_number = number;
        }
        
    } // 5. END FOR

    // 6. Display the results.
    std::cout << "The maximum number is: " << max_number << std::endl;
    std::cout << "The minimum number is: " << min_number << std::endl;

    return 0; // Indicate successful execution
}