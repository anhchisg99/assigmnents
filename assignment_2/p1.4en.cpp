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
int nguyento(int x){
	if(x <0) return 0;
	for(int i =2;i<x;i++){
		if(x%i==0 ) return 0;
	}
	return 1;
}
void output(List l){
	if(l.head == NULL){
		cout << "Danh sach rong.";
	}
	else{
		int count = 1;
		int le = 0;
		Node*p = l.head;
			cout << "Danh sach vua nhap la:";
		while(p!=NULL){
			cout << " " << p->data;
			if(count%2!=0 && nguyento(p->data)==1) le++;
			count++;
			p=p->next;
		}
		cout << "\n";
		cout << "Danh sach co " << le << " so nguyen to o vi tri le.";
	}}
int main(){
	List l ;
	initList(l);
	input(l);
	output(l);

}
