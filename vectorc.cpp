#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printVector(vector<int> v){
	for(vector<int>::iterator it=v.begin();it != v.end();it++){
	
	cout << *it << " ";
	
	}


}
void test(){

vector<int> v;
for (int i = 0;i<4;i++){


v.push_back(i);
}
printVector(v);


}
int main(){
test();
return 0;
}
