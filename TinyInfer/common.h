#pragma once
#include "cuda.h"
#include "cuda_fp16.h"
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include "stdlib.h"


typedef __half float16;
//typedef char int8_t;


enum OpType
{
	OpTypeNull = 0,
	OpTypeConv = 1,
	OpTypeRelu = 2,
	OpTypeLeakyRelu = 3,
	OpTypeMaxPool = 4,
	OpTypeAvgPool = 5,
	OpTypeGlobalAvgPool = 6,
	OpTypeGemm = 7,
	OpTypeMatMul = 8,
	OpTypeBN = 9,
	OpTypeAdd = 10,
	OpTypeMul = 11,
	OpTypeConcat = 12,
	OpTypeSoftMax = 13,

};

enum TensorDataType
{
	DataTypeNull = 0,
	DataTypeInt8 = 1,
	DataTypeFp16 = 2,
	DataTypeFp32 = 3,
	DataTypeInt32 = 4,
};


enum TensorDataFormat
{
	DataFormatNull = 0,
	DataFormatCHW = 1,
	DataFormatHWC = 2,
	DataFormatNCHW = 3,
	DataFormatNHWC = 4,
	DataFormatNCDHW = 5,
	DataFormatNDHWC = 6,
};

