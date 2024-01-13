#include<iostream>
#include<cstdio>

int n{0};
int a[6000001]{0};

int main(){
	using namespace std;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		a[i+n]=a[i];
	}
	int i{1},j{2},k{0};
	while(i<=n&&j<=n){
		for(k=0;k<=n&&a[i+k]==a[j+k];k++);
		a[i+k]>a[j+k]?i+=k+1:j+=k+1;
		if(i==j) j++;
	}
	int index=min(i,j);
	for(int t=0;t<n;t++){
		printf("%d ",a[index+t]);
	}
	return 0;
}
