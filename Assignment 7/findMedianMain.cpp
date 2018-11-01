#include<iostream>
#include<cmath>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::sort;

int main()
{

	double findMedian(int array[], int size);
	int array[] = {550, 16, -322, 6, 39, 108};
	int size = 6;
        cout << "\nThe median is " << findMedian(array, size) << endl;
        return 0;
}
