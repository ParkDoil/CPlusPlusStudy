/*
	boolean타입
	bool is_allive = false; // bool 타입 변수는 true, false만 값으로 가진다.

	배열 (자료구조)
	같은 데이터타입의 여러 변수를 하나의 묶음으로 나타낸 것.

	배열의 데이터타입에 대한 동이한 크기로 메모리상에 연속된 공간이 할당된다.
	int nums[크기(정수)]; => 크기(정수)만큼의 공간을 보유한 정수형 배열 생성
	배열명이 메모리 시작 주소이다. -> cout << nums; => nums배열의 메모리 주소 출력
	배열 num[10]은 num[0] ~ nums[9] 로 이루어져 있다.

	2차원배열 및 다차원배열
	배열이 (개념적으로) 2중으로 혹은 다중으로 구성되어 있는 것.

	1차원 배열 : int student_nums[5];	// 5개의 int
		-> 5명의 학생이 있다.
	2차원 배열 : int student_nums[3][5];	// 15개의 int
		-> 3개 반에 각각 5명의 학생이 있다.
	3차원 배열 : int student_nums[4][3][5];	// 60개의 int
		-> 4개의 학년, 각각 3개의 반이 존재하고 각 반에 5명 학생이 있다.

	(엔터 없이) 문자 하나를 입력받는 방법
	_getch();

	형변환 : 데이터타입을 변환한다.
	묵시적 형변환
	명시적 형변환
*/

#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
#pragma region 백준9번
	/*
	cout << "백준 별찍기 시리즈 9번 문제" << endl;
	int n1;
	cin >> n1;
	int i9, empty9, star9;
	for (i9 = 0; i9 < n1; i9++) { //단수
		for (empty9 = 0; empty9 < i9; empty9++) { //공백
			cout << " ";
		}
		for (star9 = 2 * n1 - 1; star9 > i9 * 2; star9--) { // 별
			cout << "*";
		}
		cout << endl;
	}
	for (i9 = 1; i9 < n1; i9++) { //단수
		for (empty9 = n1 - 1; empty9 > i9; empty9--) { //공백
			cout << " ";
		}
		for (star9 = 0; star9 < i9 * 2 + 1; star9++) { // 별
			cout << "*";
		}
		cout << endl;
	}
	*/
	
#pragma endregion
#pragma region 백준13번
	/*
	int n13;
	cin >> n13;
	int star13, i13;
	for (i13 = 0; i13 < n13; i13++) {
		for (star13 = 0; star13 < i13 + 1; star13++) {
			cout << "*";
		}
		cout << endl;
	}
	for (i13 = 1; i13 < n13; i13++) {
		for (star13 = n13-1; star13 > i13-1; star13--) {
			cout << "*";
		}
		cout << endl;
	}
	*/
	
#pragma endregion
#pragma region 백분15번
	/*
	cout << "백준 별찍기 시리즈 15번 문제" << endl;
	int n2;
	cin >> n2;
	int i15, out_empty, in_empty;
	for (i15 = 0; i15 < n2; i15++) { //단수
		for (out_empty = n2 - 1; out_empty > i15; out_empty--) { //외부공백처리
			cout << " ";
		}
		cout << "*"; //외부공백처리 후 별처리
		for (in_empty = 0; in_empty < i15 * 2 - 1; in_empty++) { //내부공백처리
			cout << " ";
		}
		if (in_empty >= 1) {
			cout << "*"; //외부공백 for문 끝나고 별처리
		}
		cout << endl;
	}
	*/
	
#pragma endregion
#pragma region 백준16번
	/*
	cout << "백준 별찍기 시리즈 16번 문제" << endl;
	int n3;
	cin >> n3;
	for (int i16 = 0; i16 < n3; i16++) { //칸수
		for (int empty16 = n3 - 1; empty16 > i16; empty16--) { //공백
			cout << " ";
		}
		for (int star16 = 0; star16 < i16 + 1; star16++) { //별
			cout << "* ";
		}
		cout << endl;
	}
	*/

#pragma endregion
	/*int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12 };

	for (int i = 0; i < 10; i++) {
		cout << &(nums[i]) << endl;
	}*/
