void frequencies(float *grades, int n, int *freq){  
    int maxNotas = 20;  
    for(int index = 0; index < n ; index++){
        int intpart = *grades;
        
        if(intpart >= 0 && intpart <= maxNotas){
            if(intpart == 0)
                *freq += 1;
 
            else{
                int i = 1;
                while(i <= intpart){
                    if((intpart / i) == 1 && (intpart % i) == 0)
                        *(freq + i) += 1;
                    
                    i++;
                }
            }
        }
        grades++;
    }
}  