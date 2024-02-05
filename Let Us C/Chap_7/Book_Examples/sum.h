int sumRec(int num){
    int sum = 0 ;

    if (num == 0)
        return 0 ;
    else
        return num + sumRec( num - 1 ) ;
}