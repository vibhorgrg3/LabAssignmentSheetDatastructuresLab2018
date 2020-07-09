#include <iostream>
using namespace std;

class invoice{
	string itmNumber;
	string itmName;
	int qnt;
	int price_;

public:
    static int counter;
	invoice();
	//copy constructor
	invoice(const invoice &source);
	//counter increased
	static void copy_called(){
		counter++;
	}

	//a set and a get function for each data member.
	void set_itmNumber(string a){itmNumber=a;};
	void set_itmName(string a){itmName=a;};
	void set_qnt(int a){qnt=a;};
	void set_price_(int a){price_=a;};
	string get_itmNumber() const {return itmNumber;}
	string get_itmName() const{return itmName;}
	int get_qnt() const {return qnt;}
	int get_price_() const {return price_;}
	int getInvoiceAmount() const{
		return (qnt*price_);
	}


};

int invoice::counter=0;

invoice::invoice(const invoice &source):
	itmNumber{source.itmNumber},
	itmName{source.itmName},
	qnt{source.qnt},
	price_{source.price_}{
		copy_called();
	}

invoice::invoice():itmNumber{""},itmName{""},qnt{0},price_{0}{}//constructor that initializes the four data members

int maximumQnt(const invoice i1, const invoice i2){
	if(i1.get_qnt()>i2.get_qnt())
		return i1.get_qnt();
	return i2.get_qnt();
}

int main(int argc, char const *argv[])
{
	invoice a,b;
	a.set_price_(100);
	a.set_qnt(20);
	a.set_itmName("books");
	a.set_itmNumber("NO1");
	b.set_price_(200);
	b.set_qnt(10);
	b.set_itmName("looks");
	b.set_itmNumber("NO2");
	cout<<"invoice one:"<<endl;
	cout<<a.get_qnt()<<endl;
	cout<<a.get_itmName()<<endl;
	cout<<a.get_itmNumber()<<endl;
	cout<<a.get_price_()<<endl;
	cout<<"invoice two:"<<endl;
	cout<<b.get_qnt()<<endl;
	cout<<b.get_itmName()<<endl;
	cout<<b.get_itmNumber()<<endl;
	cout<<b.get_price_()<<endl;
    int m;
    m=maximumQnt(a,b);
    cout<<endl<<m;

	return 0;
}














