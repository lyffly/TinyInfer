#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "stdlib.h"

class Layer {
private:
	std::string layer_name_;

public:

	explicit Layer(const std::string &name);
	virtual void Forward();
	virtual ~Layer() = default;


};
