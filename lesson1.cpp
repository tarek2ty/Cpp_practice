// Type your code here, or load an example.
#include <iostream>
#include <sstream>
#include <array>
#include <cmath>
#include <iomanip>
using namespace std;
int square(int num) {
    return num * num;
}

int CeltoFah(){
    float c;
    cin >> c;
    float f = 9.0/5*c + 32;
    cout<<f;
    return 0;
}

int maxinput(){
    int macs = 0;
    int tmp;
    cin >> tmp;
    while(tmp){
        if(tmp>macs) macs=tmp;
        cin >>tmp;
    }
    cout << macs;
    return 0;
}

int inttostr(){
    long age=123456789;
    stringstream s;
    s << age;
    string s2;
    s >> s2;
    for(int i=s2.length()-1; i>=0;i--) cout << s2[i];
    return 0;
}

int isperfect(int a){
    int divis[a];
    divis[0]=1;
    int sum =0;
    int index = 1;
    for(int i=2;i<a;i++){
        if(a%i==0) {
            divis[index] = i;
            index++;}
        }
    for(int i=index;i<a;i++) divis[i]=0;
    for(auto i: divis) {
        if(i<a) sum+=i;};
    if(sum==a) return true;
    else return false;
}

std::array<int,100> factors(){
    std::array<int,100> arr;
    for(int i=0;i<5;i++) arr[i]=i;
    return arr;
}

int* factor(int n){
    static int divis[100];
    int index = 0;
    int remain=n;
    while(remain!=1){
        if(remain%2==0){
            divis[index]=2;
            index++;
            remain = remain/2;
        } 
        else if(remain%3==0){
            divis[index]=3;
            index++;
            remain = remain/3;
        }
        else if(remain%5==0){
            divis[index]=5;
            index++;
            remain = remain/5;
        }
        else if(remain%7==0){
            divis[index]=7;
            index++;
            remain = remain/7;
        }
    }
    return divis;
}

float pi(int n){
    int index=0;
    float pi=0;
    int limit = n*2;
    float pi_tmp;
    for(int i=1;i<=limit;i=i+2){
        pi_tmp = pow(-1,index)/(i);
        pi+=pi_tmp;
        index++;
    }
    return pi*4.0;
}
int main(){
    float pi1;
    pi1=pi(10000);
    cout<<pi1;
    return 0;
}
