//
// Created by Administrator on 9/28/2018.
//

#ifndef HELLO_CQ008_H
#define HELLO_CQ008_H

#include <iostream>
#include <string>


namespace CQuestionsTest {
    class CQ008 {
    public:
        CQ008();

        virtual ~CQ008();

        void Run();

    private:
        void PrintLine() const;

        std::string _description;
        std::string _className;
    };
}


#endif //HELLO_CQ008_H
