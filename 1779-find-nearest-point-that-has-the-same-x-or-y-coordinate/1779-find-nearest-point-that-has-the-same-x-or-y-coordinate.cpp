class Solution{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int index = -1;
        int dist = INT_MAX;
        for (int i = 0; i < points.size(); i++)
        {
            if (x == points[i][0] || y == points[i][1])  //checking valid point or not
            {
                if (dist > abs(x - points[i][0]) + abs(y - points[i][1])) //finding point with minimum manhattan distance
                {
                    dist = abs(x - points[i][0]) + abs(y - points[i][1]);
                    index = i;
                }
            }
        }
        return index;
    }
};