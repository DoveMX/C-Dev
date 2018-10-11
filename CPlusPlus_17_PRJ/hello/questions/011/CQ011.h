//
// Created by Administrator on 10/7/2018.
//

#ifndef HELLO_CQ011_H
#define HELLO_CQ011_H

#include <iostream>
#include <string>


namespace CQuestionsTest {
    namespace CQ011Private {
        //TODO: Code here
    };

    class CQ011 {
    public:
        CQ011();

        virtual ~CQ011();

        void Run();

    private:
        void PrintLine() const;

        std::string _description;
        std::string _className;
    };
}


#endif //HELLO_CQ011_H
