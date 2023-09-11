class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int indx=matrix.size()-1;
    for (int i = 0; i < matrix.size()-1; ++i) {
        if(matrix[i][0]==target){
            return true;
        }
        if(matrix[i+1][0]>target&&matrix[i][0]<target){
            indx=i;
            break;
        }
    }
    int l=0,r=matrix[indx].size()-1,mid;
    while(l<=r){
        //{1,3,5,7}
        mid=(l+r)>>1;
        if(matrix[indx][mid]>target){
            r=mid-1 ;
        }
        else if(matrix[indx][mid]<target){
            l=mid+1;
        }
        
        else{
            return true;
        }
    }
    return false;
}


};