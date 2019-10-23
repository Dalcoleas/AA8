 #include <bits/stdc++.h> 
using namespace std; 

struct Activitiy 
{ 
    int start, finish; 
}; 
  
void printMaxActivities(Activitiy arr[], int n) 
{ 
	int i, j, cont; 
    int max = 0;
    for (int k = 0; k < n ; k++){
        cont = 1;
        i = k;
        for (j = k; j < n; j++) { 
            if (arr[j].start >= arr[i].finish) { 
                i = j; 
                cont++;
            } 
        }
        if(cont > max){
            max = cont;
        } 
    }
    cout << max;
    
} 
  
// Driver program
int main()
{
	Activitiy arr[] = {{0, 6}, {1, 4}, {2, 13}, {3, 5}, {3, 8}, {5, 7}, {5, 9}, {6, 10}, {8, 11}, {8, 12}, {12, 14}};
	int n = sizeof(arr) / sizeof(arr[0]);
	printMaxActivities(arr, n);
	return 0;
}


