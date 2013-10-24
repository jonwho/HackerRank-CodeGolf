int main(){int T,n;double s;scanf("%d",&T);while(T--){scanf("%d",&n);while(n--)s+=(n%2?-1.0:1.0)/(2*n+1);printf("%.15lf\n",s);s=0;}}
