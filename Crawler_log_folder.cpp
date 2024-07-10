class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        for(string s:logs){
            if(s=="../"){
                c--;
                if(c<0) c=0;
            }
            else if(s=="./"){
                continue;
            }
            else c++;
        }
        return c>0?c:0;
    }
};
