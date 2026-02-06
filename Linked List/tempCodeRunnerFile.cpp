/Base condition.....
    if(head==NULL){
        return;
    }
    //Recursive condition......
    reverse(head->Next);
        cout<<head->val<<" ";