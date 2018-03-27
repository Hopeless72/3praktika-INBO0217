#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class child{

	
private:
	string name,surname,age;
public:
	void Input(){
		cout<<"Name: "<<endl;
		cin>>name;
		cout<<"Surname: "<<endl;
		cin>>surname;
		cout<<"Age: "<<endl;
		cin>>age;
		cout<<endl;
	}

	void Display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Surname: "<<surname<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<endl;
	}
};

int main() {
	child child1,child2,child3;
	child1.Input();
	child2.Input();
	child3.Input();
	cout<<endl;
	child1.Display();
	child2.Display();
	child3.Display();

	return 0;
}
