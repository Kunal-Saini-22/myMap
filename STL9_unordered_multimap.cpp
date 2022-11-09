#include<bits/stdc++.h>
using namespace std;
/*

    A quick Glance : 

    Map : 
    * no duplicate elements allowed 
    * unique key and value pairs only 
    * elements in sorted order
    * implemented by R-B tress
    * TC : O(log N)
    * []= is allowed
    
    Unordered_map :
    * no duplicate allowed 
    * unique key and value pairs only 
    * elements in random order.
    * implemented using hashtables
    * TC : O(1) to O(N)
    * []= is allowed
    
    multimap :
    * Allows multiple elements i.e a single 'key' can have multiple values.
    * To avoid ambiguity , []= is not allowed.
    
    Unordered_ multimap : it's like unordered map the only difference is unordered 
    multimaps can store duplicate elements.
    

*/

void printMap(unordered_multimap<string , int>&um)
{
    cout<<"\nThe required output : \n";
    for(auto i : um)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
}

int main()
{
    // 1. declaration 
    unordered_multimap<string,int>um;

    // 2. assigning values
    um.insert({"Kunal",5});
    um.emplace(make_pair("Yash",4));
    um.insert({"kannu",2});
    // um.insert({"kannu",1})

    // 3. Traversing map
      printMap(um);


  
  return 0;
}