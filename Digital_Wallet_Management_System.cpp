#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
      vector <array<int,2>> v;
    array<int,2> n;
   
    for(int i=0;i<a;i++)
    { 
        
     cin>>n[0]>>n[1];
        
      
     v.push_back(n);
        
    }
    
    int b;
    array<int,2> c;
    array<int,2> w;
    cin>>b;
    for(int j=0;j<b;j++)
    { 
        int x,y,z;
     cin>>x>>y>>z;    
    
        int f,r;
        for(int k=0;k<a;k++)
        {   
            
            c=v[k];
            if(c[0]==x)
            {
                
                r=k;   
            }
            if(c[0]==y)
            {
                f=k;
            }
           
            
        }
        c=v[r];
        w=v[f];
        
         if(c[1]>=z)
          {
                   c[1]=c[1]-z;
            v[r]=c;
            
                   cout<<"Success"<<endl;
                   w[1]=w[1]+z;
             v[f]=w;
           
                }
                else{
                    cout<<"Failure"<<endl;
                   
                }
        
  
    }
    cout<<endl;
    int min=INT_MAX;
    int g;
    array<int,2> u;
     array<int,2> p;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            u=v[j];
            if(u[1]<min)
            {
                min=u[1];
                g=j;
            }
            
        }
        p=v[g];
        cout<<p[0]<<" "<<p[1]<<endl;
        p[1]=INT_MAX;
        min=INT_MAX;
        v[g]=p;
        
    }
      
    return 0;
}
