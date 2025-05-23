
bool searchMatrix(vector<vector<int>> &mat, int x){
    int n=mat.size();
    int m=mat[0].size();
    
    int s=0,e=n*m-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int val=mat[mid/m][mid%m];
        if(value==x) return true;
        else if(value<x) s=mid+1;
        else e=mid-1;
    }
    return false;
}
