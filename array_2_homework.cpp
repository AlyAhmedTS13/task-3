
//problem3
#include<iostream>
using namespace std;

int main() {

int a[200],n,
a2[771]={0};
cin>>n;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	x=x+500;
	a[i]=x;
	a2[a[i]]++;
}
	int max=-1;
	for(int i=0; i<771;i++){
		if(max==-1||a2[max]<a2[i])
			max=i;
	}

cout<<(max-500)<<" "<<"repeated"<<" "<<a2[max];

}

//problem5
#include<iostream>
using namespace std;

int main(){
    int a[900], unique[900];
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




}

//problem1

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (a[i] < min1) {
            min3 = min2;
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2) {
            min3 = min2;
            min2 = a[i];
        }
        else  if (a[i] < min3) {
            min3 = a[i];
        }
    }

    cout << "The three smallest values are: " << min1 << ", " << min2 << ", " << min3 << endl;

    return 0;
}

//problem6
#include<iostream>
using namespace std;

int main(){
	int a[900],int a2[501];
	int n;
	cin>>n;
	for(int i =0 ; i<n;i++){
		cin>>a[i];
		a2[a[i]]+=1;

	}



	for(int i =0 ; i<501;i++){
		while(a2[i]){
			cout<<i;
			a2[i]-=1;
		}

	}




}

//problem2


#include <climits>
using namespace std;

int main() {
	int a[501]={0};
	int n;
	cin>>n;
	for (int i = 0; i < 501; ++i)
	        a[i] = -1;
	for(int i=0; i<n;i++){

		int x;
		cin>>x;
		a[x]=i;
	}

	int q,num;
	cin>>q;
	while(q){
	cin>>num;
	cout<<a[num]<<"\n";
	q-=1;
	}






}

