#include <iostream>
#include "link_list.h"
#include "node.h"


using namespace std;


LinkList::LinkList() {
  head = NULL;
  length = 0;
};


void LinkList::show() {

  if (head == NULL) {
    cout<<"Empty list"<<endl;
    return;
  }

  LinkNode* cur = getHead();
  while(cur != NULL) {
    cout<<cur->getData()<<" ";
    cur = cur->getNext();
  }
  cout<<endl;

}


bool LinkList::insert(int pos, LinkNode* node) {

  if (pos < 0) {
    return false;
  } else if (pos > getLength()) {
    return false;
  }

  if (head == NULL) {
    head = node;
    return true;
  }

  if (pos == 0) {

    node->next = head;
    head = node;

    return true;
  } else {

    LinkNode* cur = head;
    while (pos - 1 > 0) {
      cur = cur->next;
      pos--;
    }

    node->next = cur->next;
    cur->next = node;

    return true;
  }
}
