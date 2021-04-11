#include<stdio.h>
main()
{
    int k,i=0;
    scanf("%d",&k);
    while(i<=k+1)
    {
    	char a;
		float m; 
        scanf("%c",&a);
        scanf("%f",&m);
        switch(a)
        {
            case 'a':printf("%.2lf\n",m*2*3.14); break;
            case 'b':printf("%.2lf\n",m*3.14); break;
            case 'c':printf("%.2lf\n",m*m*3.14); break;
            case 'd':printf("%.2lf\n",(m/2)*(m/2)*3.14); break;
        }
        i+=1;
    }	 
}
