static string preorder(Node tree)
  {
   


      System.out.println(tree.root);
      preorder(tree.left);
      preorder(tree.right);
  }
