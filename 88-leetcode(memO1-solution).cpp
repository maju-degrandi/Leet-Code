class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1;
        for(int i = m + n - 1; i >= 0; i--)
        {          
            if(p2 < 0) break; // acabou o vetor2, o vetor1 já está pronto

            if(p1 >= 0 && nums1[p1] > nums2[p2]) 
            {
                nums1[i] = nums1[p1];
                p1--;
            } 
            else //acabou o vetor1, tenho que copiar os valores do v2 para o v1
            {
                nums1[i] = nums2[p2];
                p2--;
            }
        }
    }
};
