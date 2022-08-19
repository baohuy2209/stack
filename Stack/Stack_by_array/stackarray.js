/* javascript program to implement basic stack
operations 
*/
var t = -1;
var MAX = 1000;
var a = Array(MAX).fill(0); // Maximum size of Stack

function isEmpty() {
  return (t < 0);
}

function push(x) {
  if (t >= (MAX - 1)) {
      document.write("Stack Overflow");
      return false;
  } else {
  t+=1;
      a[t] = x;
        
      document.write(x + " pushed into stack<br/>");
      return true;
  }
}

function pop() {
  if (t < 0) {
      document.write("Stack Underflow");
      return 0;
  } else {
      var x = a[t];
      t-=1;
      return x;
  }
}

function peek() {
  if (t < 0) {
      document.write("Stack Underflow");
      return 0;
  } else {
      var x = a[t];
      return x;
  }
}

function print() {
  for (i = t; i > -1; i--) {
      document.write(" " + a[i]);
  }
}

  push(10);
  push(20);
  push(30);
  document.write(pop() + " Popped from stack");
  document.write("<br/>Top element is :" + peek());
  document.write("<br/>Elements present in stack : ");
  print();