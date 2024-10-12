class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int Srow=0,Scol=0,Erow=row-1,Ecol=col-1;
        int total=row*col;
        int count=0;
        while(count<total){
            //Printing starting row
            for(int i=Scol;count<total && i<=Ecol;i++){
                ans.push_back(matrix[Srow][i]);
                count++;
            }
            Srow++;
             //Printing ending col
            for(int i=Srow;count<total && i<=Erow;i++){
                ans.push_back(matrix[i][Ecol]);
                count++;
            }
            Ecol--;
             //Printing ending row
            for(int i=Ecol;count<total && i>=Scol;i--){
                ans.push_back(matrix[Erow][i]);
                count++;
            }
            Erow--;
             //Printing starting col
             for(int i=Erow;count<total && i>=Srow;i--){
                ans.push_back(matrix[i][Scol]);
                count++;
            }
            Scol++;

        } return ans;

    }
};