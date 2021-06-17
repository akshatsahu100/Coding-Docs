string kangaroo(int x1, int v1, int x2, int v2) {
    int num = abs(x1 - x2);
    int den = abs(v1 - v2);
    if(v1 == v2)
        if(x1 == x2)
            return "YES";
        else
            return "NO";
            
    if(x1 == x2){
        if(v1 == v2)
            return "YES";
        else
            return "NO";
    }
    else if(x2 < x1){
        if(v2 < v1)
            return "NO";
        else{
            if(num % den == 0)
                return "YES";
            else
                return "NO";
        }
    }
    else{
        if(v1 < v2)
            return "NO";
        else{
            if(num % den == 0)
                return "YES";
            else
                return "NO";
        }
    }
}
