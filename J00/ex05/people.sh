#!/bin/sh
ldapsearch -LLLx uid="z*" cn man | grep -e "cn" | sort -rf | sed "s/cn: //g"