class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);

        for(auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }

        auto mavorqeli = labels;

        vector<vector<long long>> dist(n, vector<long long>(k + 1, LLONG_MAX));

        priority_queue<
            tuple<long long, int, int>,
            vector<tuple<long long, int, int>>,
            greater<tuple<long long, int, int>>
        > pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while(!pq.empty()) {
            auto [cost, node, cnt] = pq.top();
            pq.pop();

            if(cost != dist[node][cnt]) {
                continue;
            }

            if(node == n - 1) {
                return cost;
            }

            for(auto &[next, weight] : adj[node]) {
                int nextCnt;

                if(mavorqeli[node] == mavorqeli[next]) {
                    nextCnt = cnt + 1;
                }
                else {
                    nextCnt = 1;
                }

                if(nextCnt > k) {
                    continue;
                }

                long long newCost = cost + weight;

                if(newCost < dist[next][nextCnt]) {
                    dist[next][nextCnt] = newCost;
                    pq.push({newCost, next, nextCnt});
                }
            }
        }

        return -1;
    }
};