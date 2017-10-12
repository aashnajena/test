#include <stdio.h>

long long int n,sum=0,array[10000001],count[10000001],max,temp,comsum,median,mean ;
long long int u,v,flag,number,i,j,k,x,z,y,greatest;
int main () {

scanf("%lld",&n) ;

for(i=0 ; i<n ; i++)
{

	scanf("%lld",&array[i]) ;

	sum=sum+array[i] ;
}

mean = sum / n ;



for(j=0 ; j<n ; j++)

{

	if (array[0]<array[j])

	{
		temp=array[0] ;
		array[0]=array[j] ;
		array[j]=temp ;
	}

}

greatest=array[0] ;

for ( x=0 ; x<=greatest ; x++ )

{ count[x]=0 ; }



for ( y=0 ; y<n ; y++)



{
	number=array[y] ;
	count[number]++ ;

}




flag=0 ;

max=0 ;
comsum=0 ;



for( z=0 ; z<=greatest ; z++ )

{

if ( count[max] < count[z] )
{	max=z  ; }



comsum=comsum+count[z] ;


if ( flag != 1 ) {
if (comsum >= ((n+1)/2) )

{	median=z ;


	flag=1 ;
}}
}

printf("%lld %lld %lld\n", mean,median,max ) ;





	return 0 ;
}
