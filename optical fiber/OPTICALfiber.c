#include<stdio.h>
#include<math.h>
int tir()
{        
            double n1,n2,ci,a1,a2;
        	printf("\nEnter Angle of incidence =");
			scanf("%lf",&ci);
			printf("\nEnter index of refraction of core =");
			scanf("%lf",&n1);
			printf("\nEnter refractive index of cladding =");
			scanf("%lf",&n2);
			a1=asin(n1/n2);
			a2=(a1*180)/3.14;
			printf("\nCritical angle is=%lf",a2);
			if(a2<ci && n1>n2)
					printf("There will be TIR.\n");
		   	else 
		   	    printf("There will be no TIR.\n"); 
}
int numericalA()
{
	        float na,nc,a,b;
		    printf("\nEnter Core Reflective index=");
			scanf("%f",&na);
			printf("\nEnter Cladding Refractive index=");
			scanf("%f",&nc);
			a=(na*na)-(nc*nc);   
			b=sqrt(a);
			printf("Numerical Aperture is=%f",b);
			if(na<nc)
			printf("\nWrong input");
}
int acceptanceA()
{
			float n1,n2,nc,a,v,ac;
			 printf("\nEnter Core Reflective index=");
			scanf("%f",&n1);
			printf("\nEnter Cladding Refractive index=");
			scanf("%f",&n2);
			a=(n1*n1)-(n2*n2);   
			v=sqrt(a);
			ac=asin(v);
			nc=((ac*180)/3.14);
			printf("Acceptance Angle is=%f",nc);
				if(n1<n2)
			printf("\nWrong input");
			
}
main()
{
	int n;
	char a;
	printf("To proof diffrent phenomenon of an optical fiber.\n");
	printf("Press 1 To prove  Total Internal Reflection.\n");
	printf("Press 2 To calculate Numerical Apperture.\n");
	printf("Press 3 To calculate Acceptance Angle.\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
		tir();
		break;
	    }
	    case 2:
		{
		 numericalA();
		break;
	    }
	    case 3:
	    {
	   	 acceptanceA();	
	   	 break;
		}
		default:
			break;
	  
	}


}
