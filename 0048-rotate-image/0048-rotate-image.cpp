class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int fr=0;
    int n=matrix.size();
    while(fr<n){
        for(int i=fr;i<n;i++){
            swap(matrix[fr][i],matrix[i][fr]);

        }
        fr++;
    }
        int fc=0,lc=n-1;
        while(fc<lc){
            for(int i=0;i<n;i++){
                swap(matrix[i][fc],matrix[i][lc]);
            }
            fc++;lc--;
        }
    }
    
};