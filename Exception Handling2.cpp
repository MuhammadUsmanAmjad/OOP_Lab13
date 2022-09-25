//#include<iostream>
//using namespace std;
//int main()
//{
//	int d = 0, m = 0, y = 0;
//	cout << "Enter Date of Birth" << endl;
//	cout << "Day :";
//	cin >> d;
//	cout << "Month : ";
//	cin >> m;
//	cout << "Year : ";
//	cin >> y;
//	try
//	{
//		if ((d > 28 && m == 2) && (y % 4 != 0))
//			throw 1;
//		else if (d > 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
//			throw 3;
//		else if (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11))
//			throw -1;
//		else if (y < 0)
//			throw "Zz";
//		else if (m > 12 || m < 0)
//			throw 1.99;
//	}
//	catch (int n)
//	{
//		if (n == 1)
//		{
//			cout << "Not a leap year enter date again" << endl;
//			cin >> d;
//		}
//		if (n == 3)
//		{
//			cout << "Invalid Date input again" << endl;
//			cin >> d;
//		}
//		if (n == -1)
//		{
//			cout << "Invalid Date input again" << endl;
//			cin >> d;
//		}
//	}
//	catch (double n)
//	{
//		cout << "Invalid month Enter Again" << endl;
//		cin >> m;
//	}
//	catch (char const* a)
//	{
//		cout << "Invalid Year Enter Again" << endl;
//		cin >> y;
//	}
//	cout << endl;
//	cout << "Date Of Birth is : " << d << "/" << m << "/" << y << endl;
//	system("pause");
//}