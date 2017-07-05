bool linear_equation(int a,int b,int c,int &x,int &y)
{
    int d=exgcd(a,b,x,y);
    if(c%d)
        return false;
    int k=c/d;
    x*=k; y*=k;    //求得的只是其中一组解
    return true;
}