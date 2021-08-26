#include<iostream>
#include<math.h>
using namespace std;


	void distance(float x1, float x2, float y1, float y2, float z1, float z2)
	{
		float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2) * 1.0);
		cout << "distance   =" << d << endl;
			
	}


int main()
{
	float x1 = 2;
	float y1 = -5;
	float z1 = 7;
	float x2 = 3;
	float y2 = 4;
	float z2 = 5;

	
	distance(x1, x2, y1, y2, z1, z2);
	
	system("pause");
	return 0;
}