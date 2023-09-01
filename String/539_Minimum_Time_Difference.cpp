/*
Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 

Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0

link: https://leetcode.com/problems/minimum-time-difference/description/

*/

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //take a vector int
        //convert to all minutes and save a vector
        vector<int> minutes;

        for(int i=0;i<timePoints.size();i++){
            string curr = timePoints[i];
            //take from 0 to 2 character
            int hour = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            int totalmin = hour*60+min;
            minutes.push_back(totalmin);
        }
        //sort this and find minimum
        
        sort(minutes.begin(),minutes.end());
        int minimum = INT_MAX;
        int n= minutes.size();
        for(int i=0;i<n-1;i++){
            minimum = min(minimum,minutes[i+1]-minutes[i]);
        }
        
        // for round clock
        /*
                      12/24
               11/23         1/13   
             10/22               2-14
            9/21                    3/15
             8/20               4/16
                7/19        5/17
                    6 /18
        
        
        THISIS THE GAME dif fast and last
        */
        int lastdif = (minutes[0]+1440) - minutes[n-1];
        minimum = min(minimum,lastdif);
        return minimum;
    }
};