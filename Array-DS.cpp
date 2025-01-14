/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    int n = a.size();
    vector<int> res;
    for(int i=n-1; i>=0; i--){
        res.push_back(a[i]);
    }
    return res;
}
