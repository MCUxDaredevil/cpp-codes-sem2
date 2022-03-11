/*

Name			Polygon Area Finder
Description		Find areas for given polygons
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/cpp-codes-sem2
Support URL		https://github.com/MCUxDaredevil/cpp-codes-sem2/issues
Discussions		https://github.com/MCUxDaredevil/cpp-codes-sem2/discussions
License			MIT

*/

#include<iostream>
using namespace std;

class Triangle {
	
	float h, b;
	
	public:
		void getData() {
			cout << "Enter the base of the triangle : ";
			cin >> b;
			cout << "Enter the height of the triangle : ";
			cin >> h;
		}
		
		float area() {
			return (0.5 * b * h);
		}
};

int main() {
	
	
	
	return 0;
}