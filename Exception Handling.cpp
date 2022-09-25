//#include<iostream>
//using namespace std;
//int main() {
//	int numOfItems;
//	double unitCost;
//	try
//	{
//		cout << "Enter the number of items: ";
//		cin >> numOfItems;
//		cout << endl;
//		if (numOfItems < 0)
//			throw numOfItems;
//		cout << "Enter the cost of one item: ";
//		cin >> unitCost;
//		cout << endl;
//		if (unitCost < 0)
//			throw unitCost;
//		cout << "Total cost: $"
//			<< numOfItems * unitCost << endl;
//	}
//	catch (int num)
//	{
//		cout << "Negative number of items: " << num
//			<< endl;
//		cout << "Number of items must be nonnegative."
//			<< endl;
//	}
//	catch (double dec)
//	{
//		cout << "Negative unit cost: " << dec
//			<< endl;
//		cout << "Unit cost must be nonnegative."
//			<< endl;
//	}
//}
//
////1--
////Enter the number of items : 25
////Enter the cost of one item : 5.50
////Total cost : $137.5
//
////2--
////Enter the number of items : -55
////Negative number of items : -55
////Number of items must be nonnegative.
//
////3--
////Enter the number of items : 37
////Enter the cost of one item : -4.5
////Negative unit cost : -4.5
////Unit cost must be nonnegative.
//
////4--
////Enter the number of items : -10
////Negative number of items : -10
////Number of items must be nonnegative.