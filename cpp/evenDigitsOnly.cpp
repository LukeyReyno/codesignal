bool solution(int n) {
    int divisor = 1;
    
    while (divisor <= n)
    {
        if (((n / divisor) % 10) % 2 == 1)
        {
            return false;
        }
        
        divisor *= 10;
    }
    
    return true;
}
