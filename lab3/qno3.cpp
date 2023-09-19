/*3. Test the validity of the following argument using truth table.
I will buy a new goat or a used Yugo.
If I buy both a new goat and a used Yugo, I will need a loan.
I bought a used Yugo and I don't need a loan.
Therefore, I didn't buy a new goat.*/
#include<iostream>
using namespace std;

bool logicaland(bool x, bool y) {
    bool result = x && y;
    return result;
}

bool logicalor(bool x, bool y) {
    bool result = x || y;
    return result;
}

bool cond(bool x, bool y){
    if(y || !x){
        bool result=true;
        return result;
    }
    else{
        bool result=false;
        return result;
    }
}

bool bicond(bool x, bool y){
    if(x==y){
        bool result=true;
        return result;
    }
    else{
        bool result=false;
        return result;
    }
}

int main(){
   bool p[8]={true,true, true,true,false,false,false,false};
    bool q[8]={true,true,false,false,true,true,false,false};
    bool r[8]={true,false,true,false,true,false,true,false};

    bool x1[8],x2[8],x3[8],x[8],y[8],result[8];
    int c=0;
    
    cout<<"p\tq\tr\t!p\t!r\tp^q\t(p^q)->r\t q^!r\t(p^q)->r)^(q^!r)\t((p^q)->r)^(q^!r))->!p";

    for(int i=0; i<8 ;i++){
        cout<<endl;
        
        cout<<p[i]<<"\t";
        cout<<q[i]<<"\t";
        cout<<r[i]<<"\t";
        cout<<!p[i]<<"\t";
        cout<<!r[i]<<"\t";
        
        x1[i]=logicaland(p[i],q[i]);
        cout<<x1[i]<<"\t";
        
        x2[i]=cond(x1[i],r[i]);
        cout<<x2[i]<<"\t\t";
        
        x3[i]=logicaland(q[i],!r[i]);
        cout<<x3[i]<<"\t\t";

        x[i]=logicaland(x2[i],x3[i]);
        cout<<x[i]<<"\t\t";
        
        y[i]=cond(x[i],!p[i]);
        cout<<y[i]<<"\t";
        
        if(y[i]==false){
            c=c+1;
        }
            
    }
    
    if(c==0){
        cout<<"\n\nStatement is valid.";
    }else{
        cout<<"\n\nStatement is not valid.";
    }
    return 0;
}
