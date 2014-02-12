#include<iostream.h>
#include<conio.h>
class ll;
class node{
friend class ll;
private:int data;
node *link;
};
class ll{
int len;
node *first;
public:ll(){
first=NULL;
len=0;
}
void begin(int x);
void display();
};
void ll::begin(int x)
{
node *temp=new node;
temp->data=x;
temp->link=first;
first=temp;
len++;
}
void ll::display()
{
node *temp1;
for(temp1=first;temp1!=NULL;temp1=temp1->link)
cout<<temp1->data<<"->";
cout<<"\n";
}

void main()
{
ll l;
int a,rem;
cout<<"enter a num"<<"\n";
cin>>a;
while(a!=0)
{
rem=a%10;
l.begin(rem);
a=a/10;
}

l.display();

getch();
}

