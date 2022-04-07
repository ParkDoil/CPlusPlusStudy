/*
    -깃허브 사용법-
    이름-설명 작성 후
    README
    gitignore : 불필요한 파일 무시

    깃허브 데탑 추가.
    생성된 폴더 클론 추가.
    Visual Studio 프로젝트 파일 경로를 클론폴더 안으로 저장.
    commit (surmmary 필수 Description 설명 후) 하기
    commit 후 push orgin 하여 깃허브 서버에 올리기
    가지치기를 이용하여 코딩 후 main가지에 모징
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //변수
    /*
        1) 이름 : testNum    2) 크기 : 4Byte    3) 값 : 2.8    4) 메모리주소 : 000000F9A7AFF694
    */
    //float testNum = 2.8f; // 부동소수점 7자리까지 표현 가능
    //double testNum1 = 2.8; // 부동소수점 15자리까지 표현 가능
    //// 기본적으로 실수를 입력하면 컴퓨터는 double형으로 인식
    //// double형은 부동소수점 15자리까지 가능하기때문에 상대적으로 크기가 작은 float에 대입하려고 하면 오류 발생
    //// 따라서 숫자 뒤에 f를 붙혀 float형이라는걸 표기해야한다.

    //cout << testNum << endl;
    //cout << &testNum << endl; // 메모리주소 위치 확인
    //cout << sizeof(testNum) << "Byte" << endl; // 데이터타입의 크기 확인

    // 실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일 축하메시지를 출력하는 프로그램을 만들어보자.
    // -> 1. 상대방의 이름과 내이름, 상대방 나이를 입력 받는다.
    // -> 2. 생일 축하메시지를 출력한다. (문장 세분화)

    /*
        예시)
            상대방의 이름을 입력하세요.
            _김아무개

            본인의 이름을 입력하세요.
            _이아무개

            상대방의 나이를 입력하세요.
            _24

            출력 : 이아무개 : 김아무개님 24살 생일을 축하합니다.
    */

    string your_name, my_name;
    int your_age;

    cout << "상대방의 이름을 입력하세요." << endl << "_ ";
    cin >> your_name;
    //getline(cin, your_name);

    cout << endl << "본인의 이름을 입력하세요." << endl << "_ ";
    cin >> my_name;
    //getline(cin, my_name);

    cout << endl << "상대방의 나이를 입력하세요." << endl << "_ ";
    cin >> your_age;

    cout << "────────────────────────────────────────────" << endl;
    cout << my_name << " : " << your_name << "님의 " << your_age << "살 생일을 축하합니다!" << endl;
    cout << "────────────────────────────────────────────" << endl;

    /*
        변수명 이름 규칙
        1. C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
        ex) int floar = 3;(X)

        2. 알파벳, 숫자, _ 로만 구성할 수 있다.
        ex) int num = 3;(O)
            int costomer_count = 100;(O)
            int costomer_count1 = 200;(O)
            int _costomer = 20 (O)
            int 2customer_count = 300;(X)
            (예외사항)
            1) 숫자로 변수명을 시작할 수 없다.

        3. 대/소문자 구분을 한다.
            int age;
            int Age;
            int aGe;
            int agE;
        
        4. 변수명 사이에 띄어쓰기를 넣을 수 없다.
            -> 띄어쓰기는 다른 요소로 분류
            ex) int my age = 24 (X)

        5. 전부 소문자로 작성한다.

        6. 축약어를 쓰지 않는다.

        헝가리안 표기법
        카멜 표기법
        파스칼 표기법

            -헝가리안 표기법 예시-
            int iNum;
            float fNum;
            char chLetter;
            bool bCheck;
            string strName;
        

            -카멜 표기법 예시-
            int myAge;
            float decimalPointNum;
            char baseWord;
            bool checkOnOff;
            string somebodyName;

            printPaper();
            playGame();
            moveCharacter();


            -파스칼 표기법 예시-
            interface Guild
                class GuildMember implements Guild

            interface Account
                class CheckAccount implements Account


        오늘의 과제
        1. 자기 자신을 분석해서
        2. 여러가지 타입의 변수로 정의한다.
        (총 20개)

        예) 이름 : ?
            나이 : ?
            키   : ?
            혈액형 : ?
            MBTI : ?
            ....
    */
}