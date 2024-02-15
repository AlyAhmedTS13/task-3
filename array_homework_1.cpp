/*
 * array_homework_1.cpp
 *
 *  Created on: Feb 14, 2024
 *      Author: alyah
 */




#include<iostream>
using namespace std;

int main() {
    int array[200], n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int increasing = 1;
    for(int i = 0; i < n-1; ++i) {
        if(array[i] > array[i + 1]) {
            increasing = 0;
            break;
        }
    }

    if(increasing) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}

//problem2

#include<iostream>
using namespace std;

int main() {


	int array[200],n;
	cin>>n;
	for(int i =0;i<n;i++){
			cin>>array[i];
	}
	int max =array[0];
	for(int i=1;i<n;i++){
	if(array[i]>max){
		max=array[i];

	}

	}
int mini =array[0];
for(int j=1;j<n;j++){
	if(array[j]<mini){
		mini=array[j];

	}
}

for(int i =0;i<n;i++){
	if(array[i]==max)
		array[i]=mini;
	else if (array[i]==mini)
		array[i]=max;
}
for(int i=0;i<n;i++){
	cout<<array[i]<<" ";
}

}

//problem3

#include<iostream>
using namespace std;

int main() {
    int a[1000], unique[1000];
    int n, x;
    int count = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x < 0 || x > 500) {
            continue;
        }

        a[i] = x;
        bool isDuplicate = false;

        for(int j = 0; j < count; j++) {
            if(a[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate) {
            unique[count] = a[i];
            count++;
        }
    }

    for(int i = 0; i < count; i++) {
        cout << unique[i] << " ";
    }

    return 0;
}

//problem4

#include<iostream>
using namespace std;

int main() {
int a[1000];
int n;
cin>>n;
int x=1;
for(int i=0;i<n;i++){
	cin>>a[i];

}
	for(int i=0; i<n/2;i++){
		if(a[i]!=a[n-1-i]){
			x=0;
			break;
		}

	}

if(x==1)
	cout<<"yes";
else
	cout<<"no";



}

//problem5

#include<iostream>
using namespace std;

int main() {
    int a[1000], n, a2[1000];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0; // Counter for a2 array
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++){
        	 if(1<=i&&j<=n&&i<j){
            a2[count] =a[i]+a[j]+j-i;;
            count++;
        	 }
        }
    }

    int minVal = a2[0];
     for(int i = 1; i < count; i++) {
         if(a2[i] < minVal) {
             minVal = a2[i];
         }
     }


     cout <<  minVal << endl;






}








