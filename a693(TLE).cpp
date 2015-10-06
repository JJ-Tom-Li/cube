#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m,i,j,sum=0;
while (scanf("%d %d",&n,&m)!=EOF){
	int full[n];
	int want[m][2];

for (i=0;i<n;i++) scanf("%d",&full[i]);
for (i=0;i<m;i++) scanf("%d %d",&want[i][0],&want[i][1]);

for (i=0;i<m;i++){
	for (j=want[i][0]-1;j<want[i][1];j++){
		sum=sum+full[j];
	}
	printf("%d\n",sum);
	sum=0;
}
}




	return 0;
}

