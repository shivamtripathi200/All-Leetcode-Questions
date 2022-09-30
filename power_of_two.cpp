bool isPowerOfTwo(int n){
    int m=n;
    int i=0;
    int  a;
    if(m<=0){
        return false;
    }
    while(m!=0){
        m=m>>1;
        i++;
    }
    a=pow(2,i-1);
    if(n==a){
        return true;
    }
    else{
        return false;
    }

}
