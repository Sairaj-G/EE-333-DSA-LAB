// Write a program to remove outliers in window a linked list 

# include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(float x) : val(x), next(nullptr) {}
  ListNode(float x, ListNode *next) : val(x), next(next) {}
};
// Linked List Node definition

int main(){
	
	ListNode* it = new ListNode(-1); // starter node
	ListNode* head = it; // initializing head of the linked list
	
	cout << "Enter data" << "\n";
	
	for(int i = 0; i< 10; i++){
		ListNode* node = new ListNode;
		float data;
		cin >> data;
		node->val = data;
		it->next = node;
		it = it->next;
	}
	
	cout << "\n";
	
	int check[10] = {0}; // initializing array to see if the ith element in list is an outlier.
	
	it = head->next;
	
	for (int i = 0; i+ 3 < 10; i++){
		float sum = 0;
		ListNode* itt = it;
		for (int j = 0; j < 4; j++){
			sum = sum + itt->val;
			itt = itt->next;
		}
		cout << sum/4 << " ";
		itt = it;
		for (int j = 0; j < 4; j++){
			if(itt->val <= sum/20 || itt->val >= 1.25*sum){
				check[i+j] = -1;
			}
			// check for outlier
			itt = itt->next;
		}
		it = it->next;
	}
	
	it = head;
	
	cout << "\n";
	
	for (int i = 0; i < 10; i++){
		cout << check[i] << " ";
	}
	// display of outlier
	
	cout << "\n";
	it = head;
	
	for (int i = 0; i < 10 && it; i++){
		if(check[i] != -1){
			cout << it->val;
		}
		it = it->next;
	}
	
	return 0;
	
}
 
