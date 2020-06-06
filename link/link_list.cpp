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
  while(cur->getNext() != NULL) {
    cout<<cur->getData()<<" ";
  }
  cout<<endl;

}
