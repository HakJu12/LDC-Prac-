#include "main.h"

void doMyinfo() {
	int NowYear = 0;
	cout << "���� ������ �Է��Ͻʽÿ�: ";
	cin >> NowYear;
	int US_MyAge = NowYear - 2006;
	int KOR_MyAge = NowYear - 2005;
	string E_my_country = "Korea";
	string E_my_job = "student";
	string K_my_country = "���ѹα�";
	string K_my_job = "�л�";
	int age = 0;
	cout << "(ENG) My country is " << E_my_country << "." << endl;
	cout << "(KOR) ���� ������ " << K_my_country << "�Դϴ�." << endl;
	cout << "(ENG) My job is " << E_my_job << "." << endl;
	cout << "(KOR) �� ������ " << K_my_job << "�Դϴ�." << endl;
	cout << "(ENG) I'm " << US_MyAge << "years old." << endl;
	cout << "(KOR) ���� " << KOR_MyAge << "�� �Դϴ�." << endl;
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

	cout << "��� �Ǳ� ������ " << founding[0] << "�� �Դϴ�." << endl;
	cout << "���� �Ǳ� ������ " << founding[1] << "�� �Դϴ�." << endl;
	cout << "���ѹα� �Ǳ� ������ " << founding[2] << "�� �Դϴ�." << endl;
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

	cout << "1�� 100��� ���ϴ� �ð�: " << difftime(finish, start) << "��" << endl;
	if (difftime(finish, start) < 21) {
		cout << "��! ��ǻ�Ͱ� �������� ���� ��ǻ�ͺ��� �����ϴ�! �������� " << 21 - difftime(finish, start) << "�� ��������!" << endl;
	}
	else if (difftime(finish, start) > 21) {
		cout << "��..... �������� ���� ��ǻ�ͺ��� ����� ���� �ʽ��ϴ�! ������ 21��, �� ��ǻ�ʹ� " << difftime(finish, start)
			<< "�ʷ� ������ " << difftime(finish, start) - 21 << "�� �����ϴ�!" << endl;
	}
	else if (difftime(finish, start) == 21) {
		cout << "����մϴ�! �� ��ǻ�Ϳ� �������� ���� ��ǻ���� ó�� �ӵ��� 21�ʷ� �����մϴ�!" << endl;
	}
	else {
		cout << "ERROR: ��ǻ���� ó������ ������ �߻��߽��ϴ�. �ڵ带 �����ϰų� ���� ȯ���� ������ ���ʽÿ�." << endl;
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
	cout << "ù��° ���ڸ� �Է��Ͻʽÿ�: ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��Ͻʽÿ�: ";
	cin >> b;
	doPlus(a, b);
	doMinus(a, b);
	cout << "�� ������ ���� " << Plus(a, b) << "�Դϴ�." << endl;
	cout << "�� ������ ���� " << Minus(a, b) << "�Դϴ�." << endl;
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
