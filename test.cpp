// mx_virus.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "base64.h"
#include <iostream>

int main() {
	
	
	std::string rest0_original = "demo";

	std::string rest0_encoded = base64_encode(reinterpret_cast<const unsigned char*>(rest0_original.c_str()),
		rest0_original.length());
	std::string rest0_decoded = base64_decode(rest0_encoded);

	std::cout << "encoded:   " << rest0_encoded << std::endl;
	std::cout << "decoded:   " << rest0_decoded << std::endl << std::endl;



	return 0;
}