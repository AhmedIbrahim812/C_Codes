// Those codes belongs to Ahmed Ibrahim Ali 

#include <stdio.h>
#include "math.h"
#define togglebit(var,n)   var ^=(1<<n)
#define u8 unsigned char 
#define clear_bit(var,n)   var &= (~(1<<n))
#define set_bit(var,n)    var |= (1<<n)

// Get most repeated element in an array and how many times
max_and_count get_most_repeated(int *x,int size); //max_and_count is a struct defined below

// Get average value of array indeces 
float get_average(int *x,int size);

// How many times a function get called
void call_count(void);

// Get the addition of two unsigned chars 
u8 add (u8 x,u8 y);
// Get the max and min value of an array
void get_min_max(int *x,int size);
// Check if the given number is prime
void CheckPrime(int x);
// How many ones and zeros in a binary num
void ones_zeros_count (int x);
// max repeated number of zeros in a binary num
char max_zeros_between_ones(int x);
// Sum of each digit in an integer ex:  123= 1+2+3 = 6
int sumOfIntComponents(int x);
// Reverse a binary num ex:  1011 -> 1101
void reverse_num_binary(int x);
// revieve data from user, get the sum of all inputs using a pointer in calculations
int revieve_data_find_sum(int *x,int size);
// bobble sort of an array 
void bubble_sort (int *x,int size);
// Check if two arrays are identical or not
void compare_two_arrays (int *x, int *y,int size);
// Reverse string ex:   Ahmed -> demha
int reverse_string(char *x,int size);
//Swap between 4 bits in a binary num ex: 10001111 -> 11111000
void SWAP_4bits_of_8bits(int x);
// Swap two arrays 
a swap_arr_reverse(int *x,int *y); // a is a struct defined below
// Reverse array 
void reverse_arr(int *x);
// Find the prime num in an array
void prime_in_arr(int *x,int size);
//Check if a num is divisable by 2 
void check_power_of_two(int x);
// Get max num in an array and how many times it was repeated
a max_in_arr_times(int *x,int size); // a is a struct defined below
// Sort array elements
void sort_arr(int *x,int size);
// How many times a num is repeated in an array
char count_occur_in_arr(int *x,int size,int num);
//Find the repeated num in an array
int repeated_num(int *x, int size);
// Merge Two arrays
int* merge_arrays(int *x,int *y,int first_size,int second_size,int *res);
//get factorial using recursion function
int factorial_recursion(int num);
//print 2D array 
void print_2D_arr(int (*x)[3]);
//Get the cubic root of a num 
double cubic_root(double n);
//print array using pointer
void print_Arr_pointer(int *x,int size);
//Search in an array using binary search
void binary_search(int *x,int num,int size);
// get the single left circular_shift
int* circular_shift(int x);
//Special function ex: arr[5]={1,2,3,1,5} -> output is : 2 3 5 1 1
void takes_arr_and_num(int *x,int num,int size);
// Draw a pyramid 
void draw_pyramid(int rows);
// Convert from little to big endian 
void from_little_to_big_endian(int *x,int size);
// remove repeated elements from array
void remove_repeated_in_arr(int *x,int size);
// remove repeated elements in an array
void remove_repeated_in_arr(int *x,int size);
//Fibonacci Series
void Fibonacci(int terms);
// find missing element in an array ex: {1,2,4,5} -> ans= 3
void findMissing(int *arr, int N);
//Search for specific element in an array using recursion
char searchRecursion(char *ptr,char x,char size);
// Copy array into another array
void ArrCopy(char *arr,char size,char* copy);



int main ()
{ 

// You shall uncomment any function you want and test it in main 

	return 0;
}