#pragma region 실습1
	/*
		실습1. string형 배열변수 (크기5)를 선언하고.
		반복문을 통해 학생의 이름을 입력받는다.
		입력을 다 받고 나서 1~5사이의 값을 입력하면 해당 학생의 이름이 출력된다.
	*/
	/*
	string student_name[5];
	int input_num;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 학생의 이름을 입력하세요 : _ ";
		cin >> student_name[i];
	}
	cout << "1 ~ 5사이의 번호를 입력하세요 : _ ";
	cin >> input_num;
	cout << input_num << "번째 학생의 이름은 " << student_name[input_num - 1] << " 입니다." << endl;
	*/
#pragma endregion
	/*
	int student_nums[3][5] = { {1, 2, 3, 4, 5}, 
							   {6, 7, 8, 9, 10},
							   {11, 12, 13, 14, 15} };

	//cout << student_nums[0][5] << endl; //[1][0]
	//cout << student_nums[0][6] << endl; //[1][1]
	//배열은 연속된 메모리주소이기 때문에 접근은 가능

	//순서대로 출력하는 코드
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			cout << student_nums[y][x] << " ";
		}
		cout << endl;
	}
	*/
#pragma region 실습2
	/*
		실습.
		구구단의 결과를 저장하는 2차원 배열을 하나 선언 하고,
		이중 for문을 이용해서 배열 변수에 구구단의 결과 값을 저장하고
		
		두 수를 입력 받아서 적합한 결과 값을 출력해보자.
	int gugu_result[8][9];
	int input_dan_num;
	int input_su_num;
	for (int y = 0; y < 8; y++) { // 단수
		for (int x = 0; x < 9; x++) { // 곱해지는 수
			gugu_result[y][x] = (y + 2) * (x + 1);
		}
	}
	cout << "<결과 저장 완료>" << endl;
	
	cout << "몇단을 볼까요? : _ ";
	cin >> input_dan_num;
	
	cout << "몇을 곱할까요? : _ ";
	cin >> input_su_num;

	cout << input_dan_num << " * " << input_su_num <<
			" = " << gugu_result[input_dan_num - 2][input_su_num - 1] << endl;
	*/

#pragma endregion

	//int input_key = _getch();
	/*char input_key_char = _getch();
	cout << (int)input_key_char << endl;*/

#pragma region 실습3
	/*
		실습.
		A ~ Z 키 중에 하나를 정답으로 설정한다.
		유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
		유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
		틀리면 남은 기회를 보여주고 5번 틀리면 정답을 알려주고 게임오버

		+틀릴 때마다 정답 알파벳이 입력된 알파벡 앞에 있는지, 뒤에 있는지 힌트를 준다.

		+입력된 값이 대소문자 구분 없이 처리될 수 있도록 수정해보자.
	srand(time(NULL));
	int rand_int_answer; //랜덤으로 대문자 알파벳 아스키코드 생성
	char char_capital_answer; //랜덤으로 받은 아스키코드를 대문자 알파벳 으로 변환
	char char_small_answer; // 정답 소문자 알파벳
	char input_char; //입력할 알파벳
	int chance = 5; //남은 기회
	rand_int_answer = rand() % 26 + 65;
	char_capital_answer = (char)rand_int_answer;
	char_small_answer = (char)(rand_int_answer + 32);
	cout << "정답 알파벳 맞추기 게임~!" << endl << endl;
	while (1) {
		cout << "남은 기회 : " << chance << endl;
		cout << "대문자 알파벳을 입력하세요." << endl << endl;
		input_char = _getch();
		if (input_char >= 97 && input_char <= 122) {
			input_char -= 32;
		}
		if (char_capital_answer == input_char) {
			cout << "승리" << endl;
			break;
		}
		else {
			chance--;
			if (chance == 0) {
				cout << endl << "기회소진" << endl;
				cout << "정답은 " << char_capital_answer << " 또는 " << char_small_answer << "이었습니다." << endl;
				break;
			}
			else {
				(char_capital_answer > input_char) ? cout << "정답은 입력한 알파벳 보다 뒤에 있습니다." << endl : cout << "정답은 입력한 알파벳 보다 앞에 있습니다." << endl;
			}
		}
	}
	*/
	
#pragma endregion

