#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>visited;
        Findrooms(rooms, 0, visited);
        return visited.size() == rooms.size();

    }

    void Findrooms(vector<vector<int>>& rooms, int roomnumber, unordered_set<int>& visit) {
        visit.insert(roomnumber);
        for (auto num : rooms[roomnumber])
        {
            if (!visit.count(num))  Findrooms(rooms, num, visit);
        }

    }
};

int main() {
    vector<vector<int>>a{ {1}, { 2 }, { 3 }, {}};
    Solution mysolution;
    cout << mysolution.canVisitAllRooms(a) << endl;
}