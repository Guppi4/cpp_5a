#include "OrgChart.hpp"
#include <iterator>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
using namespace ariel;
vector<string>::iterator return_vec()//return vector of iterator
{
    vector<string>::iterator vec;
    return vec;
}
OrgChart::OrgChart() {}

OrgChart &OrgChart::add_root(string root)
{
     if (root=="No")
        {
            throw runtime_error("root not exist");
        }
    return *this;
}

OrgChart &OrgChart::add_sub(string root, string sub)
{
    return *this;
}

vector<string>::iterator OrgChart::begin_level_order()
{
   
    return return_vec();
}

vector<string>::iterator OrgChart::end_level_order()
{
    return return_vec();
}

vector<string>::iterator OrgChart::begin_reverse_order()
{
     return return_vec();
}

vector<string>::iterator OrgChart::reverse_order()
{
     return return_vec();
}

vector<string>::iterator OrgChart::begin_preorder()
{
     return return_vec();
}

vector<string>::iterator OrgChart::end_preorder()
{
     return return_vec();
}

vector<string>::iterator OrgChart::begin()
{
     return return_vec();
}
vector<string>::iterator OrgChart::end()
{
    return return_vec();
}
ostream &ariel::operator<<(ostream &out, const OrgChart &p)
{
    return out;
}