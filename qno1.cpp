# include<iostream>
using namespace std ;
int main (){
	int num [] = { 3 , 61 ,  9, 1,};
	int size = 4;
	int largest = INT_MIN;
	for ( int i =0 ; i<size ; i++){
		if (num[i] > largest){
			largest = num[i];
			
		}
	}
	cout << "largest" << largest << endl;
	return 0 ;
}
