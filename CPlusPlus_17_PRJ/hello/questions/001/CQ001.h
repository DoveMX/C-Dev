//
// Created by Administrator on 9/20/2018.
//

#ifndef HELLO_CQ001_H
#define HELLO_CQ001_H

#include <string>

namespace CQuestionsTest {

    /// 定义链表的单一结构
    struct link_unit {
        int data;
        link_unit* next;
    };



    class CQ001 {
    public:
        CQ001();
        virtual  ~CQ001();
        void Run();

    private:
        void PrintLine() const;
        void Reverse(link_unit*& head);


        std::string _description;
    };
}


#endif //HELLO_CQ001_H
