class RollingMedian {
    public:
    priority_queue<int>smaller;
    priority_queue<int,vector<int>,greater<int> > larger;
    
    void add(int val) {
        smaller.push(val);
        larger.push(smaller.top());
        smaller.pop();
        if(larger.size() > smaller.size()){
            smaller.push(larger.top());
            larger.pop();
        }

    }

    double median() {
        // Odd
        if(larger.size() < smaller.size()){
            return smaller.top();
        }
        // even
        double answer = double(larger.top() + smaller.top()) / 2;
        return answer;
    }
};