int main()
{
  //(1+2+3)+ (5+6+7)+(9+10);

  // if (child[0]->is_leaf() != true && child[1]->is_leaf())
  //(9+10) + ((1+2+3)+ (5+6+7));
  //(1+2)+9+(3+5)+(7+8);

  // (child[0]->is_leaf() && child[1]->is_leaf() != true)
  //(3+(5+6)+9) + (1+2);
  (1+2) + (9 + (3 +(5+6)));

  //(1+2)+(3+4+5);
  //(1+2)+(3+4)+(5+6) + (7+8);

  //1+2+3+4+5;
  //1+2;
  //1+(2+3);
  //1+2+3;
  //(1+2)+(3+4);
}

