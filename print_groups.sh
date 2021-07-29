#!/bin/sh
groups $FT_USER | tr ' ' ','
groups $FT_USER | sed 's/ /,/g' |tr -d '\n'