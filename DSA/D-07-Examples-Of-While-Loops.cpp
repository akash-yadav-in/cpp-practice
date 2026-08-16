class Solution {
    public:
    int whileLoop(int d) {
         int a = 0;
        int sum = d;
        while (a<49)
        {
            
            sum+= d+=10;
            a = a +1;
         
            cout<<d<<endl;
           
        }
        return sum; 
    }
};
