void print_string(node * temp, string s, long &a)
{
    if(temp ->left != NULL || temp -> right != NULL)
    {
        if(s[a] == 48)
        {
            a++;
            print_string(temp -> left, s, a);
        }
        
        else
        {
            a++;
            print_string(temp -> right, s, a);
        }
    }
    
    else
    {
        cout<<temp ->data;
        a--;
        return ;
    }
}


void decode_huff(node * root,string s)
{
    node * temp;
    temp = root;
    
    for(long a = 0 ; a < s.size() ; a++)
        print_string(root, s, a);
}