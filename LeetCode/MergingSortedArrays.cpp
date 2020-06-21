class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ans[m+n];
        int ptr1=0;
        int ptr2=0;
        int p=0;
        while(ptr1<m && ptr2<n){
            if (nums1[ptr1]<nums2[ptr2]){
                ans[p]=nums1[ptr1];
                ptr1++;
            }else{
                ans[p]=nums2[ptr2];
                ptr2++;
            }
            p++;
        }
        while(ptr1<m){
            ans[p]=nums1[ptr1];
            p++;
            ptr1++;
        }
        while(ptr2<n){
            ans[p]=nums2[ptr2];
            p++;
            ptr2++;
        }
        for (int i=0;i<m+n;i++){
            nums1[i]=ans[i];
        }
    }
};