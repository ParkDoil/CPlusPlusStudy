// C++ 문법

// 주석 : 실행(컴파일)되지 않고 설명만을 위해서 사용되는 문법

/*
	1. 문단 자체를
	2. 주석처리 할 때
	3. 사용하는 주석
*/

/*
	C++ 문법을 사용할 때 주의해야 할 점
	1. 대/소문자를 구분해야한다.
	main / Main / mAin / maIN 전부 다 다르다.

	2. 띄어쓰기를 통해 요소를 구분한다.

	3. 실행문의 마무리는 세미콜론(;)으로 한다.

	[변수]
	데이터타입 변수명;
	데이터타입 변수명 = 10;
	데이터타입 변수명 = 'ㅁ';
	데이터타입 변수명 = "Hello";

	데이터타입
	1. 정수형 (0, 1, 2 ..., -1, -2 ...)
		int
		short
		long
		long long
	2. 실수형
		float
		double
		long double
	3. 문자형
		char
	4. 문자열
		string

	변수 이름 짓기 규칙(표기법)
	1. 헝가리안 표기법
	 - 데이터 타입 약자를 접두어로 붙인다.
	 int => int nMaxCount = 10;
	2. 카멜 표기법
	 - 두개 이상의 단어로 이루어진 변수명을 두번째 단어 이후 첫번째글자는 대문자로 표기
	 int maxCount = 10;
	3. 파스칼 표기법
	 - 첫번째 단어 첫번째 글자부터 대문자로 표기
	 int MaxCount = 10;

	int nn = 10;
	int cmprs =20; 처럼 약자를 사용하여 표기하는건 안좋은 버릇임

	int token_max_count = 10; <- 스네이크 표기법

	1. 대소문자를 구분한다.
	2. 알파벳, 숫자, _(언더바)만 사용한다.
	 2-1. 숫자는 가장 앞에 올 수 없다.

	변수의 4가지 속성
	1) 이름 : input_key		2) 크기 : 4Byte		3) 값 : 10		4) 메모리주소 : 0000002B818FF674 (cout << &input_key << endl;를 출력했을때 나오는 값)

	연산자 : 데이터를 가공(연산)하는 모든 명령에 필요한 것들
	1) 어떤 종류의 연산자인가
	2) 우선순위 : 어떤 순서로 연산이 되는가
	3) 결합순서 : 좌측부터 연산하는가, 우측부터 연산하는가

	1. 산술연산자(사칙연산) : 좌측부터 연산된다
	+ : 더하기
	- : 빼기
	* : 곱하기
	/ : 나누기		11 / 3 -> 3
	% : 나머지		11 % 3 -> 2
	우선순위 : *, /, % > +, -

	2. 대입 연산자 : 우측부터 연산된다
	= : 오른쪽 변수의 값을 왼쪽 변수에 대입
	left_num = right_num -> right_num 값을 left_num 값에 대입

	3. 복합대입연산자
	+= : 오른쪽 값에 왼쪽 값을 더한 값을 왼쪽 변수에 대입
	a += b; -> a = a + b;
	-= : 오른쪽 값에 왼쪽 값을 뺀 값을 왼쪽 변수에 대입
	a -= b; -> a = a - b;
	*= : 오른쪽 값에 왼쪽 값을 곱한 값을 왼쪽 변수에 대입
	a *= b; -> a = a * b;
	/= : 오른쪽 값에 왼쪽 값을 나눈 값을 왼쪽 변수에 대입
	a /= b; -> a = a / b; (b == 0, 런타임에러 발생)
	%= : 오른쪽 값에 왼쪽 값을 나눈 나머지 값을 왼쪽 변수에 대입
	a %= b; -> a = a % b; (데이터타입이 정수형이 아닐때 에러 발생)

	4. 증감 연산자 : 변수 앞 또는 뒤에 붙어 사용하며 해당 변수의 값을 1씩 증가시키거나 감소시킬때 사용
	int variable = 10;
	++ : 1씩 증가
	cout << ++variable << endl; 실행 -> 출력값 : 11, 메모리 : 11
	cout << variable++ << endl; 실행 -> 출력값 : 11, 메모리 : 12
	-- : 1씩 감소
	cout << --variable << endl; 실행 -> 출력값 : 11, 메모리 : 11
	cout << variable-- << endl; 실행 -> 출력값 : 11, 메모리 : 10

	5. 관계 연산자 : 두 항의 값을 비교한 결과가 참(1, true) 또는 거짓(0, false)으로 반환되는 연산자
	a < b : a가 b보다 작으면 1, 크거나 같으면 0 반환
	a > b : a가 b보다 크면 1, 작거나 같으면 0 반환
	a <= b : a가 b보다 작거나 같으면 1, 크면 0 반환
	a >= b : a가 b보다 크거나 같으면 1, 작으면 0 반환
	a == b : a와 b가 같으면 1, 다르면 0 반환
	a != b : a와 b가 다르면 1, 같으면 0 반환

	6. 논리 연산자 : 왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서 두 값을 비교해서 참과 거짓을 반환하는 연산자
	&& : 논리곱(AND)
	a && b : a의 결과 값이 참이고, b의 결과값이 참이면 1을 반환, 그 외에는 0을 반환
	|| : 논리합(OR)
	a || b : a의 결과 값이 참이거나, b의 결과값이 참이면 1을 반환, 둘다 거짓일때만 0을 반환
	! : 논리부정(NOT)
	!a : a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환

	7. 삼항연산자
	a ? b : c;
	a의 결과 값이 참이면 b실행문 동작, 거짓이면 c실행문이 동작

	난수 (랜덤값)
	rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환된다
	함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해진다
	기본적으로 seed : 1로 세팅되어 있다.
	srand(time(NULL)); -> 시드값을 실행할때마다 다시 세팅
	*/

	/*
		실습1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자
		(3, 7 포함)

		실습2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자

		실습3. 프로그램을 실행하면 내부적으로 1~9사이의 숫자가 정답으로 정해지고, 유저가 1 ~ 10 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력
	*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	//1주차 복습
	int inputKey;
	float testFloat = 5.3f;
	float testFloat2 = 5.3;
	char testCharacter = 'a';
	string testString = "Hello";

	cout << "Hello World!\n";
	cin >> inputKey;

	// 증감 연산자
	int variable = 10;
	cout << variable++ << endl;
	cout << ++variable << endl;
	cout << variable-- << endl;
	cout << --variable << endl;

	// 관계 연산자
	cout << (10 > 5) << endl; // 1
	cout << (10 < 5) << endl; // 0
	cout << (10 >= 5) << endl; // 1
	cout << (10 <= 5) << endl; // 0
	cout << (10 == 5) << endl; // 0
	cout << (10 != 5) << endl; // 1

	// 논리 연산자
	cout << !- 300 << endl; //0

	// 삼항 연산자
	(10 > 5) ? cout << "10이 5보다 크다" : cout << "10이 5보다 작다";
	cout << endl;

	srand(time(NULL));
	cout << rand() << endl;
	cout << sizeof(rand()) << "Byte" << endl;

	//스플랜더 변수 세팅하기
	// 토큰 변수세팅
	int white_token, black_token, red_token, blue_token, green_token, gold_token;
	// 황금 토큰 제외 7개 세팅
	white_token = black_token = red_token = blue_token = green_token = 7;
	gold_token = 5; // 황금 토큰 5개 세팅

	int card_id; //개발카드 id
	// 카드 구매 비용
	int cardcost_black;
	int cardcost_white;
	int cardcost_red;
	int cardcost_blue;
	int cardcost_green;
	// 카드 할인 비용
	int black_discount;
	int white_discount;
	int red_discount;
	int blue_discount;
	int green_discount;
	int card_score; // 카드 점수				
	// 카드 타입별 개수
	int card_green = 40;
	int card_yellow = 30;
	int card_blue = 20;
	string card_type; //카드 타입

	string loyalcard_name; // 귀족 카드 이름
	int loyalcard_score = 3; // 귀족 카드 점수
	// 귀족카드 비용
	int loyalcard_blackcost;
	int loyalcard_greencost;
	int loyalcard_whitecost;
	int loyalcard_bluecost;
	int loyalcard_redcost;
	int loyalcard_count; // 귀족카드 개수

	int player_id; // 플레이어id
	// 플레이어 소지 보석
	int have_white;
	int have_green;
	int have_red;
	int have_blue;
	int have_black;
	int player_score; // 플레이어 점수
	int player_haveID; // 플레이어 소지카드(개발카드id)
	string have_loyalcard; // 플레이어가 소지한 귀족 타일
	int booked_cardID; // 예약카드 id(개발카드id)
	int booked_cardcount; // 예약카드 개수(최대 3개)
	int player_behavior; // 플레이어 행동변수

	int player_count; //플레이어 숫자
	int now_turnID; //현재 턴 플레이어id
	int win_grade = 15; //승리 점수
	int player_havetoken; //플레이어 소지 토큰(10개 제한)

	//실습 과제
	srand(time(NULL)); // 시드값 초기화
	int problem1_num; //실습 1번 문제 출력값
	int problem2_input_minnum; //실습 2번 문제 작은값
	int problem2_input_maxnum; //실습 2번 문제 큰값
	int problem2_subtract_num; //실습 2번 작은 값과 큰 값 사이의 숫자 개수
	int problem2_out_num; //실습 2번 숫자 사이의 랜덤한 출력값
	int problem3_correct_num; // 실습 3번 정답 숫자
	int problem3_input_num; // 실습 3번 입력 숫자

	//번외 숙제
	cout << endl << "번외 숙제 : 랜덤 함수 값의 데이터 크기 구하기" << endl;
	cout << "랜덤 함수의 값의 데이터크기는" << sizeof(rand()) << "Byte 입니다." << endl << endl;

	//실습 1번
	cout << "<< 실습 1번 문제 >> " << endl;
	problem1_num = rand() % 5 + 3;
	cout << " 3 ~ 7 사이의 랜덤한 출력 값은 >> " << problem1_num << "입니다." << endl << endl;

	//실습 2번
	cout << "<< 실습 2번 문제 >> " << endl;
	cout << "작은 값을 입력하시오 : ";
	cin >> problem2_input_minnum;
	cout << "큰 값을 입력하시오 : ";
	cin >> problem2_input_maxnum;
	problem2_subtract_num = problem2_input_maxnum - problem2_input_minnum + 1;
	problem2_out_num = rand() % problem2_subtract_num + problem2_input_minnum;
	cout << "작은 수 " << problem2_input_minnum << ", 큰 수 " << problem2_input_maxnum << " 사이의 랜덤한 숫자 출력 값은 >> " << problem2_out_num << "입니다." << endl << endl;

	//실습 3번
	cout << "<< 실습 3번 문제 >> " << endl;
	problem3_correct_num = rand() % 9 + 1;
	cout << "정답이라고 생각하는 숫자를 입력하시오 : ";
	cin >> problem3_input_num;
	(problem3_input_num == problem3_correct_num) ? cout << boolalpha << (problem3_input_num == problem3_correct_num) :
		cout << boolalpha << (problem3_input_num == problem3_correct_num) << "  정답은 " << problem3_correct_num << "였습니다.";
	cout << endl << endl;
}