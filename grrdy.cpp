//grredy
// Is Subsequence

      int i = 0;
        int j = 0;
      while(i<t.size()){
if(s[j]==t[i])
    {
        j++;
    }
       i++;   

          }
        if(j==s.size())return true;
        return false;
      
      }


//N meeting rooms
struct meeting {
    int start;
    int end;
    int pos; 
}; 
bool comparator(struct meeting m1, meeting m2) 
{ 
    if (m1.end < m2.end) return true; 
    else if(m1.end > m2.end) return false; 
    else if(m1.pos < m2.pos) return true; 
    return false; 
} 
void maxMeetings(int s[], int e[], int n) {
    struct meeting meet[n]; 
    for(int i = 0;i<n;i++) {
        meet[i].start = s[i], meet[i].end = e[i], meet[i].pos = i+1; 
    }
    
    sort(meet, meet+n, comparator); 
    
    vector<int> answer;
    
    int limit = meet[0].end; 
    answer.push_back(meet[0].pos); 
    
    for(int i = 1;i<n;i++) {
        if(meet[i].start > limit) {
            limit = meet[i].end; 
            answer.push_back(meet[i].pos); 
        }
    }
    for(int i = 0;i<answer.size();i++) {
        cout << answer[i] << " "; 
    }
    
}
//2) minimun Platfroms
sort(arr,arr+n);
sort(dep,dep+n);
int plot_needed = 1;
int  result =1 ;
int i =1,j=0;
while(i<n and j<n){
    if(arr[i]<=dep[j]){
        plot_needed++;
        i++;
    }
    else if(arr[i]>dep[j]){
        plot_needed--;
        j++;
    }
    result = max(plot_needed,result);
}
return result;
}

//3 Job sequencing Problem 

bool comp (Job a, Job b){
    return (a.profit>b.profit);
}
sort(arr,arr+n,comp);
int maxi = arr[0].dead;
for(int i =0;i<n;i++)
maxi = max(maxi,arr[i].dead);

std::vector<int> v(maxi+1,-1);
int countJob = 0;
jobProfit = 0;
for(int i =0;i<n;i++){
    for(int  j = arr[i].dead;j>0;j--){
        if(v[j]==-1){
            v[j]=i;
            countJob++;
            jobProfit+=arr[i].profit;
            break;
        }
    }
}
return make_pair(countJob,jobProfit)



4) fatorial napshak
bool comp(Item a, Item b) {
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2; 
}
// function to return fractionalweights
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    
    sort(arr, arr + n, comp); 
    
    int curWeight = 0; 
    double finalvalue = 0.0; 
 
    
    for (int i = 0; i < n; i++) {
       
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
 

        else {
            int remain = W - curWeight;
            finalvalue += (arr[i].value / (double)arr[i].weight) * (double)remain;
            break;
        }
    }
 
    return finalvalue;
    
}
