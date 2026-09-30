#include<iostream>
using namespace std;

int decTobinary(int decNum){
    int pow = 1 , ans = 0 ;
    
    while(decNum>0){
        int rem = decNum%2 ;
        decNum /=2;
        ans += (rem*pow);  
        pow *= 10; 
    }
    return ans;
}
int main(){
int decNum = 50;
cout << decTobinary(decNum);
    return 0;
}