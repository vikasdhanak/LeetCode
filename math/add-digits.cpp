class Solution {
public:
    int addDigits(int num) {
         if(num==0)return 0; // Zero case: If num is 0, digital root is 0
         if(num%9 == 0)return 9;//If num % 9 equals 0 (and num ≠ 0), digital root is 9

         return num%9; // For all other numbers, digital root is num % 9
        
      
    }
};