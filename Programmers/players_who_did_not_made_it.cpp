#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
//
//  UnfinishedPlayer.cpp
//  AlgorithmSolving
//
//  Created by 김보영 on 2022/01/05.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    string answer = "";
    bool playerFound = false;
//
//    if(!playerFound){
//        for(int i = 0; i < completion.size(); i++){
//            for(int n = 0; n < participant.size(); n++){
//                if(participant[n] == completion[i]){
//                    break;
//                } else if(n == completion.size() - 1 && participant[n] != completion[i]){
//                    answer = participant[n];
//                    playerFound = true;
//                    break;
//                }
//            }
//        }
//    }

    sort(participant.begin(), participant.end());
    sort(completion.begin(), participant.end());
    
    int i = 0;
    
    while(i < participant.size() && !playerFound){
        for(int i = 0; i < participant.size(); i++){
            if(participant[i] != completion[i]){
                answer = participant[i];
                playerFound = true;
                break;
            }
        }
    }
    
    int i = 0;
    
    while(i < participant.size() && !playerFound){
        for(int n = 0; n < completion.size(); n++){
            if(participant[i] == completion[n]){
                completion.erase(completion.begin() + n);
                break;
            } else if(n == completion.size() - 1 && participant[i] != completion[n]){
                
                answer = participant[n];
                playerFound = true;
                break;
            } else {
                
            }
            i++;
        }
        if(completion.empty()){
            answer = participant[participant.size()];
            playerFound = true;
        }
    }

    return answer;
    
}


}
