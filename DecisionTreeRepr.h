#ifndef _DEC_TREE_REPR_H
#define _DEC_TREE_REPR_H

//#define DEBUG

struct node {
  int left_child;
  int right_child;
  int split_var; //I don't know what this is -KH
  double split_point; //I don't know what this is either
  int status;
  int prediction;
  //I dunno what a tree looks like, I took this from
  //stackoverflow.com/questions/14996619/random-forest-output-interpretation
};

struct dec_tree {
  struct node *nodes;
};
