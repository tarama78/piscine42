#!/bin/sh
cat /etc/passwd | sed "/#/d" | sed "1d" | sed 'n;d;' | awk -F':' ' { print $1 } ' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr "\n" "," | sed "s/,/, /g" | rev | sed "s/ ,/./" | rev
