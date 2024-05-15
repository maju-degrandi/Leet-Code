class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> cpy1 = nums1;

        int p1 = 0, p2 = 0;

        for (int i = 0; i < m + n; i++) 
        {
            // se o v2 já acabou, copia o v1
            // se ainda tiver no v1 e for menor, adiciona
            if (p2 >= n || (p1 < m && cpy1[p1] < nums2[p2])) 
            {
                nums1[i] = cpy1[p1];
                p1++;
            }
            else //se o valor de v2 for menor, adiciona; se o v1 já acabou, copia o v2
            {
                nums1[i] = nums2[p2];
                p2++;
            }
        }
    }
};
