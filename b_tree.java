static string preorder(Node tree)
  {
      preorder(tree.left);
      System.out.println(tree.root);
      preorder(tree.right);
  }
