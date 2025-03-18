class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        
        int xclose = max(x1,min(xCenter,x2));
        int yclose = max(y1,min(yCenter,y2));

        int distance = (xclose - xCenter) * (xclose - xCenter)  + (yclose - yCenter) * (yclose - yCenter);

        return distance <=  radius*radius;  

        }
};