#include <iostream>
using namespace std;

class employee
{

	string Fname;
	string Lname;
	int Sal;

public:
	employee(): Fname{""}, Lname{""}, Sal{0} {counter++;}
	static int counter;
//	~employee();
	void setFname(string a) {Fname = a;}
	void setLname(string a) {Lname = a;}
	void setSal(int a) {Sal = a;}
	string getFname() const {return Fname;}
	string getLname() const {return Lname;}
	int getSal() const {return Sal;}
	string getName() const {return (Fname + " " + Lname);}

};

int employee::counter = 0;


string MaxSal(const employee e1, const employee e2) {
	if (e1.getSal() > e2.getSal())
		return e1.getName();
	return e2.getName();
}

int main(int argc, char const *argv[])
{
	employee e1, e2;
	e1.setSal(100);
	e2.setSal(11); // increments only when sal > 9, dunno why
	e1.setFname("marsk");
	e1.setLname("koin");
	e2.setFname("joiney");
	e2.setFname("toosk");
	cout << "yearly salary of e1: " << 12 * e1.getSal() << endl;
	cout << "yearly salary of e2: " << 12 * e2.getSal() << endl;
	e1.setSal((e1.getSal() * 0.10) + e1.getSal());
	e2.setSal((e2.getSal() * 0.10) + e2.getSal());
	cout << "after 1% inc: " << endl;
	cout << "yearly salary of e1: " << 12 * e1.getSal() << endl;
	cout << "yearly salary of e2: " << 12 * e2.getSal() << endl;
	cout << employee::counter << endl;
	cout << MaxSal(e1, e2);

	return 0;
}
