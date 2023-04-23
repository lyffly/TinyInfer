#pragma once
#pragma once
#include "layer.h"
#include "op_relu.h"

class LayerRelu : public Layer {

public:
	~LayerRelu() override = default;
	explicit LayerRelu(const std::shared_ptr<Operator> &op);
	void Forward() override;


	static std::shared_ptr<Layer> CreateInstance(const std::shared_ptr<Operator> &op);

private:
	std::shared_ptr<OpRelu> op_;

};
