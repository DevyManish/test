int order_agnostic_binary_search(vector<int> nums, int target){
    int l = 0, r = nums.size() - 1;
    if( nums[l] < nums[r]){
        while( l <= r){
            int m = l + (r-l)/2;
            if( nums[m] == target) return m;
            else if ( nums[m] > target ) r = m - 1;
            else l = m + 1;
        }
    }else{
        while( l <= r){
            int m = l + (r-l)/2;
            if( nums[m] == target) return m;
            else if ( nums[m] > target ) l = m + 1;
            else r = m - 1;
        }        
    }
    return -1;
}

void ceil_and_floor(vector<int> nums, int target){
    int l = 0, r = nums.size() - 1;

    while( l <= r){
        int m = l + (r-l)/2;
        if ( nums[m] == target) break;
        else if ( nums[m] > target ) r = m - 1;
        else l = m + 1;
    }
    // ceil = e & floor = s
    cout<<"ceil "<<nums[r]<<" floor "<<nums[l];
}

void first_last_pos(vector<int> nums, int target){
    int n = nums.size();
    int firstPos = -1, lastPos = -1;

    // Find first position
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] < target)
            l = m + 1;
        else {
            if (nums[m] == target) firstPos = m;
            r = m - 1; // move left
        }
    }

    // Find last position
    l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] > target)
            r = m - 1;
        else {
            if (nums[m] == target) lastPos = m;
            l = m + 1; // move right
        }
    }
    cout<<"first: "<<firstPos<<" last: "<<lastPos;
}


