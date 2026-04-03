using namespace std;
#include <iostream>
#include <vector>

class Graph{
    int ver;
    vector<vector<int>>arr;
    public:
        Graph(int x){
            ver=x;
            arr.resize(ver);
        }

        void addVerUD(int a, int b){
            arr[a].push_back(b);
            arr[b].push_back(a);
        }

        void addVerDR(int a, int b){
            arr[a].push_back(b);
        }

        void display(){
            for(int i=0; i<ver; i++){
                cout<<i<<" -> ";
                for(int nei : arr[i]){
                    cout<<nei<<" ";
                }
                cout<<endl;
            }
        }

        void dfsRec(int node, vector<bool>& visited){
            visited[node]=true;
            cout<<"Node: "<<node<<endl;

            for(int nei : arr[node]){
                if(!visited[nei]){
                    dfsRec(nei, visited);
                }
            }
        }

        void dfs(int start){
            vector<bool>visited(ver, false);
            cout<<"Start: "<<start<<endl;
            dfsRec(start, visited);
            cout<<endl;
        }

};

int main(){
    Graph ud(5);

    ud.addVerUD(0,1);
    ud.addVerUD(0,2);
    ud.addVerUD(1,2);
    ud.addVerUD(2,1);
    ud.addVerUD(3,2);
    ud.addVerUD(4,2);
    ud.display();

    ud.dfs(3);

    // Graph dr(5);
    // dr.addVerDR(0,1);
    // dr.addVerDR(1,2);
    // dr.addVerDR(2,3);
    // dr.addVerDR(4,5);
    // // dr.addVerDR(5,0);
    // // dr.addVerDR(0,1);
    // cout<<"\nDir. gr: "<<endl;
    // dr.display();
}