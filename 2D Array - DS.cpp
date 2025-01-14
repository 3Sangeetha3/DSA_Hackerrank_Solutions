/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
    int n = arr.size();
    vector <int> sums;
    for(int i=0; i<n-2; i++){
        for(int j=0; j<n-2; j++){
          int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                                     arr[i+1][j+1]
                    + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            sums.push_back(sum);
        }
    }
  int Max = -63;
    for(int i=0;i<sums.size(); i++){
        if(sums[i] > Max){
            Max = sums[i];
        }
    }
    return Max;
}
