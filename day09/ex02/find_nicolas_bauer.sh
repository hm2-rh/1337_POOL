#!/bin/sh

cat $1 | grep -i "Nicolas" | grep -i "Bauer" | wc -l | tr -d ' '
