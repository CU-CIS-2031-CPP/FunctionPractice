#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//A function that returns the LARGER of the two parameters
int max(int a, int b){
    if ( a > b ){
        return a;
    } else {
        return b;
    }
}

//A function that returns the SMALLEr of the two parameters
int min(int a, int b){
    if ( a > b ){
        return b;
    } else {
        return a;
    }
}

//Return the string s repeated n times
string repeat(string s, int n){
    string ret;
    while ( n > 0 ){
        ret = ret + s;
        n = n - 1; 
    }
    return ret;
}

//PRINT the string s repeated n times, return nothing
void sayNTimes(string s, int n){
    while ( n > 0 ){
        cout << s;
        n = n - 1; 
    }
    cout << endl;
}

//Add a and b, return the result
int add(int a, int b){
    return a + b;
}

//Output an appropriate response based on the age
void beerMe(int age){
    //This code has something new! See it?
    if ( age >= 21 ){
        cout << "Cheers mate!" << endl;
    } else if ( age >= 18 ){
        cout << "You can smoke instead (but don't)" << endl;
    } else {
        cout << "Have a pepsi, kid!" << endl;
    }
}

float calculateAreaOfTrinagle(float base, float height){
    float area = base * height;
    area = area / 2;
    return area;
}

//Return a customized greeting message based on the name
string makeGreeting(string name){
    if ( name == "Bill" ){
        return "Hello Professor!";
    } else {
        return "Hello " + name + "!";
    }
}

//Count to n, printing out each step
void countTo(int n){
    int count = 1;
    while ( count <= n ){
        cout << "Counting to " << n << ", at " << count << endl;
        count++;
    }
}

//Same as above, but with a for loop!
void countWithForLoop(int n){
    for ( int count = 0; count <= n; count++ ){
        cout << "Counting to " << n << " with a for loop, at " << count << endl;
    }
}

void main(){
    countWithForLoop(3);
    countTo(5);
    cout << makeGreeting("Bill") << endl;
    cout << makeGreeting("Steve") << endl;
    cout << calculateAreaOfTrinagle(3,5) << endl;
    beerMe(12);
    beerMe(19);
    beerMe(22);
    cout << add(2,3) << endl;
    sayNTimes("wakka ", 2);
    cout << repeat("ho ", 3) << endl;
    cout << min(10, 20) << endl;
    cout << max(10, 20) << endl;
}