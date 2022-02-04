#include<iostream>
using namespace std;

    // This is Fibonacci Funtion :
void fib (int n)
{
    
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

    // This is Factorial Function :
int fac(int n)
{
    int factorial = 1;
    for (int i=2;i<=n;i++)
    {
        factorial *= i;
    }
    return factorial;
}

    // This is the Main Function :
int main()
{   
    int n;

// FIBONACCI SERIES :

    cout<<endl<<"Fibonacci Series : "<<endl;
    cout<<"Enter the no. of terms to be printed : ";
    cin>>n;

    fib(n);
    

// FACTORIAL : 
    cout<<endl<<endl<<"Factorial : "<<endl;
    cout<<"Enter the no. : ";
    cin>>n;

    int ans = fac(n);
    cout<<"Factorial of "<<n<<" = "<<ans<<endl;

// nCr :

    int r;
    cout<<"Let's print nCr : "<<endl;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    int nCrAns = fac(n)/(fac(n-r)*fac(r));
    cout<<"nCr = "<<nCrAns<<endl;


    return 0;
}


