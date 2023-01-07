#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class A{
//	friend void f();
//	private:
//		int frield;
//	public:
//		int set(int x){
//			return field = ++x;
//		}	
//		int get(){
//			return ++field;
//		}
//};
//void f(A &a){
//	a.field /= 2;
//}

class X{
	public: 
	virtual void shout(){
		cout<<"X";
	}
	};
	class Y: public X{
		public: 
		void shout(){
			cout<<"Y";
		}
	};
	class Z: public Y{
		public: 
		void shout(){
			cout<<"z";
		}
	};

int main(int argc, char** argv) {
//char str[] = "hellw\0world\0";
//cout<<str;
	int i=0;
	cout<<i;
	{int i=0; 	cout<<i;	}
	{int i=2;	}
	cout<<i;
	return 0;
}
