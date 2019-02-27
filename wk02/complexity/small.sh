#!/bin/bash

make 2>&1 > /dev/null
for f in 1000 2000 4000 8000
do
  echo "== $f =="
  echo -n "oneLoop: "
  echo $f | time ./oneLoop

  echo -n "doubleLoop: "
  echo $f | time ./doubleLoop
  echo
done
make clean 2>&1 > /dev/null
