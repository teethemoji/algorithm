#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = -1;
    
    int pointer1 = 0;
    int pointer2 = 1;
    int pointer3 = 2;

    int 몇번이나 반복해야 하나용(int sizeOfVector){
        int temp= sizeOfVector - 2;
    int counter = 0;
        while(temp != 0){
            for(int i = 1; i <= num; i++){
                counter += i;
            }
            num—;
        }
        return temp;
    }

    int iteration = 몇번이나반복해야하나용(vector.size());

    int temp;
    int primeCounter = 0;

    for(int i = 0; i < iteration; i++){
        // if pointer2 + 1 == pointer3
            then pointer2++ and pointer3 = pointer2+1
            for(int n = 0; n < vector.size() - pointer3){
                temp = vector[pointer1] + vector[pointer2];
                temp += vector[pointer3;
                if(isPrime(temp)){
                    primeCounter++;
                }
                pointer3++;
		}
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
    return answer;
}
