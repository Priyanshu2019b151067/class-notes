int sumSubarrayMins(vector<int>& arr) {
      // nearest to left
      stack<pair<int,int>> s;
      vector<long int> left(arr.size()),right(arr.size());
      left[0] = 1;
      s.push({arr[0],0});
      right[arr.size() -1] = 1;
      for(int i = 1;i < arr.size();i++){
              while(s.size() > 0 && s.top().first >= arr[i]){
                  s.pop();
              }
              if(s.size() == 0){
                  left[i]  = i+1;
              }else{
                  left[i] =  i - s.top().second;
              }
          s.push({arr[i],i});
      } 
      while(s.size() > 0){
          s.pop();
      }
      s.push({arr.back(),arr.size()-1});
    
      for(int i = arr.size()- 2;i >=0 ;i--){
         while(s.size() > 0 && s.top().first > arr[i]){
            s.pop();
         }
         if(s.size() == 0){
            right[i] = arr.size()-i;
        }else{
            right[i] = s.top().second - i;
        }
        s.push({arr[i],i});
      }

      int ans = 0, mod = 1e9 +7;
    for(int i = 0; i < arr.size(); i++){
      ans = (ans + arr[i]*left[i]*right[i])%mod;
    }
     return ans;
    }