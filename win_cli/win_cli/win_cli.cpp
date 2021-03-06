// win_cli.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

/// 引用STL
#include <vector>
#include <iterator>
#include <sstream>
#include <numeric>
#include <algorithm>


using namespace std;

int main()
{
	cout << "Entery your" << endl;



	double data[] { 2.5, 4.5, 6.5, 5.5, 8.5 };
	std::cout << "The array contains: \n";
	for (auto iter = std::begin(data); iter != std::end(data); ++iter) {
		std::cout << *iter << " ";
	}

	auto total = std::accumulate(std::begin(data), std::end(data), 0.0);
	std::cout << "\nThe sum of the array elements is " << total << std::endl;
    return 0;
}

