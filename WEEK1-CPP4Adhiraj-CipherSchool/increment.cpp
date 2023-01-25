#include <bits/stdc++.h>
using namespace std;
//pass by vol.
//void increment(int a){
//a++;
//return;
//}
//pass by pointer
//void increment(int *a){
//(*a)++;
//return;
//}
void increment(int &a){
a++;
// int &b=
return;
}
//-> Address;
//int i;
//int <<&i
//int &j=

int main(){
int i = 11;
int &j = i;
j++;
increment(i);
cout<<i<<endl;
	
	return 0;
}
