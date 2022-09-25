//#include<iostream>
//using namespace std;
//
//class TornadoException {
//public:
//	TornadoException()
//	{
//		watch();
//	}
//	TornadoException(int m)
//	{
//		watch(m);
//	}
//	void watch()
//	{
//		cout << "Tornado is near! Take cover immediately" << endl;
//	}
//	void watch(int n)
//	{
//		cout << "Tornado " << n << " miles away and approaching " << endl;
//	}
//};
//int main()
//{
//	int m;
//	try
//	{
//		cout << "Enter the distance of tornado" << endl;
//		cin >> m;
//		if (m > 0 && m <= 1)
//		{
//			throw 1;
//		}
//		else if (m > 1)
//		{
//			throw - 1;
//		}
//		else
//			throw 22.54;
//	}
//	catch (int n)
//	{
//		if (n == 1)
//			TornadoException o;
//		else
//			TornadoException o(m);
//	}
//	catch (...)
//	{
//		cout << "Eveption Thrown" << endl;
//	}
//	system("pause");
//}