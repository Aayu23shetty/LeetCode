class Solution {
public:
    void nextPermutation(vector<int>& A) {

        //find pivot element
      int pivot=-1,n=A.size();

      for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pivot=i;
            break;
        }

      }
      if(pivot==-1){
        reverse(A.begin(),A.end());
        return;
      }
        

      //find next larger element
      for(int i=n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }


      }
      // reverse(piv+1 to n-1)

      int i=pivot+1 ,j=n-1;
      while(i<=j){
        swap(A[i++],A[j--]);
      }
    }
};


//next_permutation(A.begin(),A.end());