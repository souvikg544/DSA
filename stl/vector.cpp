#include<iostream>
#include<vector>
using namespace std;
void explainVector()
{
    //i container is vector
    //vector is like array but they are indynamic in nature 
    //whree u can cahnge size when require
    //in push back we have give curlybrace to insrt element .......but no need of curly brace in emplace back function to insert element 

    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;
    v.push_back({1,2});
    v.emplace_back(2);

    vector<int> v(5,100);
    vector<int>v(5);
    //instance
    //means print that value(5,20)----->print 20tym 5
    vector<int>v1(5,20);
    vector<int>v2(v1);


}