int Solution::majorityElement(const vector<int> &A) {
    int counter = 0;
    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < A.size(); j++) {
            if(A[i] == A[j]) {
                counter++;
            }
        }
        if(counter > floor(A.size() / 2)) {
            return A[i];
        }
        counter = 0;
    }

}
