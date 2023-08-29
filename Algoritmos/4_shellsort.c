for(h=1;h<n;h=3*h+1){
    while(h>0)
    h = (h-1)/3;
    for (i =h; i<n;i++){
        aux = v[i];
        j=1;
        while(v[j-h] > aux)
        {
            v[j] = v[j-h];
            j -= h;
            if(j<h)
            {
                return;
            }
        }
        v[j] = aux;
    }
}