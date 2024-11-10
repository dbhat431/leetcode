

bool isHappy(int n) {
    int digit, sum;
    int m = n;

    if (n > 0) {
        while (true) {
            sum = 0;  // Reset sum for each iteration
            
            // Calculate the sum of squares of digits
            while (n > 0) {
                digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            
            // Check if we reached 1 (happy number)
            if (sum == 1) {
                return true;
            }
            
            // Check if we're in a cycle (not a happy number)
            if (sum == 4) {
                return false;
            }
            
            // Update n to the new sum for the next iteration
            n = sum;
        }
    }
    
    return false;
}
