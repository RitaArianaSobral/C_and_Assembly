void copy_vec(int *vec1, int *vec2, int n){
    for(int index = 0; index<n; index++){
        int* i = &vec1[index];
        vec2[index] = *i;
    }
}