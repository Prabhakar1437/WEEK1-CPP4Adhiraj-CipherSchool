#include <bits/stdc++.h>
using namespace std;

class student{
	string passcode;
	//int, char,string,float..
	public:
	string name;
	int id;
	
	void into(){
			cout<<"My name is"<<name<<", my id is"<<id<<"password is"<<endl;
		}
	void setpass(string s){
			passcode = s;
	}
};
		int main(){
		 
		 student s1;
		 s1.name = "Vats";
		 s1.id = 1;
		 s1.setpass("0001");
		 s1.into();
//		 s1.passcode ="001";
	
	return 0;
}

