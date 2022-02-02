class CircularQueue {
public:
    vector<int>nums;
    int frontp,rear,n;
    public:
    CircularQueue(int capacity) {
        nums.resize(capacity);
        frontp = -1;
        rear = -1;
        n = capacity;
    }

    bool enqueue(int val) {
        if(isFull()){
            return false;
        }
        if(frontp == -1){
            frontp = 0;
        }
        rear = (rear + 1) % n;
        nums[rear] = val;
        return true;
    }

    bool dequeue() {
        if(isEmpty()){
            return false;
        }
        if(frontp == rear){
            frontp = -1;
            rear = -1;
        }else{
            frontp = (frontp + 1) % n;
        }
        return true;
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        return nums[frontp];
    }

    int top() {
        if(isEmpty()){
            return -1;
        }
        return nums[rear];
    }

    bool isFull() {
        if(frontp == 0 && rear == n - 1){
            return true;
        }
        if(frontp == rear + 1){
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if(frontp == -1){
            return true;
        }
        return false;
    }
};