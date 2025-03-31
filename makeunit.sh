#!/bin/sh

for num in `seq $1 $2`; do
  mkdir src/Unit$num
  echo "" >> .src/Unit$num/main.cpp
done