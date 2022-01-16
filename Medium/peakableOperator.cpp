class PeekableIterator {
private:
    vector<int>nums;
    int it,size;
public: 
    PeekableIterator(vector<int>& num) {
        nums = num;
        size = num.size();
        it = -1;
    }

    int peek() {
        if(it  + 1< size){
            return nums[it + 1];
        }
        return 0;
    }

    int next() {
        it += 1;
        return nums[it];
    }

    bool hasnext() {
        if(it + 1 < size){
            return true;
        }
        return false;
    }
};