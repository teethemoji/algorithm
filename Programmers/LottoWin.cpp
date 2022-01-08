#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {

    vector<int> answer;
    
    // 일단...
    // lottos 벡터 속 0이 몇개인지 저장하는 int 변수
    int zeroCounter = 0;
    int matchCounter = 0;
    
    for(int i = 0; i < win_nums.size(); i++){
        if(lottos[i] == 0){
            zeroCounter++;
        }
        for(int n = 0; n < lottos.size(); n++){
            if(lottos[n] == win_nums.size()){
                matchCounter++;
                break;
            }
        }
    }
    
    switch(matchCounter){
        case 6:
            answer[0] = 1;
            answer[1] = 1;
            break;
            
        case 5:
            if(zeroCounter > 0){
                answer[0] = 1;
            } else{
                answer[0] = 2;
            }
            answer[1] = 2;
            break;
            
        case 4:
            if(zeroCounter > 0){
                answer[0] = 3 - zeroCounter;
            } else{
                answer[0] = 3;
            }
            answer[0] = 3;
            break;
        case 3:
            if(zeroCounter > 0){
                answer[0] = 4 - zeroCounter;
            } else{
                answer[0] = 4;
            }
            answer[0] = 4;
            break;
            
        case 2:
            if(zeroCounter > 0){
                answer[0] = 5 - zeroCounter;
            } else{
                answer[0] = 5;
            }
            answer[0] = 5;
            break;
        default:
            if(zeroCounter != 6){
                answer[0] = 6 - zeroCounter;
            } else {
                answer[0] = 1;
            }
            answer[1] = 6;
    }
    
    
    return answer;
}
