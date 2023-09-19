/*4. Test the validity of the following argument using truth table.
Premise: If I go to the mall, I will buy new jeans
Premise: If I buy new jeans, I will buy a shirt to go with it.
Conclusion: If I go to the mall, I will buy a shirt.*/
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

    bool x1[8],x2[8],x[8],y[8],result[8];
    
    cout<<"p\tq\tr\tp->q\tq->r\t(p->q)^(q->r)\tp->r\t(p->q)^(q->r)->(p->r)";

    for(int i=0; i<8 ;i++){
        cout<<endl;
        
        cout<<p[i]<<"\t";
        cout<<q[i]<<"\t";
        cout<<r[i]<<"\t";
        
        x1[i]=cond(p[i],q[i]);
        cout<<x1[i]<<"\t";
        
        x2[i]=cond(q[i],r[i]);
        cout<<x2[i]<<"\t";

        x[i]=logicaland(x1[i],x2[i]);
        cout<<x[i]<<"\t\t";
        
        y[i]=cond(p[i],r[i]);
        cout<<y[i]<<"\t";
        
        result[i]=cond(x[i],y[i]);
        cout<<result[i]<<"\t\t";
            
    }
    
    
    return 0;
}
