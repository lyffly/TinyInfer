#pragma once

#include "common.h"



__global__ void nchw2nhwc_fp16_kernel(float16* in, float16* out, size_t len) {

	size_t index = blockIdx.x * blockDim.x + threadIdx.x;
	if (index > len) return;
	// todo
};


__global__ void fp32_to_fp16_kernel(float* in, float16* out,size_t len) {

	size_t index = blockIdx.x * blockDim.x + threadIdx.x;
	if (index > len) return;
	out[index] = __float2half(in[index]);

};

__global__ void fp16_to_fp32_kernel(float16* in, float* out, size_t len) {

	size_t index = blockIdx.x * blockDim.x + threadIdx.x;
	if (index > len) return;
	out[index] = __half2float(in[index]);

};
