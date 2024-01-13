#include<cstdio>

int a[1000001]{0};
int q[1000001]{0};


int main(){
	int n{0},k{0};
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int h{1},r{0};
	for(int i=1;i<=n;i++){
		while(r>=h&&a[i]<=a[q[r]]){
			r--;
		}
		q[++r]=i;
		if((i-k+1)>q[h]){
			h++;
		}
		if(i>=k) printf("%d ",a[q[h]]);
	}
	printf("\n");
	h=1,r=0;
	for(int i=1;i<=n;i++){
		while(r>=h&&a[i]>=a[q[r]]){
			r--;
		}
		q[++r]=i;
		if((i-k+1)>q[h]){
			h++;
		}
		if(i>=k) printf("%d ",a[q[h]]);
	}
	printf("\n");
	
	
	
	
	return 0;
}
