#!/bin/sh
ldapsearch -Q "cn=*bon*" cn | grep ".*BON.*" | wc -l | sed "s/ //g"