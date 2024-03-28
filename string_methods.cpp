// Type your code here, or load an example.
#include <iostream>
#include <sstream>
#include <array>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


int main(){
    string s="hello";
    string s2=s.append(", world");
    s2.insert(0,"help ");
    s2.replace(0,4,"work");
    cout <<s2.substr(0,5)<<endl;
    cout<<s2<<endl;
    return 0;
}
