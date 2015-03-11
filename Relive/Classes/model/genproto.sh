#!/bin/bash

allFiles() {
for file in $1/*
do
if [ -d $file ]; then
allFiles $file
else
if [ "${file##*.}" == 'proto' ]; then
filepath=$(dirname $file)
./protoc -I=$filepath --cpp_out=$filepath $file
fi
fi
done
}

testdir=./proto

allFiles $testdir
