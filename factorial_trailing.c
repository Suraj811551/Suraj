int trailingZeroes(int n){


if(n<5)
            return 0;
        
        int trailingZeoes = 0;
        
        while(n > 0){
           trailingZeoes += n/5;
            n = n/5;
        }
        
        return trailingZeoes;
    }
