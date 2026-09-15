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
    auto comp(const Interval& x,const Interval& y){
        return x.start<y.start;
    };

class Solution {
public:


    bool canAttendMeetings(vector<Interval>& intervals) {

        sort(intervals.begin(), intervals.end(), comp);

         int j=0;
        for(int i=1;i<intervals.size();i++){
     
             if(intervals[i].start < intervals[j].end){
                return false;
             }
             j++;
        }
        return true;
    }
};
