#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    
    // 실패율 == 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 도달한 플레이어 수
    // 전체 스테이지의 개수 N, 게임을 이용하는 사용자가 현재 멈춰있는 스테이지의 번호가 담긴 배열 stages가 매개변수로 주어질 때, 실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는 배열을 return 하도록 solution 함수를 완성하라.
    
    // 입출력 예시
    // N == 5
    // stages == [2, 1, 2, 6, 2, 4, 3, 3]
    // result == [3, 4, 2, 1, 5]
    
    // 그렇다면
    // 실패율 == 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / stages.size() - 이전 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수
    vector<int> unfinishedPlayers;
    
    for(int i = 0; i < stages.size(); i++){
        // 만약 i 스테이지에 멈춰있는 사람이 없으면 unfinishedPlayers[i] == 0;
        if(false){
            unfinishedPlayers.push_back(0);
        } else {
            
        }
    }
    
    
    vector<int> answer;
    return answer;
}

bool isTherePlayer(int stage, vector<int> stages){
    if(false){
        return false;
    } else {
        return true;
    }
}
