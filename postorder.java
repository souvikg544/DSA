static String postorder(Node tree)
  {
         postorder(tree.left);
         postorder(tree.right);
         System.out.println(tree.root);
  }
