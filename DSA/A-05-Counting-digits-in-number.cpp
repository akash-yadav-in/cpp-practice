class Solution {
public:
    int countDigit(int n) {
          if (n<10)
        {
            return 1;
        }
        else if (n<100)
        {
            return 2;
        }
        else if (n<1000)
        {
            return 3;
        }
        else if (n<10000)
        {
            return 4;
        }
        

    }
};
