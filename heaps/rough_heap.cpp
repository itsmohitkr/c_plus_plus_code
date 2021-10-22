#include <iostream>
#include <vector>
using namespace std;

class heap{
    private:
        vector<int> v;
        bool minheap;

        bool compare(int a,int b){
            if(minheap){
                return a < b;
            }
            else{
                return a > b;
            }
        }

        void heapify(int indx){
            int i = indx; // node index
            int left = 2 * i; // left index

            int right = 2 * i + 1; // right index

            int min_index = i;
            int last = v.size() - 1;

            if(left<=last and compare(v[left],v[i])){
                min_index = left;
            }
            if(right<=last and compare(v[right],v[min_index])){
                min_index = right;
            }

            if(min_index!=indx){
                swap(v[indx], v[min_index]);
                heapify(min_index);
            }
        }

    public:

        heap(int default_size=10,bool type=true){
            v.reserve(default_size);
            v.push_back(-1);
            minheap = type;
        }

        void push(int data){
            v.push_back(data);
            int index = v.size() - 1;
            int parent = index / 2;

            while(index>1 and compare(v[index],v[parent)]){
                swap(v[index], v[parent]);
                index = parent;
                parent = parent / 2;
            }
        }

        void pop(){
            swap(v[1], v[v.size() - 1]);
            v.pop_back();
            heapify(1); // node 1 or index 1 ko heapify kardo so that sbb theek position pr aa jye 

        }

        void top(){
            return v[1];
        }

        bool empty(){
            if(v.size()==1){
                return true;
            }
            return false;
        }
}
    
int main(){
    
}