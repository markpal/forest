class Tree{
  private:
    int height;
    char symbol;
    string color;
    int **tab;

    
  public:
    
    void printTree();

    Tree(int h, char s, string c);
    ~Tree();
    
    void printTreeFromTab();
    int getHeight();
    int getWidth();

    friend class Forest;

};