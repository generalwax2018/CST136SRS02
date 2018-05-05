#pragma once
class chart
{
	enum class Geography{water, land, boundry};
	Geography geography_[10][10]; 
public:
	chart();
	~chart();
};

