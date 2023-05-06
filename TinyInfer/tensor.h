#pragma once
#include "common.h"

class Tensor
{

public:
	Tensor() = default;
	Tensor(int h, int w,int c);
	~Tensor() = default;

private:
	
	void* data;
	int c;
	int h;
	int w;
	std::vector<int> shapes_;
};
