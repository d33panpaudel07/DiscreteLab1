/*Q.no.2 Use a truth table to test the validity of the following argument using truth table.
If you are a hound dog, then you howl at the moon.
You don't howl at the moon.
Therefore, you aren't a hound dog.*/
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
    bool p[4]={true,true,false,false};
    bool q[4]={true,false,true,false};
    bool x1[4],x[4],y[4];
    int c=0;
    
    cout<<"p\tq\t!p\t!q\tp->q\t(p->q)^!q\t(p->q)^!q -> !p";
    
    for(int i=0; i<4 ;i++){
        cout<<endl;
        
        cout<<p[i]<<"\t";
        cout<<q[i]<<"\t";
        
        cout<<!p[i]<<"\t";
        cout<<!q[i]<<"\t";
        
        x1[i]=cond(p[i],q[i]);
        cout<<x1[i]<<"\t";
        
        
        x[i]=logicaland(x1[i],!q[i]);
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
