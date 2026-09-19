#include <algorithm>

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // Clamp the circle's center coordinates to the rectangle boundaries
        int closestX = std::clamp(xCenter, x1, x2);
        int closestY = std::clamp(yCenter, y1, y2);
        
        int dx = xCenter - closestX;
        int dy = yCenter - closestY;
        
        // Check if distance^2 <= radius^2
        return (dx * dx + dy * dy) <= (radius * radius);
    }
};