class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        queue<pair<Node*,int>>q;
        int hd = 0;
        map<int,int>m;
        q.push(make_pair(root,hd));
        while(q.empty() == false){
            auto temp = q.front();
            q.pop();
            m[temp.second] = (temp.first)->data;
            if((temp.first)->left){
                q.push(make_pair((temp.first)->left,temp.second-1));
            }
            if((temp.first)->right){
                q.push(make_pair((temp.first)->right,temp.second+1));
            }
        }
        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
