#include<iostream>
#include<queue>
using namespace std;

typedef pair<int, pair<int, int>> node;
vector<int>mergeKsortedArrays(vector<vector<int>>arr){
    vector<int> ans;
    priority_queue<node, vector<node>, greater<node>> pq;

    for (int i = 0; i < pq.size();i++){
        pq.push({arr[i][0], {i, 0}});
    }

    while(!pq.empty()){
        node current = pq.top();
        current.pop();
        int element = current.first;
        int x = current.second.first;
        int y = current.second.second;

        ans.push_back(element);

        if(y+1<arr[x].size()){
            pq.push({arr[x][y + 1], {x, y + 1}});
        }

    }
    return ans;
}

int main(){
    vector<vector<int >>arr{{2, 6, 12, 15},
                            {1, 3, 14, 20},
                            {3, 5, 8, 10}};
	vector<int> output = mergeKsortedArrays(arr);
	for (auto x : output) {
		cout << x << " ";
	}
	return 0;
}