#pragma once

#include "tensor.h"
#include "op.h"

class Layer {
private:
	std::string name_;

public:

	explicit Layer(const std::string &name);
	virtual void Forward(std::vector<std::shared_ptr<Tensor>>& ins, 
			std::vector<std::shared_ptr<Tensor>>& outs) = 0;
	virtual ~Layer() = default;


};

//typedef std::map<OpType, Creator> CreateRegistry;
//typedef std::shared_ptr<Layer>(*Creator)(const std::shared_ptr<Operator>& op);
