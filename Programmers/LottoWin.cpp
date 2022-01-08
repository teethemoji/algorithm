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
            if(lottos[n] == win_nums[i]){
                matchCounter++;
                break;
            }
        }
    }

    switch(matchCounter){
        case 6:
            answer.push_back(1);
            answer.push_back(1);
            break;

        case 5:
            if(zeroCounter > 0){
                answer.push_back(1);
            } else{
                answer.push_back(2);
            }
            answer.push_back(2);
            break;

        case 4:
            if(zeroCounter > 0){
                answer.push_back(3 - zeroCounter);
            } else{
                answer.push_back(3);
            }
            answer.push_back(3);
            break;
        case 3:
            if(zeroCounter > 0){
                answer.push_back(4 - zeroCounter);
            } else{
                answer.push_back(4);
            }
            answer.push_back(4);
            break;

        case 2:
            if(zeroCounter > 0){
                answer.push_back(5 - zeroCounter);
            } else{
                answer.push_back(5);
            }
            answer.push_back(5);
            break;
        default:
            if(zeroCounter != 6){
                answer.push_back(6 - zeroCounter);
            } else {
                answer.push_back(1);
            }
            answer.push_back(6);
    }

    return answer;
}
