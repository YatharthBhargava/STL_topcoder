#include<bits/stdc++.h>
using namespace std; // all the stl are defined in the std namespace and not the global namespace
int main(){
    //std::vector< int > v;//declaration of vectors
    //vector< vector< int > > CorrectDefinition;
    //vector<vector<int>> WrongDefinition; // Wrong: compiler may be confused by 'operator > >'
    vector< int > v(10);//vector with size of 10 intialized with 0s

    int elements_count = v.size();

    bool is_nonempty_notgood = (v.size() >= 0); // Try to avoid this ||This is because not all the containers can report their size in O(1), and you definitely should not require counting all elements in a double-linked list just to ensure that it contains at least one.
    bool is_nonempty_ok = !v.empty();// correct!

    vector< int > v;
    for(int i = 1; i < 1000000; i *= 2) {// dont worry about mem allocation vector actually allocates more than 1 memory at a time
        v.push_back(i);     // but push_back increases the size of the vector by 1
    }
    int elements_count = v.size();
//
    vector< int > v(20);
    for(int i = 0; i < 20; i++) {
        v[i] = i+1;
    }
    v.resize(25);   // if the resize > original size fills the extras with 0s else removes the last elements
    for(int i = 20; i < 25; i++) {
        v[i] = i*2;
    }
//
    vector< int > v(20);
    for(int i = 0; i < 20; i++) {
        v[i] = i+1;
    }   // if u use push_back after resize it will insert elements after the "resized vector"
    v.resize(25);
    for(int i = 20; i < 25; i++) {
        v.push_back(i*2); // Writes to elements with indices [25..30), not [20..25) ! <
    }
//
    //To clear a vector use clear() member function. This function makes vector to contain 0 elements
//
    //initializing a vector
    vector< int > v1;
    // ...
    vector< int > v2 = v1;
    vector< int > v3(v1);
    //The initialization of v2 and v3 in the example above are exactly the same.
//
    //vector of specific size.
    vector< int > v(size);
    //creates vector of size "size" with all entries equal to 0.
//
    //all values initialized with something else.
    vector< string > names(20, "unknown");
//
    //vector of vectors
    vector< vector < int > > Matrix;
    vector< vector < int > > Matrix(N, vector < int > (M, -1));
    //here we create a matrix of size N*M and fill it with all -1s;
//
    //When vector is passed as a parameter to some function, a copy of vector is actually created.
    // It may take a lot of time and memory to create new vectors when they are not really needed.
    void some_function(vector< int > v) { // Never do it unless you’re sure what you do!
    // ...
    }
    //instead, use the following
    void some_function(const vector< int >& v) { // OK
    // ...
    }
    // if u are going to change the entries of the vector just omit the const
    void modify_vector(vector< int >& v) { // Correct
    v[0]++;
    }
}
