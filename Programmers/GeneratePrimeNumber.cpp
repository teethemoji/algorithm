#include <vector>
#include <iostream>
using namespace std;

// Function declaration
// int caculateIteration(int sizeOfVector);
bool isPrime(int number);

// Solution
int solution(vector<int> nums) {

    int pointer1 = 0;
    int pointer2 = 1;
    int pointer3 = 2;
    
    int temp;
    int primeCounter = 0;

    while(pointer1 <= nums.size() - 2){
        for(int i = 0; i < nums.size(); i++){
     
            if((pointer1 + pointer2) == pointer3){
                pointer2++;
                pointer3 = pointer1 + pointer2;
            }
            
            for(int n = 0; n < nums.size() - pointer3; n++){
                temp = (nums[pointer1] + nums[pointer2]) + nums[pointer3];
                if(isPrime(temp)){
                    primeCounter++;
                }
                pointer3++;
            }
            pointer2++;
        }
        pointer1++;
    }

    return primeCounter;
}

int caculateIteration(int sizeOfVector){
    
    int iteration = sizeOfVector - 2;
    int returnValue = 0;
    
    while(0 != iteration){
        for(int i = 1; i <= iteration; i++){
            returnValue += i;
        }
        iteration--;
    }
    
    return returnValue;
}

// 소수인지 확인하는 함수
bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
