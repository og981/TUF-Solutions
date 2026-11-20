class Solution{
public:
    void reverse(int arr[], int n){
        int i ; 
        for(i = 0 ; i<n ;i++)
        {
             if(i >= n/2)
        {
            return ;
        }
            swap(arr[i] , arr[n-i-1]);
        }
    }
};
