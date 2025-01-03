
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int n = img.size();
        int m = img[0].size();


        int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0}; // Row 
        int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1}; // Column 
        vector<vector<int>> ans(n, vector<int>(m, 0));


        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                int curr = img[i][j];
                int cnt=1;
                // traverse in all 8 dir

                for(int k=0; k<8; k++){

                      int newX = i + dx[k];
                        int newY = j + dy[k];

                    if(newX < n && newY< m && newX>=0 && newY>=0){

                        curr+=img[newX][newY];
                        cnt++;
                    }
                }

                ans[i][j]=(curr/cnt);
            }
        }

        return ans;
    }
};
