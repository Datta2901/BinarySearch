// class FrequencyStack {
//     stack<int>answer;
//     priority_queue<int> pq;
//     map<int,int>fre;

//     public:
//     FrequencyStack() {
//     }

//     void append(int val) {
//         answer.push(val);
//         pq.push(fre[val] + 1);
//         fre[val]++;
//     }
//     int pop(){
//         int count = pq.top();
//         int va;
//         stack<int>dup = answer;
//         while(!dup.empty()){
//             int f = dup.top();
//             dup.pop();
//             if(count == fre[f]){
//                 va = fre[f];
//                 pq.pop();
//                 pq.push(fre[f] - 1);
//                 fre[f]--;
//                 return f;
//             }
//         }  
//         return -1;
//     }
// };

class FrequencyStack {
    // {freq,val}
    priority_queue<pair<int,int> > pq;
    // fre -> val ,freq
    // Index ->index,val
    map<int,int>fre,Index;
    int count;
    
    public:
    FrequencyStack() {
        count = 0;
    }

    void append(int val) {
        count++;
        pq.push({fre[val] + 1,count});
        fre[val]++;
        Index[count] = val;
    }
    int pop(){
        int highestFreEle = pq.top().second;
        pq.pop();
        int lowestIndexValue = Index[highestFreEle];
        fre[lowestIndexValue]--;
        return lowestIndexValue;
    }
};