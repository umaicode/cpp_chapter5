//5장-6-2 Letters_main.cpp   5.5 class 데이터와 class 함수
#include "5장-6-1.Letters.h"
#include <iostream>
using namespace std;
# include <stdlib.h>
// class 변수의 class 외부 정의
// 클래스 변수의 초기화는 main 밖에서 해야 한다.
// stack이 만들어지기 전에 값을 초기화 한다.
// 비실행문이다.
int Letters :: num = 0;//private member이나 초기화 사용

void main(){
    // 다음의 static 함수 호출은 class 자체를 참조하고      
    // 특정 객체를 참조하지 않는다
    // Letters::num++; // num은 Letters 클래스의 private이다. -> main에서 접근이 안된다.
    cout << "Program begins..." << endl;
    cout << "Number of letters at the beginning: "
          <<  Letters::Number() << endl;
	//cout << Letters::num;
    // class Letters의 네 객체를 생성
    Letters A ('a');
    Letters B ('b');
    Letters C ('c');
    Letters D ('d');
	//cout << A.num;
    cout << "Number of letters after declarations: "
          <<  A.Number() << endl;
  
    cout << endl;
    cout << "Entering a new block..." << endl;
    {
        Letters E ('e');
        Letters *pF;
        pF = new Letters ('f'); // 이때 new는 객체를 만들고 주소를 주는 것. 블럭이 끝나면 pF의 소멸자가 나와서 로컬변수는 날리지만 객체는 살아있다.(???)
       cout << "Total number of letters inside the block: "<<  A.Number() << endl;
        cout << endl;
        cout << "Leaving the block..." << endl;
    }
    // block의 끝 E는 소멸되었지만  pF는 소멸되지 않음     
    // 그러나 접근할 수 없음   
    cout << endl;
    cout << "Total number of letters after the block: "
          <<  Letters::Number() << endl;
	system("pause");
}