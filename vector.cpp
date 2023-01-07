#include <iostream>
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main(int argc, char** argv) {

vector<int> vec1;
int element;

for(int i=0;i<4;i++){
	cout<<"Enter element : ";
	cin>>element;
	vec1.push_back(element);
}
display(vec1);


	return 0;
}
