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
			cout << "\nEnter the base of the triangle : ";
			cin >> b;
			cout << "Enter the height of the triangle : ";
			cin >> h;
			cout << endl;
		}
		
		float area() {
			return (0.5 * b * h);
		}
};

class Circle {
	
	float r;
	
	public:
		void getData() {
			cout << "\nEnter the radius of the circle : ";
			cin >> r;
			cout << endl;
		}
		
		float area() {
			return (3.14 * r * r);
		}
};

class Square {
	
	float l;
	
	public:
		void getData() {
			cout << "\nEnter the length of the square : ";
			cin >> l;
			cout << endl;
		}
		
		float area() {
			return (l * l);
		}
};

int main() {
	
	Square s;
	Triangle t;
	Circle c;
	
	s.getData();
	cout << "Area of the square is " << s.area() << endl;
	
	t.getData();
	cout << "Area of the triangle is " << t.area() << endl;
	
	c.getData();
	cout << "Area of the circle is " << c.area() << endl;
	
	return 0;
}