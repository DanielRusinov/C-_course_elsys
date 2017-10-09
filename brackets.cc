#include<iostream>
using namespace std;

#define STACK_SIZE 10

class stack{
	int top_;
	int data_[STACK_SIZE];

public:
	
	stack(){
		top_ = 0;
	}

	bool is_empty(){
		return top_ == 0;
	}	
	bool is_full(){
		return top_ == STACK_SIZE;
	} 

	void push(int val){
		if(is_full()){
			cout << "Stack is full!" << endl;
		}
		
		data_[top_++] = val;
	}

	int pop(){
		if(is_empty()){
			cout << "Stack is empty!" << endl;
		}
		return data_[--top_];
	}
};


int main(){

	stack br;
	string a;
	cin >> a;

	for(int i = 0; i < a.length(); i++){
		
		if(a[i] == '('){
			br.push(a[i]);
		}
		if(a[i] == ')'){
			if(br.is_empty() == 0){
				br.pop();
			}
			else{ 	
				br.push(a[i]);
				cout << "Imbalanced" << endl;
				break;
			}
		}
		
	}

	if(br.is_empty()){
		cout << "Balanced" << endl;
	}	
	
	return 0;
}













