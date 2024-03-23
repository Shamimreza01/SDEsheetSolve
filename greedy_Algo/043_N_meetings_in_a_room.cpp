struct box{
    int start;
    int end;
    int position;
};
bool comp(struct box m1, struct box m2){
     if (m1.end < m2.end) return true;
         else if (m1.end > m2.end) return false;
         else if (m1.position < m2.position) return true;
         return false;
}
int maximumMeetings(vector<int> &start, vector<int> &end)
{
     int n=start.size();
    vector<box> sideRoom;
   for(int i=0;i<n;i++){
       sideRoom.push_back({start[i],end[i],i+1});
   }
   sort(sideRoom.begin(),sideRoom.end(),comp);
   int count=1;
   int last_end_time = sideRoom[0].end;
   for(int i=1;i<n;i++){
        if(sideRoom[i].start > last_end_time) {
            count++;
            last_end_time = sideRoom[i].end;
        }
   }
   return count;
}