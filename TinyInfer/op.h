#pragma once

enum class OpType
{
	OpTypeUnknown = -1,
	OpTypeConv = 0,
	OpTypeRelu = 1,
};

class Operator {

public:
	OpType op_type_ = OpType::OpTypeUnknown;

	virtual ~Operator() = default;

	explicit Operator(OpType op_type);

};



