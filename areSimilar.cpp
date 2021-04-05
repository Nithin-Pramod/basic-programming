bool areSimilar(vector<int> a, vector<int> b) {
    int count=0;
    vector<int> ind;
    for(int i = 0 ; i < a.size(); i++)
    {
        if(a[i]!=b[i])
        {
            ind.push_back(i);
            count++;
        }
    }
    if(count==2)
    {
        if( ( a[ind[0]]==b[ind[1]] ) && ( b[ind[0]]==a[ind[1]] ))
        {
            return true;
        }
        else {
            return false;
        }
    }
    if(count>2)
        return false;
    else
        return true;
    
}
