//Code

#include<iostream>
using namespace std;

class merge_sort
{
    private:
        int n,z;
        int A[20];
    public:
        void accept();
        void display(int arr[]);
        void mergesort(int arr[], int p, int r);
        void merge(int arr[], int p, int q, int r);
};

void merge_sort::accept()
{
    cout<<"\nEnter the number of elements : ";
    cin>>n;
    cout<<"\nEnter the elements : \n";
    for(z=0;z<n;z++)
        cin>>A[z];
    cout<<"\nUnsorted elements are : \n";
    display(A);
    mergesort(A,0,n-1);
    cout<<"\nSorted elements are : \n";
    display(A);
}

void merge_sort::display(int arr[])
{
    for(z=0;z<n;z++)
        cout<<A[z]<<"\t";
    cout<<endl;
}

void merge_sort::mergesort(int arr[], int p, int r)
{
    if(p<r)
    {
        int q = p+(r-p)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);

        merge(arr,p,q,r); 
    }
}

void merge_sort::merge(int arr[], int p, int q, int r)
{
    int i, j, k; 
    int n1 = q - p + 1; 
    int n2 =  r - q; 
    
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[p + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[q + 1+ j]; 
    
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = p; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
}

int main()
{
    merge_sort m;
    m.accept();
    return 0;
}

/*OUTPUT

safir@safir-Predator-PH315-51:~/Desktop/DAA codes$ g++ merge.cpp
safir@safir-Predator-PH315-51:~/Desktop/DAA codes$ ./a.out

Enter the number of elements : 5

Enter the elements : 
4
2
7
9
8

Unsorted elements are : 
4	2	7	9	8	

Sorted elements are : 
2	4	7	8	9

*/
