#include<iostream>
#include<vector>
using namespace std;

//Vector define

void explainVector(){
    vector<int> v;

    //adding values
    v.push_back(1);
    v.emplace_back(2);

    //adding pair in vector
    vector< pair <int, int>> vec;
    vec.push_back({2,3});
    v.emplace_back(4,5);

    vector<int> v(5,100);

    //copying one vector to another
    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();

    vector<int>::reverse_iterator it2 = v.rend();

    vector<int>::reverse_iterator it3 = v.rbegin();

    cout<<v[0]<<" "<<v.at(0);

    cout<<v.back()<<" ";

    //syntax to print a vector

    for(vector<int>::iterator it =v.begin(); it !=v.end(); it++){
        cout<<*(it)<<" ";
    }

    //auto 

    for(auto it = v.begin(); it!= v.end(); it++){
        cout<<*(it)<<" ";
    }

    for (auto it: v){
        cout<<it<<" ";
    }

    //deleting in values from vectors

    //{10, 20, 12, 23}
    v.erase(v.begin()+1);
    //20 will get erased new vector will {10, 12, 23}

    //{10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4);
    // new vector will be{10, 20,35} it refers as(start, end)

    //insertion in vector

    vector<int>(2,100);//{100, 100}
    v.insert(v.begin(),300);//{300, 100, 100}
    v.insert(v.begin()+1, 2, 10);//{300, 10, 10, 100, 100}

    vector<int> copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(), copy.end());//{50,50,300,10,10,10,100, 100}

    //{10,20}
    cout<<v.size();//2
    
    //{10,20}
    v.pop_back();//{20}
    v1.swap(v2);

    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2);//v1{30,40} v2->{10,20}

    v.clear(); //erases the entire vector

    cout<<v.empty();
}   
int main(){
    explainVector();
    return 0;
}