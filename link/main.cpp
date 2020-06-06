//
// Created by svenlee on 2020/6/6.
//

#include <iostream>
#include "link_list.h"
#include "node.h"


using namespace std;


int main(int argc, char** argv) {

  LinkList* linkList = new LinkList();

  int linkLen = linkList->getLength();

  cout<<"linkLen:"<<linkLen<<endl;

  linkList->show();
}
