#!/bin/bash

#receieve user input
random=$(($RANDOM % 20))

echo "Hi there!"
sleep 1
echo "I am fortune teller bot"
sleep 3
echo "Want to see the age in which you will become rich?"
sleep 1
echo "Enter your name and age: "
read name age

echo "Hello $name, you are going to be rich when you are $(($age + $random)) years old."

#calculate the excact age you will become rich
