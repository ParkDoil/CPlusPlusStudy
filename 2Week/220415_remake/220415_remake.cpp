#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

struct player {
	int stamina;
	int seePoint;
	char inputMoveKey;
	int playerXPosition;
	int playerYPosition;
	int moveStack;
};

struct escape {
	int escapeXPosition;
	int escapeYPosition;
};

struct field { //0:평지, 1:벽, 2:숲, 3:늪지
	int map[50][50];
	int mapmemory[50][50];
	int wallCount;
	int forestCount;
	int swampCount;
};

struct control {
	bool isClear = false;
	int stageCount;
	int inputStage;
	int failCount;
	int fieldCheckNum;
};

int main()
{
	system("mode con: cols=200 lines=80");
	srand(time(NULL));
	int x = 0, y = 0; // for문을 위한 변수
	player person;
	escape escap;
	field map;
	control menu;

	person.stamina = 150;
	person.seePoint = 4;
	person.moveStack = 0;
	
	menu.stageCount = 1;
	menu.failCount = 0;
	
	cout << "플레이 하고싶은 스테이지의 수를 입력하세요 >> _";
	cin >> menu.inputStage;

	while (1) {
		for (x = 0; x < 50; x++) { //맵 전부 평지화
			for (y = 0; y < 50; y++) {
				map.map[x][y] = 0;
			}
		}

		x = rand() % 5 + 45;
		y = rand() % 5 + 45;
		map.map[x][y] = 9;
		escap.escapeXPosition = x;
		escap.escapeYPosition = y;

		person.playerXPosition = 0;
		person.playerYPosition = 0;
		map.map[person.playerXPosition][person.playerYPosition] = 7;

		map.wallCount = 0;
		map.forestCount = 0;
		map.swampCount = 0;
		while (map.wallCount != 100 && map.forestCount != 100 && map.swampCount != 100) { // 1사분면 지형처리
			x = rand() % 25;
			y = rand() % 25;
			menu.fieldCheckNum = rand() % 3 + 1;
			if (x != 0 && y != 0 && menu.fieldCheckNum == 1 && map.map[x][y] != 2 && map.map[x][y] != 3 && map.map[x][y] != 7) {
				map.map[x][y] = 1;
				map.wallCount++;
			}
			else if (x != 0 && y != 0 && menu.fieldCheckNum == 2 && map.map[x][y] != 1 && map.map[x][y] != 3 && map.map[x][y] != 7) {
				map.map[x][y] = 2;
				map.forestCount++;
			}
			else if (x != 0 && y != 0 && menu.fieldCheckNum == 3 && map.map[x][y] != 1 && map.map[x][y] != 2 && map.map[x][y] != 7) {
				map.map[x][y] = 3;
				map.swampCount++;
			}
		}

		map.wallCount = 0;
		map.forestCount = 0;
		map.swampCount = 0;
		while (map.wallCount != 100 && map.forestCount != 100 && map.swampCount != 100) { // 2사분면 지형처리
			x = rand() % 25;
			y = rand() % 25 + 25;
			menu.fieldCheckNum = rand() % 3 + 1;
			if (menu.fieldCheckNum == 1 && map.map[x][y] != 2 && map.map[x][y] != 3) {
				map.map[x][y] = 1;
				map.wallCount++;
			}
			else if (menu.fieldCheckNum == 2 && map.map[x][y] != 1 && map.map[x][y] != 3) {
				map.map[x][y] = 2;
				map.forestCount++;
			}
			else if (menu.fieldCheckNum == 3 && map.map[x][y] != 1 && map.map[x][y] != 2) {
				map.map[x][y] = 3;
				map.swampCount++;
			}
		}

		map.wallCount = 0;
		map.forestCount = 0;
		map.swampCount = 0;
		while (map.wallCount != 100 && map.forestCount != 100 && map.swampCount != 100) { // 3사분면 지형처리
			x = rand() % 25 + 25;
			y = rand() % 25;
			menu.fieldCheckNum = rand() % 3 + 1;
			if (menu.fieldCheckNum == 1 && map.map[x][y] != 2 && map.map[x][y] != 3) {
				map.map[x][y] = 1;
				map.wallCount++;
			}
			else if (menu.fieldCheckNum == 2 && map.map[x][y] != 1 && map.map[x][y] != 3) {
				map.map[x][y] = 2;
				map.forestCount++;
			}
			else if (menu.fieldCheckNum == 3 && map.map[x][y] != 1 && map.map[x][y] != 2) {
				map.map[x][y] = 3;
				map.swampCount++;
			}
		}

		map.wallCount = 0;
		map.forestCount = 0;
		map.swampCount = 0;
		while (map.wallCount != 100 && map.forestCount != 100 && map.swampCount != 100) { // 4사분면 지형처리
			x = rand() % 25 + 25;
			y = rand() % 25 + 25;
			menu.fieldCheckNum = rand() % 3 + 1;
			if (menu.fieldCheckNum == 1 && map.map[x][y] != 2 && map.map[x][y] != 3 && (x != escap.escapeXPosition && y != escap.escapeYPosition) ) {
				map.map[x][y] = 1;
				map.wallCount++;
			}
			else if (menu.fieldCheckNum == 2 && map.map[x][y] != 1 && map.map[x][y] != 3 && (x != escap.escapeXPosition && y != escap.escapeYPosition) ) {
				map.map[x][y] = 2;
				map.forestCount++;
			}
			else if (menu.fieldCheckNum == 3 && map.map[x][y] != 1 && map.map[x][y] != 2 && (x != escap.escapeXPosition && y != escap.escapeYPosition) ) {
				map.map[x][y] = 3;
				map.swampCount++;
			}
		}
		for (x = 0; x < 50; x++) {
			for (y = 0; y < 50; y++) {
				map.mapmemory[x][y] = map.map[x][y];
			}
		}
		while (1) {
			for (x = 0; x < 50; x++) {
				for (y = 0; y < 50; y++) {
					map.map[x][y] = map.mapmemory[x][y];
				}
			}
			map.map[0][0] = 0;
			map.map[person.playerXPosition][person.playerYPosition] = 7;
			if (person.moveStack - 40 >= 0) {
				person.moveStack -= 40;
				person.seePoint--;
			}
			system("cls");
			cout << "\t┌───────────────────────┐" << endl;
			cout << "\t│    남은스태미너 : " << person.stamina << "\t│" << endl;
			cout << "\t└───────────────────────┘" << endl;
			cout << "\t     << " << menu.stageCount << " 스테이지 >>" << endl;
			cout << "\t   << 남은 기회 - " << 3 - menu.failCount << " >>" << endl;
			cout << "\t << 남은 스테이지 - " << menu.inputStage - menu.stageCount << " >>" << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			for (x = 0; x < 50; x++) {
				cout << "■";
				for (y = 0; y < 50; y++) {
					if (map.map[x][y] == 0) {
						cout << "  ";
					}
					else if (map.map[x][y] == 1) {
						if (person.playerXPosition - person.seePoint <= x && person.playerXPosition + person.seePoint >= x && person.playerYPosition - person.seePoint <= y && person.playerYPosition + person.seePoint >= y) {
							cout << "■";
						}
						else {
							cout << "  ";
						}
					}
					else if (map.map[x][y] == 2) {
						if (person.playerXPosition - person.seePoint <= x && person.playerXPosition + person.seePoint >= x && person.playerYPosition - person.seePoint <= y && person.playerYPosition + person.seePoint >= y) {
							cout << "♠";
						}
						else {
							cout << "  ";
						}
					}
					else if (map.map[x][y] == 3) {
						if (person.playerXPosition - person.seePoint <= x && person.playerXPosition + person.seePoint >= x && person.playerYPosition - person.seePoint <= y && person.playerYPosition + person.seePoint >= y) {
							cout << "▩";
						}
						else {
							cout << "  ";
						}
					}
					else if (map.map[x][y] == 7) {
						cout << "●";
					}
					else if (map.map[x][y] == 9) {
						cout << "Ｅ";
					}
				}
				cout << "■" << endl;
			}
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << " ■ : 벽 /   : 길(이동시 스태미너 1소모)/ ♠ : 숲(이동시 스태미너 2소모)" << endl;
			cout << " ▩ : 늪(이동시 스태미너 3소모) / Ｅ : 탈출구" << endl;

			cout << "이동 => w : 위 / s : 아래 / a : 왼쪽 / b : 오른쪽" << endl;

			person.inputMoveKey = _getch();
			if (person.inputMoveKey >= 65 && person.inputMoveKey <= 90) { //입력한게 대문자였을경우 소문자로 변환
				person.inputMoveKey += 32;
			}
			switch (person.inputMoveKey) {
			case 'w': //위쪽 이동
				if (person.playerXPosition != 0 && map.map[person.playerXPosition - 1][person.playerYPosition] != 1) { //배열에서[0][]일경우 위쪽으로 이동할 수 없어야함
					map.map[person.playerXPosition][person.playerYPosition] = 0;
					person.playerXPosition--;
					if (map.map[person.playerXPosition][person.playerYPosition] == 2) {
						person.stamina -= 2;
						person.moveStack += 2;
					}
					else if (map.map[person.playerXPosition][person.playerYPosition] == 3) {
						person.stamina -= 3;
						person.moveStack += 3;
					}
					else
					{
						person.stamina--;
						person.moveStack++;
					}
				}
				break;
			case 'a': //왼쪽 이동
				if (person.playerYPosition != 0 && map.map[person.playerXPosition][person.playerYPosition - 1] != 1) { //배열에서 [][0]일경우 왼쪽으로 이동 할 수 없어야함
					if (map.map[person.playerXPosition][person.playerYPosition - 1] == 5) {
					}
					map.map[person.playerXPosition][person.playerYPosition] = 0;
					person.playerYPosition--;
					if (map.map[person.playerXPosition][person.playerYPosition] == 2) {
						person.stamina -= 2;
						person.moveStack += 2;
					}
					else if (map.map[person.playerXPosition][person.playerYPosition] == 3) {
						person.stamina -= 3;
						person.moveStack += 3;
					}
					else
					{
						person.stamina--;
						person.moveStack++;
					}
				}
				break;
			case 's': //아래쪽 이동
				if (person.playerXPosition != 49 && map.map[person.playerXPosition + 1][person.playerYPosition] != 1) { //배열에서 [20][]일경우 아래쪽으로 이동 할 수 없어야함
					if (map.map[person.playerXPosition + 1][person.playerYPosition] == 5) {
					}
					map.map[person.playerXPosition][person.playerYPosition] = 0;
					person.playerXPosition++;
					if (map.map[person.playerXPosition][person.playerYPosition] == 2) {
						person.stamina -= 2;
						person.moveStack += 2;
					}
					else if (map.map[person.playerXPosition][person.playerYPosition] == 3) {
						person.stamina -= 3;
						person.moveStack += 3;
					}
					else
					{
						person.stamina--;
						person.moveStack++;
					}
				}
				break;
			case 'd': //오른쪽 이동
				if (person.playerYPosition != 49 && map.map[person.playerXPosition][person.playerYPosition + 1] != 1) { //배열에서 [][20]일경우 오른쪽으로 이동 할 수 없어야함
					if (map.map[person.playerXPosition][person.playerYPosition + 1] == 5) {
					}
					map.map[person.playerXPosition][person.playerYPosition] = 0;
					person.playerYPosition++;
					if (map.map[person.playerXPosition][person.playerYPosition] == 2) {
						person.stamina -= 2;
						person.moveStack += 2;
					}
					else if (map.map[person.playerXPosition][person.playerYPosition] == 3) {
						person.stamina -= 3;
						person.moveStack += 3;
					}
					else
					{
						person.stamina--;
						person.moveStack++;
					}
				}
				break;
			}
			if (person.playerXPosition == escap.escapeXPosition && person.playerYPosition == escap.escapeYPosition) {
				person.stamina = 200;
				person.stamina = 150;
				person.seePoint = 4;
				person.moveStack = 0;
				menu.stageCount++;
				break;
			}
			else if (person.stamina <= 0) {
				system("cls");
				cout << endl << endl;
				cout << "\t\t┌───────────────────────────────────────────┐" << endl;
				cout << "\t\t│   탈출에 실패했습니다. 남은 기회 확인 중  │" << endl;
				cout << "\t\t└───────────────────────────────────────────┘" << endl;
				person.stamina = 200;
				menu.failCount++;
				person.stamina = 150;
				person.seePoint = 4;
				person.moveStack = 0;
				Sleep(2000);
				break;
			}
		}
		if (menu.stageCount > menu.inputStage) {
			menu.isClear = true;
			break;
		}
		else if (menu.failCount > 3) {
			menu.isClear = false;
			break;
		}
	}
	if (menu.isClear) {
		system("cls");
		cout << endl;
		cout << "  ■    ■    ■■    ■    ■    ■    ■■■    ■■■■" << endl;
		cout << "   ■  ■   ■    ■  ■    ■   ■     ■    ■  ■" << endl;
		cout << "     ■     ■    ■  ■    ■          ■■■    ■■■■" << endl;
		cout << "     ■     ■    ■  ■    ■          ■  ■    ■" << endl;
		cout << "     ■       ■■      ■■            ■    ■  ■■■■" << endl;
		cout << endl;
		cout << "  ■■■■    ■■■    ■■■    ■■    ■■■    ■■■■" << endl;
		cout << "  ■        ■        ■        ■    ■  ■    ■  ■" << endl;
		cout << "  ■■■■  ■■■■  ■        ■■■■  ■■■■  ■■■■" << endl;
		cout << "  ■              ■  ■        ■    ■  ■        ■" << endl;
		cout << "  ■■■■  ■■■      ■■■  ■    ■  ■        ■■■■" << endl;
		cout << endl;
		cout << "    ■■■  ■        ■■■■    ■■    ■■■    ■  ■" << endl;
		cout << "  ■        ■        ■        ■    ■  ■    ■  ■  ■" << endl;
		cout << "  ■        ■        ■■■■  ■■■■  ■■■    ■  ■" << endl;
		cout << "  ■        ■        ■        ■    ■  ■  ■          " << endl;
		cout << "    ■■■  ■■■■  ■■■■  ■    ■  ■    ■  ■  ■" << endl << endl;
		cout << "\t\t┌────────────────────────────┐" << endl;
		cout << "\t\t│     탈출에 성공했습니다.   │" << endl;
		cout << "\t\t└────────────────────────────┘" << endl;
	}
	else {
		system("cls");
		cout << endl;
		cout << "  ■    ■    ■■    ■    ■    ■    ■■■    ■■■■" << endl;
		cout << "   ■  ■   ■    ■  ■    ■   ■     ■    ■  ■" << endl;
		cout << "     ■     ■    ■  ■    ■          ■■■    ■■■■" << endl;
		cout << "     ■     ■    ■  ■    ■          ■  ■    ■" << endl;
		cout << "     ■       ■■      ■■            ■    ■  ■■■■" << endl;
		cout << endl;
		cout << "  ■    ■     ■■    ■■■■■" << endl;
		cout << "  ■■  ■   ■    ■      ■" << endl;
		cout << "  ■ ■ ■   ■    ■      ■" << endl;
		cout << "  ■  ■■   ■    ■      ■" << endl;
		cout << "  ■    ■     ■■        ■" << endl;
		cout << endl;
		cout << "  ■■■■    ■■■    ■■■    ■■    ■■■    ■■■■" << endl;
		cout << "  ■        ■        ■        ■    ■  ■    ■  ■" << endl;
		cout << "  ■■■■  ■■■■  ■        ■■■■  ■■■■  ■■■■" << endl;
		cout << "  ■              ■  ■        ■    ■  ■        ■" << endl;
		cout << "  ■■■■  ■■■      ■■■  ■    ■  ■        ■■■■" << endl;
		cout << "\t\t┌────────────────────────────┐" << endl;
		cout << "\t\t│     탈출에 실패했습니다.   │" << endl;
		cout << "\t\t└────────────────────────────┘" << endl;
	}
}
