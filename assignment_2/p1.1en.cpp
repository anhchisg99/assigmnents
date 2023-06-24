#include<iostream>
using namespace std;

class node
{

public:
    int info;
    node *pNext;
    node(int data)
    {
        info = data;
        pNext = NULL;
    }
};
class list
{

public:
    node *pTail;
    node *pHead;
    list()
    {
        this->pTail = NULL;
        this->pHead = NULL;
    }
    void addTail(int data)
    {
        node *p = new node(data);
        if (pHead == NULL)
            pHead = pTail = p;
        else
        {

            pTail->pNext = p;
            pTail = p;
        }
    }
    void input_list()
    {
        while (1)
        {
            int n;
            cin >> n;
            if (n == 0)
                break;
            addTail(n);
        }
    }
    void output_list()
    {

        node *p = pHead;
        if (pHead == NULL)
        {
            cout << "Danh sach rong.";
        }
        else
        {
            cout << "Danh sach vua nhap la: ";
            while (p)
            {

                cout << p->info << " ";
                p = p->pNext;
            }
        }
    }
};

int main()
{
    list l;
    l.input_list();

    l.output_list();

    return 0;
}