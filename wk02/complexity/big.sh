#!/bin/bash

make 2>&1 > /dev/null
for f in 10000 20000 40000 80000
do
  echo "== $f =="
  echo -n "oneLoop: "
  echo $f | time ./oneLoop

  echo -n "doubleLoop: "
  echo $f | time ./doubleLoop
  echo
done
make clean 2>&1 > /dev/null
