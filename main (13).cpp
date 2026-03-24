#include <iostream>
using namespace std;
int main()
{
  /*  
  //1 : Number % Same Number =0
  //2 : Small % Big= Small
  //3 : Big % Small=Small-Big
  
  cout<<5%5<<endl;     //0
  cout<<5%20<<endl;    //5
  cout<<20%5<<endl;    //0
  cout<<21%5<<endl;     //1  
  cout<<20%3<<endl;     // 20 17 14 11 8 5 (2)   
    
    */



  // increment  Z++ 
  // decrement  Z--
  // post fix   Z++
  // prefix     --Z
  
  
  int x=3;
  cout<<x+1<<endl; //4
 
 
int y=5;
y++;
cout<<y<<endl;//6

int z=5;
cout<<z++<<endl;//6
cout<<z<<endl; //7


int u=5;
cout<<++u<<endl;//6
cout<<u<<endl;//6




/*x=1
x+=2//3
*/
int c=5;
c*=4;//20 
cout<<c<<endl;

int p=7;
cout<<(p*=4)<<endl; //28



/*                               الاولويات العمليات الحسابيه 
1  ()
2  /:*:%
3  +:-
4  =

*/



/*                               المقارنة (true(1)&false(0))
1 <>
2 <=
3 >=
4 =!
5 ==

int x=4;
int y=5;

cout<<(x>y)<endl; // false (0)الجواب صفر لانه الخطا يمثل صفر 
لازم القارنه تكون بين اقواس 


int x=5;
int y=5;

cout<<(x>=y)<endl;//1




int x=4;
int y=5;

cout<<(x==2)<endl;//0

int x=4;
int y=4;

cout<<(x==y)<endl;//1



*/







return 0;
}