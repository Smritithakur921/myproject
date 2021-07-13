#include <iostream>
#include "lab1_Q1.h"
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> s, m, r;

	// save all the inputs //


	while (n--)
	{
		char command;
		int a, b, c, d, e, f;
		cin >> command;
		QUADRATIC q1, q2;
		switch (command) {
		case 'p':
			/* Add something here*/
			cin >> a >> b >> c;
			s.push_back(command);
			s.push_back(a);
			s.push_back(b);
			s.push_back(c);
			break;
		case '+':

			cin >> a >> b >> c >> d >> e >> f;
			s.push_back(command);
			s.push_back(a);
			s.push_back(b);
			s.push_back(c);
			s.push_back(d);
			s.push_back(e);
			s.push_back(f);
			// cin >> q2.a >> q2.b >> q2.c; // take input to add 
			// q1.add(q2);
			break;

		case 'd':
			cin >> a >> b >> c;
			s.push_back(command);
			s.push_back(a);
			s.push_back(b);
			s.push_back(c);
			break;

		default:
			cout << "wrong input!";
			break;
		}
	}


	int a, b, c, e, f, g;
	QUADRATIC q1, q2;
	int j = 0;
	int aa = s.size();
	//cout << aa << "\n";
	while (j < s.size()) {
		switch (s[j]) {
		case 112:
			a = s[j + 1];
			b = s[j + 2];
			c = s[j + 3];
			j = j + 4;
			q1.print(a, b, c);
			break;

		case 100:
			a = s[j + 1];
			b = s[j + 2];
			c = s[j + 3];
			q1.discriminant(a, b, c);
			j = j + 4;
			break;

		case  43:
			a = s[j + 1];
			b = s[j + 2];
			c = s[j + 3];
			e = s[j + 4];
			f = s[j + 5];
			g = s[j + 6];
			q1.add(a, b, c, e, f, g);
			j = j + 7;
			break;
		default: cout << "finished";
			break;
		}
	 }

	system("pause");
}

//int aa = s.size();
//std::cout << aa << "\n";
//int j = 0;
//while (j < aa) {
//	int a, b, c, e, f, g;
//	QUADRATIC q1, q2;
//
//	int command = s[j];
//	switch (s[j]) {
//	case 112:
//		a = s[j + 1];
//		b = s[j + 2];
//		c = s[j + 3];
//		q1.print(a, b, c);
//		j = j + 4;
//
//
//	case  43:
//		a = s[j + 1];
//		b = s[j + 2];
//		c = s[j + 3];
//		e = s[j + 4];
//		f = s[j + 5];
//		g = s[j + 6];
//		q1.add(a, b, c, e, f, g);
//		j = j + 7;
//
//
//	case  100:
//		a = s[j + 1];
//		b = s[j + 2];
//		c = s[j + 3];
//		q1.discriminant(a, b, c);
//		j = j + 4;
//		break;
//	default: std::cout << "wrong input!";
//		break;
//		cout << "j is : " << j << endl;
//
//	}
//}
/*
	if (m.size() > 0) {
		for (int i = 0; i < m.size(); i = i+6) {

		a = m[i];
		b = m[i + 1];
		c = m[i + 2];
		e = m[i+3];
		f = m[i + 4];
		g = m[i + 5];
			q1.add(a, b, c, e, f, g);
		//cout << a << b << c << e << f << g;
		}

	}

	if (r.size() > 0) {
	for (int i = 0; i < r.size(); i = i+3) {
	a = r[i];
		b = r[i + 1];
		c = r[i + 2];
	q1.discriminant(a, b, c);
	}*/