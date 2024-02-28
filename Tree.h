#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>

template <typename T>
class Tree
{
public:
	void setTree(std::string tree_str);
private:
	T node_;

};

