#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int arr[6][6];
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        cin>>arr[i][j];
    int big[16],sum,k=0;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        {sum=0;
        if(j!=0&&j!=5&&i!=4&&i!=5)
        {
                sum=arr[i][j]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j-1]+arr[i+2][j+1];
                big[k]=sum;
                k++;
        }
    }
   
	 	int j, temp;
		
	for (int i = 0; i <16; i++){
		j = i;
		
		while (j > 0 && big[j] < big[j-1]){
			  temp = big[j];
			  big[j] = big[j-1];
			  big[j-1] = temp;
			  j--;
			  }
		}
    cout<<big[15];
    return 0;
}
