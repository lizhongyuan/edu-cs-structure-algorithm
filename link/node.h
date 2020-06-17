//
// Created by svenlee on 2020/6/6.
//

#ifndef EDU_CS_STRUCTURE_ALGORITHM_NODE_H
#define EDU_CS_STRUCTURE_ALGORITHM_NODE_H


class LinkNode {

// private:
public:
  int data;

  LinkNode *next;

  LinkNode *prev;

// public:
  LinkNode(int data);

  int getData() { return data; }

  LinkNode* getNext() { return next; }

  LinkNode* getPrev() { return prev; }

};


#endif //EDU_CS_STRUCTURE_ALGORITHM_NODE_H
