#include"iostream"
using namespace std;

class linkl{
	public:
	int data;
	linkl *next;

	linkl(){
	next = NULL;
	}

};

void traverse(linkl *head){
	while(head != NULL){
	cout<<head->data<<endl;
	head = head->next;
}
}
void reverse(linkl *head){
	linkl *temp = NULL;
	linkl *prev = NULL;
	linkl *current = head;
	while(current != NULL){
	temp = current->next;
	current->next = prev ;
	prev = current ;
	current = temp;
}




	

	
}


int main(){
	linkl *list1 = new linkl;
	linkl *list2 = new linkl;
	linkl *list3 = new linkl;
	linkl *list4 = new linkl;
	list1->data = 1111;
	list1->next = list2;
	list2->data = 2222;
	list2->next = list3;
	list3->data = 3333;
	list3->next = list4;
	list4->data = 4444;
	
	traverse(list1);
	cout<<"reversing . . "<<endl;
	reverse(list1);
	
	traverse(list4);
	
	
	
	

	return 0;
}