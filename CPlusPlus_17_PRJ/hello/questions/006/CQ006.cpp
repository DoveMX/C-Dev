//
// Created by Administrator on 9/24/2018.
//

#include <cstring>
#include "CQ006.h"

namespace CQuestionsTest {

    CQ006::CQ006():_className(__func__),_description("演示几个算法问题") {
        std::cout << _className << "\n" << _description <<std::endl;
    }

    CQ006::~CQ006() {
        std::cout << _className << "::" <<__func__ << std::endl;
    }

    void FindSecondMaxNum(int data[], int count) {
        std::cout << __func__ << "\n" << "写一个函数找出一个整数数组中，第二大的数 （microsoft）" <<std::endl;

        const int MINNUMBER = -32767;
        int max_number = data[0];
        int sec_max = MINNUMBER;
        for (int i = 1; i < count; i++) {
            if (data[i] > max_number) {
                sec_max = max_number;
                max_number = data[i];
            } else {
                if (data[i] > sec_max) {
                    sec_max = data[i];
                }
            }
        }

        //
        std::cout << "SEC_NUMBER = " << sec_max << std::endl;
    }


    /**
     * @brief 获取KMP最重要的Next匹配表的算法
     * @param P
     * @param next
     */
    void MakeKMP_Next(const char P[], int next[]) {
        int q, k;
        int m = strlen(P);
        next[0] = 0;

        for (q = 1, k = 0; q < m; ++q) {
            while(k > 0 && P[q] != P[k]) {
                k = next[k-1];
            }

            if (P[q] == P[k]) {
                k++;
            }
            next[q] = k;
        }
    }

    /**
     * @brief 核心KMP算法
     * @param T
     * @param P
     * @param next
     * @return
     */
    int Core_KMP(const char T[], const char P[], int next[]) {
        int n, m;
        int i, q;
        n = strlen(T);
        m = strlen(P);
        MakeKMP_Next(P, next);

        for(i = 0, q = 0; i < n; ++i) {
            while(q > 0 && P[q] != T[i]) {
                q = next[q -1];
            }
            if (P[q] == T[i]) {
                q++;
            }
            if (q == m) {
                printf("Pattern occurs with shift:%d\n",(i-m+1));
            }
        }

        return 0;
    }

    int FindSubStrinPosgByKMP() {
        std::cout << __func__ << "\n" << "写一个在一个字符串(n)中寻找一个子串(m)第一个位置的函数" <<std::endl;

        int next[20] = {0};
        char T[] = "ababxbababcadfdsss";
        char P[] = "abcdabd";
        printf("T = %s\n",T);
        printf("P = %s\n",P );
        Core_KMP(T,P,next);

        for(int i = 0; i < strlen(P); ++i) {
            printf("%d ",next[i]);
        }
        printf("\n");

        return 0;
    }

    int kmp_find(const std::string& target,const std::string& pattern)
    {
        const int target_length = target.size();
        const int pattern_length = pattern.size();
        int * overlay_value = new int[pattern_length];
        overlay_value[0] = -1;
        int index = 0;
        for(int i=1;i<pattern_length;++i)
        {
            index = overlay_value[i-1];
            while(index>=0 && pattern[index+1]!=pattern[i])
            {
                index = overlay_value[index];
            }
            if(pattern[index+1]==pattern[i])
            {
                overlay_value[i] = index +1;
            }
            else
            {
                overlay_value[i] = -1;
            }
        }
        //match algorithm start
        int pattern_index = 0;
        int target_index = 0;
        while(pattern_index<pattern_length&&target_index<target_length)
        {
            if(target[target_index]==pattern[pattern_index])
            {
                ++target_index;
                ++pattern_index;
            }
            else if(pattern_index==0)
            {
                ++target_index;
            }
            else
            {
                pattern_index = overlay_value[pattern_index-1]+1;
            }
        }
        if(pattern_index==pattern_length)
        {
            return target_index-pattern_index;
        }
        else
        {
            return -1;
        }
        delete [] overlay_value;
    }


    void CQ006::Run() {
        std::cout << __func__ << std::endl;
        int num_data[5] = {2938,438328,5994,323,9328};
        FindSecondMaxNum(num_data, 5);
        PrintLine();
        FindSubStrinPosgByKMP();
        PrintLine();

        /// 核心代码
        std::cout << __func__ << "\n" << "KMP算法C++实现" <<std::endl;
        std::string source = " ababxbabababcdabdcadfdsss";
        std::string pattern = " abcdabd";
        std::cout<<kmp_find(source,pattern)<<std::endl;
        PrintLine();


        ///
        std::cout << __func__ << "\n" << "测试结果输出" <<std::endl;
        int n[][3] = {10, 20, 30, 40, 50, 60};
        int (*p)[3];
        p = n;
        std::cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << std::endl;
        PrintLine();


        /// 计算地址. 主要
        std::cout << __func__ << "\n" << "测试指针位置" <<std::endl;
        unsigned char* p1;
        unsigned int* p2;
        p1 = (unsigned char*)0x810000;
        p2 = (unsigned int*)0x820000;
        unsigned char* p3 = p1 + 5;
        unsigned char* p5 = p3 + 5;
        unsigned int* p4 = p2 + 5;
        unsigned int* p6 = p4 + 5;

        int d = p6 - p4;

        std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
        std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
        PrintLine();
    }

    void CQ006::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }


}