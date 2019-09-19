#!/bin/bash
if [ $# == 1 ]
then git config --global user.email andis.ledins1@gmail.com
git add .
#git commit -m "2019_20_09"
git commit -m $1
git push origin master
fi
