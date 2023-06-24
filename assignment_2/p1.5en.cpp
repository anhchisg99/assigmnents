#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;

};
struct List{
	Node *head;
	Node *tail;
};
void initList(List &l){
	l.head = NULL;
	l.tail =NULL;
}
void addTail(List &l, int x){
	Node *p = new Node;
	p->next = NULL;
	p->data= x;
	if(l.head ==NULL)l.head=l.tail = p;
	else{
		l.tail->next= p;
		l.tail = p;
	}
}
void input(List &l){
	while(1){

	int n ;
	cin >> n;
	if(n==0)break;
	addTail(l,n);
	}
}
void output(List l){
	Node*p = l.head;
	if(l.head ==NULL)cout << "Danh sach rong.";
	else{
	cout << "Danh sach vua nhap la:";
	while(p!=NULL){
		cout << " "<< p->data;
		p=p->next;
	}

	}
}
void oddOutput(List l){
	Node*p = l.head;
	if(l.head ==NULL)cout << "Danh sach rong.";
	else{
	cout << "Cac so chan trong danh sach la:";
	while(p!=NULL){
		cout << " "<< p->data;
		p=p->next;
	}

	}
}
void evenOutput(List l){
	Node*p = l.head;
	if(l.head ==NULL)cout << "Danh sach rong.";
	else{
	cout << "Cac so le trong danh sach la:";
	while(p!=NULL){
		cout << " "<< p->data;
		p=p->next;
	}

	}
}
void oddList(List l1,List &l2){
	Node *p = l1.head;
	while(p!=NULL){
		if(p->data%2==0){
			Node*p2 = l2.head;
			int count = 0;
			while(p2!=NULL){

				if(p2->data == p->data)
				{
					count++;
				}

				p2=p2->next;
			}
			if(count==0){
				addTail(l2,p->data);
			}
		}
		p=p->next;
	}
	

}

void evenList(List l1,List &l2){
	Node *p = l1.head;
	while(p!=NULL){
		if(p->data%2!=0){
			Node*p2 = l2.head;
			int count = 0;
			while(p2!=NULL){

				if(p2->data == p->data)
				{
					count++;
				}

				p2=p2->next;
			}
			if(count==0){
				addTail(l2,p->data);
			}
		}
		p=p->next;
	}
	

}
int main(){
	List l ;
	List l2;
	List l3;
	initList(l2);
	initList(l3);
	initList(l);
	input(l);
	output(l);
	cout << "\n";
	oddList(l,l2);
	evenList(l,l3);
	if(l.head!=NULL){
	oddOutput(l2);
	cout << "\n";
	evenOutput(l3);
	cout << "\n";

	}
	return 0;
}
