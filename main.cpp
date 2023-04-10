#include <bits/stdc++.h>

using namespace std;

//вывод пары
template<typename X, typename Y>
ostream& operator<<(ostream& o, const pair<X, Y>& p)
{
    return o << "<" << p.first << ", " << p.second << ">" << "\n";
}

//вывод вектора
template<typename T>
ostream& operator<<(ostream& o, const vector<T> & a)
{
    for (size_t i = 0; i < a.size(); ++i){
        o << a[i] << " ";
    }
    o << '\n';
    return o;
}

//вывод map
template<typename X, typename Y>
ostream& operator<<(ostream& o, const map<X, Y> & mp)
{
    for (auto i : mp){
        o << i;
    }
    o << '\n';
    return o;
}

int main(){
    
    return 0;
}
