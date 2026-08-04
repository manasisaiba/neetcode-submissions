/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if (intervals.empty()) {
        return 0;
    }

    vector<int> starts;
    vector<int> ends;

    for (const Interval& interval : intervals) {
        starts.push_back(interval.start);
        ends.push_back(interval.end);
    }

    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    int startPointer = 0;
    int endPointer = 0;

    int currentRooms = 0;
    int maxRooms = 0;

    while (startPointer < intervals.size()) {

        if (starts[startPointer] < ends[endPointer]) {
            currentRooms++;

            maxRooms = max(
                maxRooms,
                currentRooms
            );

            startPointer++;
        } else {
            currentRooms--;
            endPointer++;
        }
    }

    return maxRooms;
    }
};
