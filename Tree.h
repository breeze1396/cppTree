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

using std::string;

template <typename T>
class Tree
{
public:
	void setTree(std::string tree_str);
	void getTree() const;
	void printTree() const;
private:
	void setTreeWithPrefixAndMid(string pre_str, mid_str);
	void setTreeWithSharp(string tree_str);

private:
	T node_;

};

