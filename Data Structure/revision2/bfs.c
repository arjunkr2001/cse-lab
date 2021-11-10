#include<stdio.h>
int st[10],a[10][10],lar=0;
void bfs(int m);
void main(){
	int i,j,n,f,m,ad,adj;
	printf("enter max.no.of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter node %d: ",i);
		scanf("%d",&f);
		if(i==1)
			m=f;
		st[f]=0;
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
	bfs(m);
}
void bfs(int m){
	int q[10],front=0,rear=0,p,i;
	printf("%d\t",m);
	st[m]=1;
	q[rear]=m;
	rear++;
	while(rear!=front){
		p=q[front];
		front++;
		for(i=1;i<=lar;i++){
			if(a[p][i]==1){
				if(st[i]!=1){
					printf("%d\t",i);
					st[i]=1;
					q[rear]=i;
					rear++;
				}
			}
		}
	}
}