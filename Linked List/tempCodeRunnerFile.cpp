
    Node* prev=NULL;

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insert(head, value);
    }
    deletion(head,