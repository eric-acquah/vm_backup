#!/bin/bash

#greet me
name=$1
part=$2

user=$(whoami)
date=$(date)
where=$(pwd)

echo "Good evening $name"

sleep 1

echo "You're looking good today $name"

sleep 1

echo "You have the best $part I've ever seen $name"
