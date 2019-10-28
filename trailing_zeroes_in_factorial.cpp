int Solution::trailingZeroes(int A) {
    if(A<5) return 0;
    //if(A>=5 && A<10) return 1;
    else return A/5+trailingZeroes(A/5);
    
}