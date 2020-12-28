#include "main.h"

void doMyinfo() {
	int NowYear = 0;
	cout << "현재 연도를 입력하십시오: ";
	cin >> NowYear;
	int US_MyAge = NowYear - 2006;
	int KOR_MyAge = NowYear - 2005;
	string E_my_country = "Korea";
	string E_my_job = "student";
	string K_my_country = "대한민국";
	string K_my_job = "학생";
	int age = 0;
	cout << "(ENG) My country is " << E_my_country << "." << endl;
	cout << "(KOR) 저의 국적은 " << K_my_country << "입니다." << endl;
	cout << "(ENG) My job is " << E_my_job << "." << endl;
	cout << "(KOR) 제 직업은 " << K_my_job << "입니다." << endl;
	cout << "(ENG) I'm " << US_MyAge << "years old." << endl;
	cout << "(KOR) 저는 " << KOR_MyAge << "살 입니다." << endl;
}

int doMinus(const int x, const int y)
{
	cout << "x - y =" << x - y << endl;
	return x - y;
}

int doPlus(const int x, const int y) {
	cout << "x + y =" << x + y << endl;
	return x + y;
}

int Minus(const int x, const int y)
{
	return x - y;
}

int Plus(const int x, const int y) {
	return x + y;
}

void History() {
	const int kArraySize = 3;
	int founding[kArraySize];
	founding[0] = 918;
	founding[1] = 1392;
	founding[2] = 1948;

	cout << "고려 건국 연도는 " << founding[0] << "년 입니다." << endl;
	cout << "조선 건국 연도는 " << founding[1] << "년 입니다." << endl;
	cout << "대한민국 건국 연도는 " << founding[2] << "년 입니다." << endl;
}

void TimeTrack() {
	time_t start = time(NULL);
	time_t finish = time(NULL);
	int pass_int = 1;
}

void doTime100B() {
	time_t start = time(NULL);
	time_t finish = time(NULL);
	int pass_int = 1;

	time(&start);

	for (int i = 1; i < 100000; i++)
	{
		for (int j = 1; j < 100000; j++)
			pass_int += 1;
	}

	time(&finish);

	cout << "1을 100억번 더하는 시간: " << difftime(finish, start) << "초" << endl;
	if (difftime(finish, start) < 21) {
		cout << "오! 컴퓨터가 예제에서 사용된 컴퓨터보다 좋습니다! 예제보다 " << 21 - difftime(finish, start) << "초 빠르군요!" << endl;
	}
	else if (difftime(finish, start) > 21) {
		cout << "흠..... 예제에서 사용된 컴퓨터보다 사양이 좋지 않습니다! 예제는 21초, 이 컴퓨터는 " << difftime(finish, start)
			<< "초로 예제가 " << difftime(finish, start) - 21 << "초 빠릅니다!" << endl;
	}
	else if (difftime(finish, start) == 21) {
		cout << "대단합니다! 이 컴퓨터와 예제에서 사용된 컴퓨터의 처리 속도가 21초로 동일합니다!" << endl;
	}
	else {
		cout << "ERROR: 컴퓨터의 처리에서 오류가 발생했습니다. 코드를 편집하거나 실행 환경을 변경해 보십시오." << endl;
	}
}

void ForumExtreme() {
	STARTV:
		int f = 0;
		cout << "Geometry Dash Extreme Demon History" << endl;
		pause();
		cls();
		cout << "Now, Write number you want to see forum rank." << endl;
		cout << "You Can Write Year Geometry Dash Forum POINTCERATE is existence(2013~Now)" << endl;
		cin >> f;
		pause();
		cls();
		if (f = 2013) {
			cout << "2013 Years, Forum TOP 1 Demon : Demon Park" << endl;
			cout << "This Level is First Demon in Geometry Dash, and this level give sake to make 'DEMON' DIFFICULTY" << endl;
			cout << "Demon Park is Easy Demon Now;;; But exactally this level is Legend and Levolution in Geometry Dash" << endl;
			goto STARTV;
		}
}

int main(void) {
	int a = 0;
	int b = 0;
	cout << "첫번째 숫자를 입력하십시오: ";
	cin >> a;
	cout << "두번째 숫자를 입력하십시오: ";
	cin >> b;
	doPlus(a, b);
	doMinus(a, b);
	cout << "두 숫자의 합은 " << Plus(a, b) << "입니다." << endl;
	cout << "두 숫자의 차는 " << Minus(a, b) << "입니다." << endl;
	pause();
	cls();
	History();
	pause();
	cls();
	doMyinfo();
	pause();
	cls();
	doTime100B();
	return 0;
}
