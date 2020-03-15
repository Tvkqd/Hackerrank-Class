#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
	int age;
	int standard;
	string first_name;
	string last_name;
public:
	//Setters
	void set_age(int num) { age = num; }
	void set_first_name(string first) { first_name = first; }
	void set_last_name(string last) { last_name = last; }
	void set_standard(int std) { standard = std; }
	//Getters
	int get_age() { return age; }
	int get_standard() { return standard; }
	string get_first_name() { return first_name; }
	string get_last_name() { return last_name; }
	//Output in string format
	string to_string() {
		stringstream ss;
		string st;
		ss << age << "," << first_name << "," << last_name << "," << standard;
		ss >> st;
		return st;
	}

};

int main() {
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string();
	cout << endl;

	system("pause");
	return 0;
}
