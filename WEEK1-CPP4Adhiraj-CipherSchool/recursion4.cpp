#include <bits/stdc++.h>
using namespace std;


//itrative fun
//	int power(int base, int pow){

//	int num =1;
//	for(int i=0; i<pow;i++){
//		num*=base;//num= num*base;
//	}
//	return num;
//}
//recursive fun
int power(int base, int pow){
	//1.base case
	//2.assumption
	//3.col.
	if(pow==0)return 1;
	
	int solAns = power(base, pow=1);//solAns ->2^2
	
	return solAns*base;
}
int main()
{
cout<<power(2,3);
	
	return 0;
}
