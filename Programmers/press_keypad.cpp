#include <string>
#include <vector>

using namespace std;

int keypad[12][2] = {[0,0], [1,0], [2,0],
					 [0,1], [1,1], [2,1],
					 [0,2], [1,2], [2,2],
					 [0,3], [1,3], [2,3]};
// keypad[10] == *
// keypad[12] == #

int lPos[2] = keypad[10];
int rPos[2] = keypad[12];

int leftDistance;
int rightDistance;

string solution(vector<int> numbers, string hand) {
	string answer = "";

	for (int i = 0; i < numbers.length; i++) {
		switch (numbers[i]) {
		case 1, 4, 7:
			answer += "L";
			switchHandPos(0, numbers[i]);
			break;
		case 3, 6, 9:
			answer += "R";
			switchHandPos(1, numbers[i]);
			break;
		default:
			answer += returnHand(numbers[i], hand);
			break;
		}
	}
	return answer;
}



string returnHand(int num, string hand) {

	// 현재 손과 눌러야할 번호의 거리를 구하는 함수
	measureDistance(num);

	return chooseHand(string hand);
}

void measureDistance(int num) {
	// 거리를 재는 함수

	// 키패드의 좌표에서 손의 좌표를 빼고 이를 절대값으로 전환

	// 왼손의 거리
	leftDistance = abs(keypad[num][0] - lPos[0]) + abs(keypad[num][1] - lPos[1]);

	// 오른손의 거리
	rightDistance = abs(keypad[num][0] - rPos[0]) + abs(keypad[num][1] - rPos[1]);

	return;
}

int abs(int num) {
	// 절대값을 구하는 함수
	if (num < 0) {
		return num * -1;
	}
	else {
		return num;
	}
}

string chooseHand(string hand) {
	if (leftDistance == rightDistance) {
		if (hand == "left") {
			return "L";
		}
		else {
			return "R";
		}
	}
	else if (leftDistance > rightDistance) {
		return "R";
	}
	else {
		"L";
	}
}

void switchHandPos(int hand, int keypadNum) {
	// 0 == left
	// 1 == right
	if (hand) {
		rPos = keypad[keypadNum];
	}
	else {
		lPos = keypad[keypadNum];
	}
}