/*most repeated element in array and how many times
typedef struct 
{
	int max;
	int count;
	int num;
	
}max_and_count;
max_and_count get_most_repeated(int *x,int size) 
{
	max_and_count local={0,0,0};
	int *ptr=x;
	int most;
	int count=0;
	int max=0;
	int a=0;
	for (int i=0;i<size;i++)
	{
		most=*(ptr+i);
		for (int j=0;j<size;j++)
		{
			if (most==*(ptr+j))
				local.count++;
		}
		if (local.count>local.max)
		{
			local.num=*(ptr+i);
			local.max=local.count;
			local.count=0;
		}
		else 
			local.count=0;
			
	}
	
	return local;
}
*/
/*float get_average(int *x,int size) 
{
	float avr=0.0;
	for (int i=0;i<size;i++)
		avr+=x[i];
	avr= avr/size;
	
	return avr;
}
*/
/*void call_count(void)
{
	counter++;
}
*/
/*u8 add (u8 x,u8 y)
{
	return x+y;
}
*/
/*void get_min_max(int *x,int size)
{
	int min=99999,max=0,min_index,max_index;
	for (int i=0;i<size;i++)
	{
		if (x[i]<=min)
			min=x[i];
		else if (x[i]>=max)
			max=x[i];
	}
	for (int i=0;i<size;i++)
	{
		if (min==x[i]){
			min_index=i;
		break;}
	}
	for (int i=0;i<size;i++)
	{
		if (max==x[i]){
			max_index=i;
		break;}
	}
	printf("min is %d at index %d , max is %d at index %d ",min,min_index,max,max_index);
}
*/
/*void CheckPrime(int x)
{
	int counter=0;
	int val ;
	val = ceil(sqrt(num));
	for (int i=2;i<=val;i++)
	{
		if (num%i==0)
			counter++;	
	}
	if ((counter==0 && num !=1) || num==2)
		printf("PRIME");
	else 
		printf("NOT PRIME");
}
*/
/*void ones_zeros_count (int x)
{
int ones=0;
int zeros=0;
for (int i=0;i<8;i++){	
	if ((x&(1<<i))==0)
		zeros++;
	else 
		ones++;
}
printf("number of zeros is %d , ones is %d",zeros,ones);
	
}
*/
/*char max_zeros_between_ones(int x)
{
int counter=0,i=0;
char maxzeros=0;
for (i=0;i<32;i++)
{
	if ((x&(1<<i))==1){
	i++;
	while((x&(1<<i))==1 && i<32)
	{
		counter++;
		i++;
	}
	
		if(maxzeros<counter && i<32)
		  maxzeros=counter;
	    if((x&(1<<i)==1))
		  counter=0;
		
	}
	i--;
}	
	return maxzeros;
}
*/
/*int sumOfIntComponents(int x)
{
	int sum=0;
	int a;
	
	while (x!=0){
	a=x%10;
	sum+=a;
	x/=10;
	}
	return sum;
}
*/
/*void reverse_num_binary(int x)
{
	int y[8];
	for (int i=0;i<8;i++)
	{
		y[i]=(x&(1<<i))&&1;
	}
	for (int i=0;i<=7;i++)
		printf("%d,",y[i]);
	
}
*/
/*int revieve_data_find_sum(int *x,int size)
{
	int sum=0;
	int *p=x;
	printf("enter %d elements", size);
	for (int i =0;i<size;i++){
		scanf("%d",p+i);
		sum+= *(x+i);
	}
	return sum;
}
*/
/*void bubble_sort (int *x,int size)
{
	int temp;
	for (int i=0;i<size;i++)
	{
		for (int j =0; j< size-1-i ; j++)
		{
			if (x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;	
			}	
		}
	}
	for (int i=0;i<8;i++)
	printf("%d, ",x[i]);
	
}
*/
/*void compare_two_arrays (int *x, int *y,int size)
{ int temp1,temp2,counter=0;


	for (int i=0;i<size;i++)
	{
		for (int j =0; j< size-1-i ; j++)
		{
			if (x[j]>x[j+1])
			{
				temp1=x[j];
				x[j]=x[j+1];
				x[j+1]=temp1;	
			}	
		}
	}
	for (int i=0;i<size;i++)
	{
		for (int j =0; j< size-1-i ; j++)
		{
			if (y[j]>y[j+1])
			{
				temp2=y[j];
				y[j]=y[j+1];
				y[j+1]=temp2;	
			}	
		}
	}
	for (int i=0;i<size;i++)
	printf("%d, ",x[i]);
	printf("\n");
	for (int i=0;i<size;i++)
	printf("%d, ",y[i]);

printf("\n");
for (int i=0;i<size;i++)
	{
		if (x[i]==y[i])
			counter++;
	}
	printf("%d\n",counter);
	if (counter==size)
	printf("The two arrays contains SAME elements");
	else 
	printf("NOT SAME elements");	
}

*/
/*int reverse_string(char *x,int size)
{
	//size--;
	if(--size==0)
	return 1;

	else if (size !=0)
	printf("%c ",x[size]);
	reverse_string(x,size-1);
	 return 0;	
}
*/	
/*void SWAP_4bits_of_8bits(int x)
{
	int a[4],b[4];
	for (int i=0;i<4;i++)
	{
		a[i]=(x&(1<<i))&&1;
		b[i]=(x&(1<<(i+4)))&&1;
	}
	for (int i=0;i<=3;i++)
		printf("%d",a[i]);
	for (int i=0;i<=3;i++)
		printf("%d",b[i]);	
}
*/
/*typedef struct { mult and sum by 3 ways
	int sum;
	int mult;
}a;

a sum_mult(int x,int y){
	a local_strcut={0,0};
	int c=x,d=y,summ=0,carry;
	while (y!=0)
	{
		summ=x^y;
		carry=(x&y)<<1;
		x=summ;
		y=carry;
		//x++;
		//y--;
	}
	local_strcut.sum=summ;
	x=c;y=d;
	while (y!=0)
	{
	local_strcut.mult +=(x*1);
	y--;	
	}
return local_strcut;	
}
*/
/*swap and reverse two arrays
typedef struct 
{
	int *arr1;
	int *arr2;
}a;
a swap_arr_reverse(int *x,int *y)
{
	int temp;
	a local_struct;
	local_struct.arr1=x;
	local_struct.arr2=y;
	for(int i=0;i<5;i++)
	{
	temp=x[i];
	x[i]=y[4-i];
	y[4-i]=temp;
	}
	return local_struct;
}
*/
/* reverse array
#define size 5
typedef struct {
	int arr[size];
}arr;

void reverse_arr(int *x)
{
	
	 int *p=x;
	 int tmp=0;
	 int a=4;
	for(int i=0;i<2;i++)  //size 5 
	{
		 tmp = x [ i ] ;  
    x [ i ] = x [ a - i ] ;  
    x [ a - i ] = tmp ;  
		//p=&x[i];
		//temp=*p;
		//x[i]=*(p+(a-i));
		//x[a-i]=temp;
		
		//local.arr[i]=*(x+(size-1-i));	
	}
}
*/
/* check if a bit is 1 
#define get_bit(var,n) 1&&(var&(1<<n))

int check_bit_is_set(int x,int index)
{
	if (get_bit(x,index))
		return 1;
	else 
		return 0;
}
*/
/* get division and reminder
typedef struct {
	float div;
	int rem;
	
}div_rem;

div_rem get_div_rem(int x,int y)
{
	div_rem local;
	local.div=(float)x/y;
	local.rem=x%y;
	
	return local;
}
*/
/*prime num in array
void prime_in_arr(int *x,int size)
{
	int val;
	int counter;
	
	for (int j=0;j<size;j++){
		val=ceil(sqrt(x[j]));
		counter=0;
	for (int i=2;i<=val;i++)
	{
		if (x[j]%i ==0)
			counter++;	
	}
	if (counter ==0 && x[j]!=1 || x[j]==2){
		printf(" %d at index %d  is a prime num", x[j] , j);
	break;
	}
	}
//return x[j];	
}
*/
/*void check_power_of_two(int x)
{
	int counter=0;
	while(x!=0)
	{
		if (x%2!=0)
		{
			counter++;
			printf("NOT POWER OF 2");
			break;
		}
		x/=2;		
	}
	if (counter==0)
	printf("POWER OF 2");	
}
*/
/* max_in_arr_times
typedef struct 
{
	int max;
	int counter;
	
}a;

a max_in_arr_times(int *x,int size)
{
	a local={0,0};
	
	for(int i=0;i<size;i++)
	{
		if (x[i]>local.max){
			local.max=x[i];
			local.counter=0;
			for (int j=0;j<size;j++)
			{
				if (local.max==x[j])
					local.counter++;
			}
		}
	}
	
	return local;
}
*/
/*void sort_arr(int *x,int size)
{
	int temp=0;
	for (int i=0;i<size;i++){
		for (int j=0;j<size-1-i;j++){
			if (x[j]<x[j+1]){
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}	
	}
	
	
}
*/
/*char count_occur_in_arr(int *x,int size,int num) 
{
	char counter=0;
	for(int i=0;i<size;i++)
	{
		if (x[i]==num)
			counter++;
	}
	return counter;
}
*/
/*find the repeated num in arr
int repeated_num(int *x, int size)
{
	int count=0;
	int a=0;
	for(int i=0;i<size;i++)
	{
		for (int j=0;j<size;j++)
		{
			if (*(x+j)==*(x+i)){
				count++;
				a=*(x+j);
				break;
			}
		}
	}
	return a;
}
*/
/*	int *ptr=x;
	for(ptr=x;ptr<ptr+size-1;ptr++){
		printf("%d, ",*ptr);
		if (ptr > (&(x+7)))
			break;
	}
}
*/
/*int* merge_arrays(int *x,int *y,int first_size,int second_size,int *res)
{
	int *p=res;
	for(int i=0;i<12;i++)
	{
	if (i<first_size)
		*(p+i)=x[i];
	else if (i>=first_size)
		*(p+i)=y[i];
	}
	res=p;
	return res;
}
*/
/*int factorial_recursion(int num)
{
	if (num==1)
		return 1;
	while(num!=0)
	{
		return num*factorial(num-1);
	}	
}
*/
/*int factorial(int x)
{
	int fac=1;
	while(x>0)
	{
		fac*=x;
		x--;
	}
		
	return fac;
}
*/
/*void print_2D_arr(int (*x)[3])
{
	for(int i=0;i<2;i++)
	{
		printf("\n");
		for (int j=0;j<3;j++)
			printf("%d ",x[i][j]);
		
	}
}
*/
/*double cubic_root(double n){
double i, precision = 0.000001;
   
   for(i = 1; (i*i*i) <= n; i++);         //Integer part

   for(i=1; (i*i*i) < n; i += precision);  //Fractional part
   
   return i;
}
*/
/*void print_Arr_pointer(int *x,int size)
{
	int *p=x;
	int *pp=(p+size);
	for(;p<pp;p++)
		printf("%d ",*p);
}
*/
/*void sort_arr(int *x,int size)
{
	int temp=0;
	for (int i=0;i<size;i++){
		for (int j=0;j<size-1-i;j++){
			if (x[j]>x[j+1]){
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}	
	}
	for (int i=0;i<size;i++)
		printf("%d ",x[i]);
}
*/
/*void binary_search(int *x,int num,int size)
{
	sort_arr(x,size);
	int count=0;
	if (num>=x[size/2])
	{
		for(int i=size/2;i<size;i++)
		{
		if (x[i]==num)
			{
			printf("found at index %d",i);
			count++;
			break;
			}
		}
	}	
	else 
	{
		for(int i=0;i<size/2;i++)
		{
		if (x[i]==num)
		{
			printf("found at index %d",i);
			count++;
			break;
		}
		
		}	
	}
		
		if(count==0) 
			printf("not found");
	}
*/
/*int* circular_shift(int x)
{
	int y=0;
	int *ptr=&y;
	y=1&&(x&(1<<0));
	for(int i=7;i>0;i--)
	{
		y=y<<1;
		y|=1&&(x&(1<<i));
		
	}
	 its main
	while((*y) !=0)
	{
	arr[i]=((*y)%2);
	(*y)/=2;
	i++;
	}
	for (int i=7;i>=0;i--)
	printf("%d",arr[i]);
	
	
	return ptr;
}
*/
/*void takes_arr_and_num(int *x,int num,int size)
{
	int temp=0;
	int a=size;
	for(int i=a-1;i>=0;i--)
	{	
		if(x[i]!=num)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(x[j]==num)
				{
					temp=x[j];
					x[j]=x[i];
					x[i]=temp;
					break;
				}	
			}
		}			
	}
	for(int i=0;i<a;i++)
		printf("%d ",x[i]);	
}
*/
/*void merge_two_arr(int *x,int *y,int xSize,int ySize)
{
	//int merge[xSize+ySize];
	for(int i=0;i<xSize+ySize;i++)
	{
		if(i<xSize)
			printf("%d ",x[i]);
		else 
			printf("%d ",y[i-xSize]);
	}
	
	
	
	int *ptr;
	int *xx=(ptr+5);
	int *xy=(ptr+7);
	int *q=(ptr+12);
	for(ptr=x;ptr<xx;ptr++)
	{
		*ptr=*x;
		x++;
		
	}
	
	for (ptr=y;ptr<xy;ptr++){
		*ptr=*y;
		y++;	
	}
	for(;ptr<q;ptr++)
		printf("%d ",*ptr);
	
}
*/
/*void draw_pyramid(int rows)
{
for(int i=0;i<=rows;i++)
{
	for (int j=0;j<=(2*rows-1);j++)
	{
		if (j>=rows-(i-1)&&j<=rows+(i-1))
			printf("*");
		else 
			printf(" ");
	}
	printf("\n");
	
}	
}
*/
/*void from_little_to_big_endian(int *x,int size)
{
	int temp=0;
	for(int i=0;i<(size/2);i++)
	{
		temp=x[i];
		x[i]=x[size-1-i];
		x[size-1-i]=temp;	
	}
}
*/
/*void remove_repeated_in_arr(int *x,int size)
{
	for ( int i = 0; i < size; i ++)  
    {  
        for (int j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( x[i] == x[j])  
            {  
                // delete the current position of the duplicate element  
                for ( int k = j; k < size - 1; k++)  
                {  
                    x[k] = x [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }
}
	
*/
/*void Fibonacci(int terms)
{
	int a=0,b=1,result;
	for(int i=0;i<=terms;i++)
	{
		printf("%d",a);
		result=a+b;
		a=b;
		b=result;
	}	
}
*/
/*void findMissing(int *arr, int N)
{
    int temp[N + 1];
    for (int i = 0; i <= N; i++) {
        temp[i] = 0;
    }
 
    for (int i = 0; i < N; i++) {
        temp[arr[i] - 1] = 1;
    }
 
    int ans;
    for (int i = 0; i <= N; i++) {
        if (temp[i] == 0)
            ans = i + 1;
    }
    printf("%d", ans);
}
	*/	
/*char searchRecursion(char *ptr,char x,char size)
	{ 
	static int i=0;
		if (ptr[i]==x){
			return i;
		}
		else if(i>=size) {
			return 0xff;
		}
		else 
		{
			i++;
			searchRecursion(ptr,x,size);
		}	
	}
*/		
/*void ArrCopy(char *arr,char size,char* copy)
{
	char check[256]={0};
	int j=0;
	for(int i=0;i<size;i++)
	{
		if(check[arr[i]]==0)
		{
		copy[j]=arr[i];
		j++;
		check[arr[i]]=1;
			
		}	
	}
	copy[j]='F';
}
*/
/*void ReverseStringRecursion(char* x,char size)
{
char temp=0;
static char counter=0;
if(counter<(size-1))
{
	temp=x[counter];
	x[counter]=x[size-1];
	x[size-1]=temp;
	counter++;
	size--;
	ReverseStringRecursion(x,size);
	
}
}
*/







	
	
