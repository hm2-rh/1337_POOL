#!/bin/sh

stat bomb.txt | cut -d '''"''' -f 2 | rev | cut -d ' ' -f 2 | rev
