class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        
        int xclose = max(x1,min(xCenter,x2));  //to find min dist between circle and rectan
        int yclose = max(y1,min(yCenter,y2));

        int distance = (xclose - xCenter) * (xclose - xCenter)  + (yclose - yCenter) * (yclose - yCenter); //eucliedean distance

        return distance <=  radius*radius;  

        }
};
/*f xCenter is left of the rectangle (xCenter < x1)
The closest x-coordinate is x1.
If xCenter is right of the rectangle (xCenter > x2)
The closest x-coordinate is x2.
If xCenter is inside the rectangle (x1 ≤ xCenter ≤ x2)
The closest x-coordinate is xCenter itself.

 xclose = max(2, min(1, 6)) = max(2, 1) = 2
Since xCenter = 1 is less than x1 = 2, xclose is clamped to x1 = 2.
yclose = max(2, min(7, 6)) = max(2, 6) = 6
Since yCenter = 7 is greater than y2 = 6, yclose is clamped to y2 = */
