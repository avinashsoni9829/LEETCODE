class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(inHash[key]) {
            return;
        }
        inHash[key] = true;
    }
    
    void remove(int key) {
        if(!inHash[key]) {
            return;
        }
        inHash[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return inHash[key];
    }
    
private:
    const int kMod = 1000001; // Hash modulo parameter
    bool inHash[1000001] = { false }; // An array to indicate whether a value is inserted or not
};