#pragma region 실습4
	/*
		실습.
		10*10 크기의 맵을 구상.
		플레이어(시작지점(0,0))가 존재
		탈출지점이 존재한다.
		WASD 키입력을 통해 플레이어를 이동시킨다.
		탈출지점은 (0,0)을 제외하고 랜덤 설정
		O(플레이어)가 E(탈출구)에 도달하면 "탈출에 성공헀습니다." 프로그램 종료
		system("cls"); // 화면 지우는 명령어
	*/
	srand(time(NULL));
	int x = 0, y = 0; // for문을 위한 변수
	/*int map[10][10] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						{0, 1, 1, 0, 1, 0, 1, 1, 1, 0},
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						{0, 1, 0, 1, 1, 0, 1, 1, 1, 0},
						{0, 1, 0, 0, 1, 0, 0, 1, 0, 0},
						{0, 1, 1, 0, 1, 1, 0, 1, 0, 1},
						{0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
						{1, 0, 0, 0, 1, 0, 0, 1, 0, 1},
						{1, 1, 0, 1, 1, 1, 0, 0, 0, 0},
						{0, 0, 0, 0, 0, 0, 0, 1, 0, 1} }; // [10][10] 맵
						*/
	int map[10][10] = { 0, };
	int player_xposition = 0; // 플레이어 x좌표
	int player_yposition = 0; // 플레이어 y좌표
	int escape_xposition; // 탈출구 x좌표
	int escape_yposition; // 탈출구 y좌표
	char input_move_key = 0;
	
	//플레이어 좌표 설정
	map[player_xposition][player_yposition] = 9;
	
	//탈출구 좌표 랜덤으로 입력 받기
	escape_xposition = rand() % 10;
	escape_yposition = rand() % 10; 
	//탈출구 좌표가 초기 플레이어 좌표와 일치할때 재지정
	while (escape_xposition == 0 && escape_yposition == 0) {
		escape_xposition = rand() % 10;
		escape_yposition = rand() % 10;
	}
	//탈출구 좌표 설정
	map[escape_xposition][escape_yposition] = 8;

	while (1) {
		system("cls");
		//맵 출력하는 for문
		for (x = 0; x < 10; x++) {
			for (y = 0; y < 10; y++) {
				if (map[x][y] == 0) {
					cout << "□";
				}
				else if (map[x][y] == 1) {
					cout << "■";
				}
				else if (map[x][y] == 8) {
					cout << "Ε";
				}
				else if (map[x][y] == 9) {
					cout << "●";
				}
			}
			cout << endl;
		}
		//탈출구 좌표랑 플레이어 좌표가 일치할때 프로그램 종료
		if (escape_xposition == player_xposition && escape_yposition == player_yposition) {
			cout << "탈출에 성공했습니다." << endl;
			break;
		}
		//키 입력 받아서 swtich문으로 이동
		input_move_key = _getch();
		if (input_move_key >= 65 && input_move_key <= 90) { //입력한게 대문자였을경우 소문자로 변환
			input_move_key += 32;
		}
		switch (input_move_key) {
		case 'w': //위쪽 이동
			if (player_xposition != 0 && map[player_xposition - 1][player_yposition] != 1) { //배열에서[0][]일경우 위쪽으로 이동할 수 없어야함
				map[player_xposition][player_yposition] = 0;
				player_xposition--;
			}
			break;
		case 'a': //왼쪽 이동
			if (player_yposition != 0 && map[player_xposition][player_yposition-1] != 1) { //배열에서 [][0]일경우 왼쪽으로 이동 할 수 없어야함
				map[player_xposition][player_yposition] = 0;
				player_yposition--;
			}
			break;
		case 's': //아래쪽 이동
			if (player_xposition != 9 && map[player_xposition + 1][player_yposition] != 1) { //배열에서 [10][]일경우 아래쪽으로 이동 할 수 없어야함
				map[player_xposition][player_yposition] = 0;
				player_xposition++;
			}
			break;
		case 'd': //오른쪽 이동
			if (player_yposition != 9 && map[player_xposition][player_yposition + 1] != 1) { //배열에서 [][10]일경우 오른쪽으로 이동 할 수 없어야함
				map[player_xposition][player_yposition] = 0;
				player_yposition++;
			}
			break;
		}
		map[player_xposition][player_yposition] = 9;
	}

#pragma endregion
}
