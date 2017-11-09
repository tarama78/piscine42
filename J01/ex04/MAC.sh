#!/bin/sh
ifconfig | grep "\tether" | sed "s/ether //g" | sed "s/ //g" | tr -d "\t"
