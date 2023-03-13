#include<iostream> 
#include<climits> 
using namespace std; 
   
// swap two integers 
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}
// Min-heap class
class Min_Heap 
{ 
    int *heaparr; // pointer to array of elements in heap 
    int capacity; // maximum capacity of min heap 
    int heap_size; // current heap size 
public: 
    Min_Heap(int cap){
        heap_size = 0; 
        capacity = cap; 
        heaparr = new int[capacity]; 
         
    } 
   
    // to heapify a subtree with the root at given index 
    void MinHeapify(int ); 
   
    int parent(int i) { return (i-1)/2; } 
   
    // left child of node i 
    int left(int i) { return (2*i + 1); } 
   
    // right child of node i 
    int right(int i) { return (2*i + 2); } 
   
    // extract minimum element in the heap(root of the heap) 
    int extractMin(); 
   
    // decrease key value to newKey at i
    void decreaseKey(int i, int newKey); 
   
    // returns root of the min heap 
    int getMin() { return heaparr[0]; } 
   
    // Deletes a key at i 
    void deleteKey(int i); 
   
    // Inserts a new key 'key' 
    void insertKey(int key); 
    void displayHeap(){
        for(int i = 0;i<heap_size;i++)
            cout<<heaparr[i]<<" ";
             
        cout<<endl;
         
    }
}; 
   
// Inserts a new key 'key' 
void Min_Heap::insertKey(int key) 
{ 
    if (heap_size == capacity)  { 
        cout << "\nOverflow: Could not insertKey\n"; 
        return; 
    } 
    // First insert the new key at the end 
    heap_size++; 
    int i = heap_size - 1; 
    heaparr[i] = key; 
   
    // Fix the min heap property if it is violated 
    while (i != 0 && heaparr[parent(i)] > heaparr[i]) 
    { 
       swap(&heaparr[i], &heaparr[parent(i)]); 
       i = parent(i); 
    } 
} 
   
void Min_Heap::decreaseKey(int i, int newKey) { 
    heaparr[i] = newKey; 
    while (i != 0 && heaparr[parent(i)] > heaparr[i])  { 
       swap(&heaparr[i], &heaparr[parent(i)]); 
       i = parent(i); 
    } 
} 
  int Min_Heap::extractMin() 
{ 
    if (heap_size <= 0) 
        return INT_MAX; 
    if (heap_size == 1)   { 
        heap_size--; 
        return heaparr[0]; 
    }   
    // Store the minimum value,delete it from heap 
    int root = heaparr[0]; 
    heaparr[0] = heaparr[heap_size-1]; 
    heap_size--; 
    MinHeapify(0); 
   
    return root; 
} 
   
void Min_Heap::deleteKey(int i) 
{ 
    decreaseKey(i, INT_MIN); 
    extractMin(); 
} 
   
void Min_Heap::MinHeapify(int i) 
{ 
    int l = left(i); 
    int r = right(i); 
    int min = i; 
    if (l < heap_size && heaparr[l] < heaparr[i]) 
        min = l; 
    if (r < heap_size && heaparr[r] < heaparr[min]) 
        min = r; 
    if (min != i) 
    { 
        swap(&heaparr[i], &heaparr[min]); 
        MinHeapify(min); 
    } 
} 
   
// main program
int main() 
{ 
    Min_Heap h(11); 
    h.insertKey(2); 
    h.insertKey(4); 
      
    h.insertKey(6); 
    h.insertKey(8); 
    h.insertKey(10); 
    h.insertKey(12); 
    cout<<"Heap after insertion:";
    h.displayHeap();
    cout<<"root of the heap: "<<h.getMin()<<endl;
    h.deleteKey(2);
    cout<<"Heap after deletekey(2):";
    h.displayHeap();
    cout <<"minimum element in the heap: "<< h.extractMin() <<endl; 
    h.decreaseKey(1, 1); 
    cout <<"new root of the heap after decreaseKey: "<< h.getMin()<<endl;
     
    return 0; 
}
