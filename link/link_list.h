#ifndef EDU_CS_STRUCTURE_ALGORITHM_LINK_LIST_H
#define EDU_CS_STRUCTURE_ALGORITHM_LINK_LIST_H


#include <iostream>
#include "node.h"


class LinkList {

// private:
public:
  LinkNode* head;
  int length;

// public:

  LinkList();

  LinkNode* getHead() { return head; }

  int getLength() { return length; }

  void show();

  bool insert(int pos, LinkNode* node);
};


#endif //EDU_CS_STRUCTURE_ALGORITHM_LINK_LIST_H
