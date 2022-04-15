/*
    구조체
    1. 절차적
    2. 구조적
    3. 객체지향적

    ### 추상화 ###
    C언어에서 코드를
    추상화 하는데 사용되는 삼총사 : 배열, 구조체, 함수
    추상화 : 현상을 간략화 / 기호화 / 보편화 해서 표현한것
    코드에서 추상화가 필요한 이유 : 코드는 사람이 짜는 것이기 때문에
    다른 사람이 코드를 해석하기 편리해야 하고
    다른 사람이 인수인계받아서 유지보수 하기 편리해야 하고
    다른 사람들과 함께 공동으로 코드를 만들기 편리해야하고
    
    - 배열 : 속성이 동일한 여러 개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로 서로 연관 되어 있음을 표시함으로서 추상화함
    - 구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화
    - 함수 : 프로세스(코드)를 특정 기능 단위로 묶어서 추상화

    최악의 추상화 -> 추상화 단계를 상승시키는 과정
    string a, b, c;             // <- 최악의 추상화
    string a[3];                // <- 위보다는 좀 낫다
    string name1, name2, name3; // <- 조금 더 나아지고
    string studentName[3];      // <- 위의 것보다 의도가 명료하게 드러나기 떄문에 좋은 추상화다.
*/

/*
    구조체
    - 변수를 모아 놓은 집합체
    - 특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때
    - studentName[10], studentAge[10], studentKorScore[10] ....
    - 위 변수들은 '학생'의 XXX로
    ∴ 이름, 나이, 국어점수, 석차 등등을 '학생'이라는 구조체로 묶어서 사용

    1. 구조체를 정의하는 위치 : 구조체가 사용되는 함수의 앞에 정의한다.
    { 해당 함수의 바깥쪽 앞(위) }
    2. 구조체 정의의 방법
    struct 구조체 변수 명 {
        구조체 안에 들어갈 하위 변수들;
    };
    -> 구조체는 일종의 우리가 새롭게 만든 데이터형.

    3. 구조체 선언과 초기화
    기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일
    int a[3] = { 50, 70, 80 };
    구조체 변수도 다음과 같이 선언과 같이 초기화를 진행 할 수 있다.

    player.HP = player.HP - monster[n].dmg;
*/
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>
#include <string>

using namespace std;
//구초체 정의 위치
struct score {
    int kor;
    int eng;
    int math;
};

struct student {
    string name; //일반 변수 사용 가능
    int monthlyScore[10]; //배열도 사용가능
    int age;
    string homeTown;
    int pride;
    score myScore; //미리 정의한 구조체도 변수로 사용 가능
}seoyeon,jaehyuk; //처럼 중괄호 뒤에 변수 이름을 미리 선언할 수 있다.
// name, age, homeTown, pride라는 하위 변수를 가지고 있는 student라는 구조체를 정의 한다.

int main() // 지금 우리가 쓰고있는 유일한 함수
{

    //구조체 사용 방법
    student doil;
    doil.name = "박도일";      // 구조체를 사용하는 변수의 이름값
    doil.age = 27;            //구조체를 사용하는 변수의 나이값
    doil.homeTown = "전주";       //구조체를 사용하는 변수의 고향값
    doil.pride = 97;            //구조체를 사용하는 변수의 자신감값

    doil.myScore.eng = 70;
    doil.myScore.kor = 75;
    doil.monthlyScore[0] = 90;
    
    score myScore = { 50, 80, 90 }; //배열을 초기화 하듯 구조체도 초기화 가능.
    cout << myScore.kor << " " << myScore.eng << " " << myScore.math << endl;
    //monster a = { "고블린", 79, 55.12f, true, 100 }; 처럼 다양한 변수가 있는 구조체에도 한번에 초기화 가능.

    //초간단 실습. student 구조체를 사용해서 자기 자신의 정보를 입력하고 확인해보자.
    cout << doil.name << endl;
    cout << doil.age << endl;
    cout << doil.homeTown << endl;
    cout << doil.pride << endl;
    cout << doil.monthlyScore[0] << endl;

    /*
        과제 : 미궁탈출 게임의 업데이트 
        사용할 수 있는 모든 요소에 구조체를 활용해서 소스코드를 개선하기.
        맵 타일에 지형 정보를 넣고(숲, 늪, 평지)
        player : 피로도를 넣고
        플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지 (숲-2, 늪-3, 평지-1)
    */

}