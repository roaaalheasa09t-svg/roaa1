#include <iostream>
using namespace std ;
int main()
{
    
                                 // switch 
    // مثل اف بالزبط وظيفتها 
    
/*    
    int x =3 ;
    
    switch(x)
    {
        case 3:
        cout<<"x is equal 3\n";
        break;// نضع بريك مشان يوقف للحاله هاي لو ما وضعتها كان رح يكمل للاخير لاخر جمله
        
        case 2:
        cout<<"x is equal 2\n";
        break;
        
        case 10:
        cout<<"x is equal 10\n";
        break;
        
        default:
        cout<<"x not equal any number i know\n";
    }*/
    
    
    
    /*
                                 
                                   //switch execrise
                                   
           // program to build a simple calculater using switch statmenet                         
            //برنامج اله حاسبه 
    char oper;
    float num1;
    float num2;// حطيناها مشان لو المستخدم ادخل قيمه كسريه
    cout <<"Enter an operator(+,-,*,/)\n";
    cin>>oper;
   
   cout<<"Enter the number\n";
   cin>>num1;
   cin>>num2;
   
   switch(oper)
   {
       case '+'://حطينا علامه تنصيص مفرده لانه تشار
       cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
       break;
       
       case '-':
       cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
       break;
       
       case '*':
       cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
       break;
       
       case '/':
       cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
       break;
       
       default:
       cout<<"Error the operator is not correct\n";
       
       
       
   }*/
   
   
   
   
  /* 
   
                          // loops (for/while/do while)
                          //جمل تكراريه 
   
   
   
    for(int i =1 ; i<=100;i++)
    {
        cout<<i<<":Roaa \n";//حطينا اي مشان يعد 1 2 3
    }// هاي رح تضل ترجع الاقتران يتكرر 100
    // اعطينا قيمه اوليه لل اي وهي واحد والواحد رح يضل يتكرر لحد 100 لانه اصغر من 100 
    // لو شلنا i++ كان رح يضل يتكرر للمالانهايه
    */
    
    
    
                          //for loop execrise
                          
   /* 
    for(int i =1; i<=10;i++)
    {
        i++;
        cout<<i<<"Roaa\n";
        
    }// هون رح يطبع 2 4 6 8 10 لانه في اي مرتين 
    
    
    
    
    for(int i =1; i<=10;)
    {
        i++;// هون رح يطبع من2-11 لانها قبل سياوت
        cout<<i<<"Roaa\n";
    }
    
    
    for(int i =1; i<=10;)
    {
        
        cout<<i<<"Roaa\n";
        i++;
    }//هون طبيعي رح يطبع من 1-10 لانه بعد سي اوت 
    
   
    
    for(int i =10; i>=1;i--) // مشان ييطبع 10 9 8 7 6 5 4 3 2 1 تنازليا 
    {
       
        cout<<i<<"Roaa\n";
    }*/
    
    
    
    
    
                                 // insted for
                                 
                                 
    /*                             
    int week=4;
    int day=7;
    
    for(int i=1;i<=week;i++)// لانه تحقق شرط فور الرئيسيه ندخل للداخل ونحقق الشرط الي داخلها وهو انستد اف 
    {
        cout<<"week :"<<i<<endl;
        
        for(int j=1;j<=day;j++)
        {
            cout<<"day :"<<j<<endl;
        }// رح يضل يتكرر لحد 7 ايام بعدين برجع للفور الرئيسيه وهكذا
    }*/
    
    
    
    
    
                              //while نفس فور 
    /*
    
    int i=1;
    while(i<=10)//هون تحقق الشرط لانه الواحد اقل من 10
    {
        cout<<i<<"Roaa\n";
        i++;
    }// هون رح تضل تكرر حالها */
    
    
   


                                // execrise while
    //  برنامج يجمع الارقام الموجبه  لو المستخدم دخل رقم سلبي البرنامج ينتهي 
    // والرقم السالب ما ينجمع ما الرقم االارقام الموجبه
    // 1 2 3 4 5 -8 يجمع جميع الارقام ما عدا السالب
    
    /*
    int num=1;
    int sum=0;
    
    cout<<"enter a number\n"<<endl;
    cin>>num;
    
    
    while(num>=0)//لو تحقق الشرط ادخل داخل وايل 
    {
        sum=sum+num ;//
        cout<<"enter a number\n";
        cin>>num;
    }
    
    cout<<"the sum of the number "<<sum<<endl;
    */
    
    
    
    
    
    
                             //do while وهي جمله تكرار 
                                    
   /* int x=1;
    do{
        
        cout<<x<<endl;
        x++;// لو شغلت البرنامج رح يطبع مره وحده قيمه اكس وهي واحد لانه وايل بعدها لم تحقق الشرط
    }while(x>=5);*/
    
    
    int x=1;
    do{
        
        cout<<x<<endl;
        x++;
    }while(x<=5);//هون الشرط تحقق اذن يطبع تعداد من 1-5
    
    
    return 0;
}