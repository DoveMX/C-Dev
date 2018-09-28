//
// Created by Administrator on 9/28/2018.
//

#include <iostream>
#include "CQ008.h"


namespace CQuestionsTest {
    class HasPtrMem {
    public:
        HasPtrMem(): d(new int(0)) {
            std::cout << __func__ << "::Construct: " << ++n_cstr << std::endl;
        }
        HasPtrMem(HasPtrMem& h): d(new int(*h.d)) {
            std::cout << __func__ << "::Copy construct: " << ++n_cptr << std::endl;
        }
        HasPtrMem(const HasPtrMem& h): d(new int(*h.d)) {
            std::cout << __func__ << "::Copy construct: " << ++n_cptr << std::endl;
        }
        HasPtrMem(HasPtrMem &&h): d(h.d) {
            h.d = nullptr;
            std::cout << __func__ << "::Move construct: " << ++n_mvtr << std::endl;
        }
        virtual ~HasPtrMem() {
            delete d;
            std::cout << __func__ << "::Destruct: " << ++n_dstr << std::endl;
        }

    public:
        int *d;
        static int n_cstr;
        static int n_dstr;
        static int n_cptr;
        static int n_mvtr;
    };

    int HasPtrMem::n_cstr = 0;
    int HasPtrMem::n_dstr = 0;
    int HasPtrMem::n_cptr = 0;
    int HasPtrMem::n_mvtr = 0;

    HasPtrMem GetTemp() {
        HasPtrMem h;
        std::cout << "Resource from " << __func__ << ": " << std::hex << h.d << std::endl;
        return h;
    }

    CQ008::CQ008() : _className(__func__), _description("演示移动构造函数的好处") {
        std::cout << _className << "\n" << _description << std::endl;
    }

    CQ008::~CQ008() {
        std::cout << _className << "::" << __func__ << std::endl;
    }

    void CQ008::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }

    void CQ008::Run() {
        std::cout << _className << "::" << __func__ << std::endl;

        HasPtrMem a(GetTemp());
        std::cout << "Resource from " << __func__ << ": " << std::hex << a.d << std::endl;

        PrintLine();
    }
}
