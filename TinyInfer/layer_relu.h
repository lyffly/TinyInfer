
#pragma once
#include "layer.h"


class LayerRelu : public Layer {

public:
	~LayerRelu() override = default;
	explicit LayerRelu(const std::string& name);
	void Forward(std::vector<std::shared_ptr<Tensor>> &ins, 
			std::vector<std::shared_ptr<Tensor>> &outs) override;


	//static std::shared_ptr<Layer> CreateInstance();

private:
	

};
