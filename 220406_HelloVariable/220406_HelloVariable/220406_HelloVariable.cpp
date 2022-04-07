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
    float testNum = 2.8f; // 부동소수점 7자리까지 표현 가능
    double testNum1 = 2.8; // 부동소수점 15자리까지 표현 가능
    // 기본적으로 실수를 입력하면 컴퓨터는 double형으로 인식
    // double형은 부동소수점 15자리까지 가능하기때문에 상대적으로 크기가 작은 float에 대입하려고 하면 오류 발생
    // 따라서 숫자 뒤에 f를 붙혀 float형이라는걸 표기해야한다.

    cout << testNum << endl;
    cout << &testNum << endl; // 메모리주소 위치 확인
    cout << sizeof(testNum) << "Byte" << endl; // 데이터타입의 크기 확인

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


    /*
        <<연산자>>
        - 데이터를 가공(연산)하는 모든 명령에 필요한 것들
        1) 어떤종류의 연산자들이 있는지
        2) 우선순위 : 어떤 순서로 연산이 진행되는지
        3) 결합순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연ㅅ나자.

        1. 산술연산자 : 사칙연산 (좌측부터 연산)
            + : 더하기
            - : 뺴기
            * : 곱하기
            / : 나누기     11 / 3 = 3
            % : 나머지     11 % 3 = 2
            우선순위 -> *, /, %  > +, -

        2. 대입연산자 (우측부터 연산)
            = : 왼쪽 항에 오른쪽 항의 값을 대입한다.(복사한다)

        3. 복합대입연산자
            += : a += b; -> a = a + b;
            -= : a -= b; -> a = a - b;
            *= : a *= b; -> a = a * b;
            /= : a /= b; -> a = a / b;
            %= : a %= b; -> a = a % b; (a와 b는 정수형 타입이어야 한다)
            -> 변수가 정수형일때는 b가 0이 아니면 큰 오류가 없다
            -> 값을 바꾸기 위해서 대입 연산자를 사용한다.

        4. 증감연산자 : 특정 변수의 값을 1씩 증가시키거나 감소시킬 떄 사용한다.
            -> 변수의 앞이나 뒤에 ++ / --를 붙혀서 사용한다.
            -> 변수의 뒤에 증감연산자가 있을경우 문장을 종료한뒤에 증감연산자 실행
                ex) left_value = 14; cout << left_value++ << endl; // 출력 : 14 , 메모리 : 15
            -> 변수의 앞에 증감연산자가 있을경우 증감연산자 먼저 실행 후 문장 종료
                ex) left_value = 14; cout << ++left_value << endl; // 메모리 : 15, 출력 : 15

        5. 관계연산자 : 두 값을 비교한 결과가 참(1, true))인지 거짓(0, false)인지 반환하는 연산자
            < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참, 아니면 거짓(크거나 같을때)
            > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참, 아니면 거짓(작거나 같을때)
            <= : a <= b : 왼쪽 항의 값이 오른쪽 항의 값보다 작거나 같으면 참, 아니면 거짓(클때)
            >= : a >= b : 왼쪽 항의 값이 오른쪽 항의 값보다 크거나 같으면 참, 아니면 거짓(작을때)
            == : a == b : 왼쪽 항의 값이 오른쪽 항의 값과 같으면 참, 아니면 거짓(크거나 작을때)
            != : a != b : 왼쪽 항의 값이 오른쪽 항의 값고 다르면 참, 아니면 거짓(같을때)
    */


    //산술연산자
    int left_value = 14;
    int right_value = 3; // 값을 0으로 바꾸면 *까지 출력지만 /, %는 런타임에러 발생

    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl << endl;


    //복합대입연산자
    int left_value2 = 27;
    int right_value2 = 5;
    
    cout << left_value2 << " += " << right_value2 << " => ";
    left_value2 += right_value2;
    cout << left_value2 << endl;

    cout << left_value2 << " -= " << right_value2 << " => ";
    left_value2 -= right_value2;
    cout << left_value2 << endl;

    cout << left_value2 << " *= " << right_value2 << " => ";
    left_value2 *= right_value2;
    cout << left_value2 << endl;

    cout << left_value2 << " /= " << right_value2 << " => ";
    left_value2 /= right_value2;
    cout << left_value2 << endl;

    cout << left_value2 << " %= " << right_value2 << " => ";
    left_value2 %= right_value2;
    cout << left_value2 << endl << endl;

    //증감연산자
    //left_value++; //15
    cout << left_value++ << endl; // 출력 : 14 , 메모리 : 15
    //++left_value; //16
    cout << ++left_value << endl; // 메모리 : 16, 출력 : 16;

    cout << "초기 값 : " << left_value << endl;
    cout << "출력문 안 변수앞에 증감연산자 : " << --left_value << endl; //메모리 : 15, 출력 : 15
    cout << "출력문 안 변수뒤에 증감연산자 : " << left_value-- << endl; //출력 : 15, 메모리 :14
    left_value--; // 증감연산자로 인해 13
    cout << "증감연산자(변수뒤) 먼저 한 뒤에 출력 : " << left_value << endl;
    --left_value; // 증감연산자로 인해 12
    cout << "증감연산자(변수앞) 먼저 한 뒤에 출력 : " << left_value << endl << endl;

    /*
        실습.
        1. 고객의 나이를 입력받아서 미성년자(19세 이하)이면 true를 출력, 성인이면 false를 출력.
        2. 입력받은 나이를 기준으로 주민등록증 발급대상(20살이상)이면 true를 아니면 false를 출력.
        + 3. 아홉수(1의자리가 9인수)인지 확인해서 true, false를 출력
    */

    int cinAge;

    cout << "나이를 입력하시오 : ";
    cin >> cinAge;

    cout << "┌────────────────────────────────────────────────────────┐" << endl;
    cout << "│ 미성년자 맞죠?? >> \t\t\t" << boolalpha << (cinAge <= 19) << "\t\t │" << endl;
    cout << "│ 주민등록증 발급대상인가요?? >> \t" << boolalpha << (cinAge == 20) << "\t\t │" << endl;
    cout << "│ 아홉수인가요?? >> \t\t\t" << boolalpha << ((cinAge % 10) == 9) << "\t\t │" << endl;
    cout << "└────────────────────────────────────────────────────────┘" << endl;

}
