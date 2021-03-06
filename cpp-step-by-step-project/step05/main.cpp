#include <iostream>
#include <bank-account-system5.h>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	AccountHandler handler; // 핸들러 객체 생성
	int select;
	while(1) {
		handler.showMenu();
		cout << "선택 : ";
		cin >> select;

		switch(select) {
		case MAKE :
			handler.makeAccount(); // 멤버함수(메소드) 참조
			break;
		case DEPOSIT :
			handler.deposit(); // 멤버함수(메소드) 참조
			break;
		case WITHDRAW :
			handler.withdrawal(); // 멤버함수(메소드) 참조
			break;
		case PRINT :
			handler.allPrint(); // 멤버함수(메소드) 참조
			break;
		case EXIT :
			return 0;
		default :
			cout << "잘못된 메뉴 번호입니다." << endl;
			break;
		}
	}
	return 0;
}
