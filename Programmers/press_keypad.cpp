#include <string>
#include <vector>

using namespace std;

int keypad[12][2] = {[0,0], [1,0], [2,0],
                     [0,1], [1,1], [2,1],
                     [0,2], [1,2], [2,2],
                     [0,3], [1,3], [2,3]};
// keypad[10] == *
// keypad[12] == #

int lPos [2] = keypad[10];
int rPos [2] = keypad[12];

string solution(vector<int> numbers, string hand) {
    string answer = "";
	
	for(int i = 0; i < numbers.length; i++){
		switch(numbers[i]){
			case 1, 4, 7:
				answer += "L";
				switchHandPos(0, numbers[i]);
				break;
			case 3, 6, 9:
				answer += "R";
				switchHandPos(1, numbers[i]);
				break;
			default:
				answer += returnHand(numbers[i], numbers[i-1], hand);
				break;
			}
	}
    return answer;
}



string returnHand(int curNum, string hand){
    // curNum은 지금 눌러야 하는 숫자
    // prevNum은 직전에 눌렀던 숫자
    // if prevNum == null then LPos = keypad[10] && RPos = keypad[12]

    
    // 현재의 손 위치 좌표를 구하는 함수
    getHandPos(prevNum);
    
    // 현재 손과 눌러야할 번호의 거리를 구하는 함수
    measureDistance(curNum);
    
    return chooseHand(string hand);
}

void measureDistance(int num){
    // 거리를 재는 함수
    // 왼손의 거리
    // 키패드의 좌표에서 손의 좌표를 빼고 이를 절대값으로 전환
    int leftDistance = abs(keypad[num][0] - lPos[0]) + abs(keypad[num][1] - lPos[1]);
    
    // 오른손의 거리
    int rightDistance = abs(keypad[num][0] - rPos[0]) + abs(keypad[num][1] - rPos[1]);
	
	return;
}
                           
void getHandPos(int num){
	// 만약 여태 눌린 키패드 정보가 없는 경우라면(처음 키패드를 누르는 상황이라면)
  if(num == null){
	  // 그대로 두기
  	} else {
	  // 그러니까 
      lPos = keypad[num];
      rPos = keypad[num];
  	}
	return;
}

int abs(int num){
    if(num < 0){
        return num * -1;
    } else {
		return num;
	}
}

string chooseHand(string hand){
	if(lPos == rPos){
		if (hand == "left"){
			return "L";
		} else {
			return "R";
		}
	} else if (lPos > rPos) {
		return "R"
	} else {
		"L"
	}
}

void switchHandPos(int hand, int keypadNum){
	// 0 == left
	// 1 == right
	if(hand){
		rPos = keypad[keypadNum];
	} else {
		lPos = keypad[keypadNum];
	}
}