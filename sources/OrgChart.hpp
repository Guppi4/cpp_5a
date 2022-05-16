#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <map>
using namespace std;

namespace ariel
{
    class OrgChart
    {
    private:
        
        struct Node
        {
            string value;
            map<string, string> subs;
        };
        Node* root;
       
    public:
        string root_name;
        OrgChart();
        OrgChart &add_root(string root);
        OrgChart &add_sub(string root, string sub);
        vector<string>::iterator begin_level_order(); // level order
        vector<string>::iterator end_level_order();
        vector<string>::iterator begin_reverse_order(); // level order reverse
        vector<string>::iterator reverse_order();
        vector<string>::iterator begin_preorder(); // preorder
        vector<string>::iterator end_preorder();
        vector<string>::iterator begin();
        vector<string>::iterator end();
        friend ostream &operator<<(ostream &out, const OrgChart &p);
        string getroot();
    };
}