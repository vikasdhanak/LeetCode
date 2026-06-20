class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hour_angle = hour * 30;
        double min_angle = minutes * 5.5;

        double angle = abs(hour_angle - min_angle);

        return min(angle, 360 - angle);
    }
};