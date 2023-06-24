#include<iostream>

using namespace std;


struct Node{
	int data;
	Node *next;
};
struct List{
	Node *head;
	Node *tail;

};
void initList(List &l){
	l.head = NULL;
l.tail= NULL;	
}
void nhapNode(List &l,int x){
	Node*p = new Node;
	p->data = x;
	p->next = NULL;
	if(l.head ==NULL)l.head=l.tail=p;
	else{
		l.tail->next = p;
		l.tail = p;
	}
}
void input(List &l){
	while(1){
		int x;
		cin >> x;
		if(x==0)break;
		nhapNode(l,x);
	}
}

void output(List l){
	if(l.head == NULL){
		cout << "Danh sach rong.";
	}
	else{
		int count = 0;
		Node*p = l.head;
			cout << "Danh sach vua nhap la:";
		while(p!=NULL){
			count++;
			cout << " " << p->data;
			p=p->next;
		}
		cout << "\n";
		cout << "Danh sach co " << count << " phan tu.";
	}
}
int main(){
	List l ;
	initList(l);
	input(l);
	output(l);
	return 0;
}
