//
// Created by Administrator on 9/20/2018.
//

#include <iostream>
#include "CQ001.h"

using CQuestionsTest::CQ001;

CQ001::CQ001():_description("演示如何解决链表反转问题") {
    std::cout << __func__ << "\n" << _description <<std::endl;
}

CQ001::~CQ001() {
    std::cout << __func__ << std::endl;
}

void CQ001::Run() {
    link_unit* ele1 = new link_unit();
    ele1->data = 0;

    link_unit* ele2 = new link_unit();
    ele2->data = 1;
    ele1->next = ele2;

    link_unit* ele3 = new link_unit();
    ele3->data = 2;
    ele2->next = ele3;

    link_unit* ele4 = new link_unit();
    ele4->data = 3;
    ele3->next = ele4;

    ele4->next = NULL;

    link_unit* cur = ele1;
    while (cur) {
        std::cout << cur->data << " ";
        cur = cur->next;
    }
    std::cout << std::endl;

    /// 调用反转函数
    Reverse(ele1);
    cur = ele1;
    while (cur) {
        std::cout << cur->data << " ";
        cur = cur->next;
    }
    std::cout << std::endl;

    PrintLine();
}

void CQ001::PrintLine() const {
    std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
}


void CQ001::Reverse(link_unit*& head) {
    if (head == NULL) {
        return;
    }

    link_unit* pre, *cur, *nxt;
    pre = head;
    cur = head->next;

    while(cur) {
        nxt = cur->next;
        cur->next = pre;
        pre = cur; /// 一直到末尾，将末尾作为第一个元素
        cur = nxt;
    }

    head->next = NULL;
    head = pre;
}