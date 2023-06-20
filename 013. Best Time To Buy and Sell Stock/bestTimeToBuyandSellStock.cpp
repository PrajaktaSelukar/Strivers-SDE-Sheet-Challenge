#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices){
    int priceSize = prices.size();

    if(priceSize==0 || priceSize==1) return 0;

    int lowest = prices[0];
    int highest = prices[0];
    int finalResult = 0;

    for(int i=1; i<priceSize; i++){
        if(prices[i] < lowest){
            lowest = prices[i];
            highest = prices[i];
        } else if(prices[i] > lowest){
            highest = max(highest, prices[i]);
            finalResult = max(finalResult, highest - lowest);
        }
    }
    return finalResult;
}

int main() {
    vector<int> prices = {63,78,74,4,8};
    cout<<maximumProfit()<<endl;

    return 0;
}