#include<stdio.h>
void dfs(int m);
int a[10][10],st[10],lar=0;
void main(){
	int i,j,n,f,m,ad,adj;
	printf("enter max.no.of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter node %d: ",i);
		scanf("%d",&f);
		if(i==1)
			m=f;
		st[m]=0;
		if(f>lar)
			lar=f;
		printf("enter no.of adjacents of %d: ",f);
		scanf("%d",&ad);
		if(ad>0){
			printf("enter %d adjacents of %d: ",ad,f);
			for(j=0;j<ad;j++){
				scanf("%d",&adj);
				a[f][adj]=1;
			}
		}
	}
	dfs(m);
}
void dfs(int m){
	int i;
	printf("%d\n",m);
	st[m]=1;
	for(i=1;i<=lar;i++){
		if(a[m][i]==1){
			if(st[i]!=1){
				dfs(i);
			}
		}
	}
}