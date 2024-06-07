#include <iostream.h>
struct node{
		int data;
		node *next;
	};
node *start = NULL;
int insert_at_big(int value1){
	node *temp=new node;
	temp->data=value1;
	temp->next=NULL;
	if (start==NULL){
			start=temp;
		}
	else{
			temp->next=start;
			start=temp;
		}
}
int insert_at_the_end(int value2){
	node * temp=new node;
	temp->data=value2;
	temp->next=NULL;
	if (start==NULL){
			start=temp;
		}
	else if (start->next==NULL){
			start->next=temp;
		}
	else{
			node *t=start;
			while (t->next!=NULL){
					t=t->next;
				}
			t->next=temp;
		}
}
int insert_at_the_mid(int value3,int postion){
	node *temp=new node;
	temp->data=value3;
	temp->next=NULL;
	node * tepp=start;
	for (int i=1;i<postion;i++){
			tepp=tepp->next;
		}
	temp->next=	tepp->next;
	tepp->next=temp;
}
int delete_at_the_begining(){
	if (start==NULL){
			cout<<" The list is Empty"<<endl;
		}
	else if (start->next==NULL)
		{
			start=NULL;
			cout << " The Frist Data is Delete"<<endl;
		}
	else
		{
			start=start->next;
			cout << " The Frist Data is Delete"<<endl;
		}
}
int delete_at_the_mid(int postion){
	node *temp=start;
	node *temp1=start;
	for (int i=1;i<postion;i++){
			temp=temp1->next;
			temp1=temp->next;
		}
	temp->next=temp1->next;
	cout << " The Data is Delete"<<endl;
}
int delete_at_the_end(){
	node *temp1=start;
	node *temp2=start;
	while (temp1->next!=NULL){
			temp2=temp1;
			temp1=temp2->next;
		}
	temp2->next=NULL;
	cout << " The Last Data is Delete"<<endl;
}
int display(){
	if (start==NULL){
			cout<<" Empty list";
		}
	else{
			node *temp=start;
			while (temp->next!=NULL){
					cout<<" " <<temp->data << " ";
					temp=temp->next;
				}
			cout<<temp->data;
		}
	cout<<endl;
}
int main() {
	int Choise, Data, Index, Re = 1;
	cout << "\t\tLinked List\n";
	cout << "\t============================\n\n";
	do {
			cout << "\tMain Menu";
			cout <<"\n ------------------------------\n";
			cout << " |1 Display All Data          |\n";
			cout << " |2 Insert Data at the Frist  |\n";
			cout << " |3 Insert Data at the Mid    |\n";
			cout << " |4 Insert Data at the End    |\n";
			cout << " |5 Delete at the Frist       |\n";
			cout << " |6 Delete at the Mid         |\n";
			cout << " |7 Delete at the End         |\n";
			cout << " |8 Exit                      |";
			cout <<"\n ------------------------------";
			cout << "\n\n Enter your Choise ";
			cin >> Choise;
			switch (Choise){
				case 1:
					cout << "\n\n Display Data\n";
					cout << " --------------------------\n";
					display();
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 2:
					cout << "\n\n Insert Data at the Frist\n";
					cout << " --------------------------\n";
					cout << " Enter Data to Insert ";
					cin >> Data;
					insert_at_big(Data);
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 3:
					cout << "\n\n Insert Data at the Mid\n";
					cout << " --------------------------\n";
					cout << " Enter Data to be Inserted  ";
					cin >> Data;
					cout << " Enter ware to Put ";
					cin >> Index;
					insert_at_the_mid(Data,Index);
					cout << " --------------------------\n";
					cout << endl;
					break;
				case 4:
					cout << "\n\n Insert Data at the End\n";
					cout << " --------------------------\n";
					cout << " Enter Data to Insert ";
					cin >> Data;
					insert_at_the_end(Data);
					cout << " --------------------------\n";
			cout << endl;
			break;
		case 5:
			cout << "\n\n Delete at the Frist \n";
			cout << " --------------------------\n";
			if (start==NULL){
					cout<<" The list is Empty"<<endl;
				}
			else{
					delete_at_the_begining();
				}
			cout << " --------------------------\n";
			cout << endl;
			break;
		case 6:
			cout << "\n\n Delete at the Mid \n";
			cout << " --------------------------\n";
			if (start==NULL){
					cout<<" The list is Empty"<<endl;
				}
			else{
					cout << " Enter from ware to delete ";
					cin >> Index;
					delete_at_the_mid(Index);
				}
			cout << " --------------------------\n";
			cout << endl;
			break;
		case 7:
			cout << "\n\n Delete at the End \n";
			cout << " --------------------------\n";
			if (start==NULL){
					cout<<" The list is Empty"<<endl;
				}
			else{
					delete_at_the_end();
				}
			cout << " --------------------------\n";
			cout << endl;
			break;
		case 8:
			return 0;
			break;
		default:
			cout << " Enter the corrt No\n\n";
		}
}while (Re == 1);
return 0;
}

