#include<iostream>
#include<string>
#include<list>
using namespace std;
list<string> Name;
list<double> Score;
list<double> Credit;
void calculate1()
{
	double zongfen = 0;
	double zongxuefen = 0;
	double a, b;
	double jidian;
	list<double>::iterator i2 = Score.begin();
	list<double>::iterator i3 = Credit.begin();
	for (i2; i2 != Score.end(); i2++)
	{
		b = *i2;
		a = *i3;
		zongfen += a * b;
		zongxuefen += b;
		i3++;
	}
	jidian = zongfen / zongxuefen;
	cout << "The class grade entered now is" << jidian;
}
void input()
{
	string s;
	string sc;
	double score;
	double credit;
	cout << "Course Name：" << endl;
	cin >> s;
	cout << "Grade:" << endl;
	cin >> score;

	cout << "Final score:" << endl;
	cin >> sc;
	if (sc == "a")
		credit = 4.0;
	if (sc == "A")
		credit = 4.5;
	if (sc == "B")
		credit = 3.5;
	if (sc == "b")
		credit = 3.0;
	if (sc == "C")
		credit = 2.5;
	if (sc == "c")
		credit = 2.0;
	if (sc == "D")
		credit = 1.5;
	if (sc == "d")
		credit = 1.0;
	if (sc == "F")
		credit = 0.0;
	Name.push_back(s);
	Score.push_back(score);
	Credit.push_back(credit);
}
void show()
{
	list<string>::iterator it1 = Name.begin();
	list<double>::iterator it2 = Score.begin();
	list<double>::iterator it3 = Credit.begin();
	for (it1; it1 != Name.end(); it1++)
	{

		cout << "Course：" << *it1 << "   Grade：" << *it2 << "   Score：" << *it3<<endl;
		it2++;
		it3++;
	}
}
void calculate()
{
	double zongfen = 0;
	double zongxuefen = 0;
	double a, b;
	double jidian;
	list<double>::iterator i2 = Score.begin();
	list<double>::iterator i3 = Credit.begin();
	for (i2; i2 != Score.end(); i2++)
	{
		b = *i2;
		a = *i3;
		zongfen += a * b;
		zongxuefen += b;
		i3++;
	}
	jidian = zongfen / zongxuefen;
	cout  << "Final Score：" << jidian << endl<<"You get"<< zongxuefen<<"in this term"<<endl;
		

}
int main() {
	system("title Grade calculator");
	system("color 0B");
	int n;
	cout << "Chung-ang Uni. Grade calculator" << endl;
	cout << "How many classes did you take this semester?" << endl;
	cin >> n;
	system("cls");
	for (int i = 1; i <= n; i++) {
		if (i >= 2) {
			calculate1();
		}
		else
			cout << "The Grade for now：0。";
		cout << "   No." << i << "Course is entering，" << n - i << "course is left 。" << endl << "(Upper case is + score, lower case is normal score, F is 0, no P score)" << endl;
		input();
		system("cls");
	}
	show();
	cout << endl;
	calculate();
	system("pause");
}
