//   -----------------       Buy AND Sell STOCKS Problem      --------------------------

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// BRUTE FORCE
int getMaxProfit(vector<int>& prices, int n) {
    int maxProfit = 0;
    
    for(int i = 0; i < n; i++) {
       for(int j = i + 1; j < n; j++) {

        if(prices[j] >= prices[i]) {
            int currProfit = prices[j] - prices[i];
            maxProfit = max(maxProfit, currProfit);
        }else {
            break;
        }

       }
    }

    return maxProfit;
}

int getMaxProfitByOptimizedWay(vector<int>& prices, int n) {
    int maxProfit = 0;
    int minPrice = INT32_MAX;

    for(int i = 0; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    
    return maxProfit;
}


int main() {
    vector<int>prices = {7,1,5,3,6,4};
    int n = prices.size();

    cout<<endl<<"Max profit is: "<<getMaxProfit(prices, n);
    cout<<endl<<"Max profit is: "<<getMaxProfitByOptimizedWay(prices, n);


    return 0;
}