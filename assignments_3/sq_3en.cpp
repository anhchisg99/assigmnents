#include<iostream>

using namespace std;

struct StackNode{
	int value;
	StackNode *next;
};
class DynIntStack{
	private:
		StackNode *top;
	public:

		DynIntStack(void);
		void push(int);
		void pop(int &);
		bool isEmpty();
};
DynIntStack::DynIntStack(){
	top  =NULL;
}
void DynIntStack::push(int num){
	StackNode *newNode;
	newNode = new StackNode;
	newNode->value = num;

	if(isEmpty()){
		top = newNode;
		newNode->next  = NULL;
	}
	else{
		newNode->next = top;
		top  = newNode;
	}
}
void DynIntStack::pop(int &num){
	StackNode *temp;
	if(isEmpty())cout << "The stack is empty.\n";
	else{
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}
bool DynIntStack::isEmpty(void){
	bool status;
	if(top == NULL) status =true;
	else status = false;
	return status;
}
int main(){
	DynIntStack stack;

	int n;
	int catchVar;
	cin >> n;
	int count = 0;
	while(n>0){
		int value = n%2;
		stack.push(value);
		n=n/2;
		count++;
	}

	for(int i =0;i<count;i++){
		stack.pop(catchVar);
		cout << catchVar;
	}
	return 0;
}
