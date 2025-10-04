// Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

// Each student receives atleast one book.
// Each student is assigned a contiguous sequence of books.
// No book is assigned to more than one student.
// The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

// Note: If it is not possible to allocate books to all students, return -1.


//********find min possible max pages**********



class Solution {
  public:
  bool isValid(int mid, vector<int> &arr, int k){
      int stu=1, page=0;
      for(int i =0; i<arr.size(); i++){
          if(arr[i]>mid) return false;
          if(page+arr[i]<=mid){
             page+=arr[i];
          }else{
              stu++;
              page=arr[i];
          }
      }
      if(stu<=k) return true;
      return false;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()) return -1;
        int sum=0, ans=-1;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
        }
        int st=0, end=sum, mid;
        
        while(st<=end){
            mid=(st+end)/2;
            if(isValid(mid, arr, k)){
                ans=mid;
                end=mid-1;
                
            } else{
                st=mid+1;
            }
        }
        return ans;
           
        
    }
};
