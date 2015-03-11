#!/bin/bash

allFiles() {
for file in $1/*
do
if [ -d $file ]; then
allFiles $file
else
if [ "${file##*.}" == 'h' ]; then
filepath=$(dirname $file)
echo $file
rm $file
else
if [ "${file##*.}" == 'cpp' ]; then
echo $file	
rm $file
fi
fi
fi
done
}

testdir=./proto

allFiles $testdir
