#!/bin/bash
echo "hello!"
echo "Please enter your name and age: "

read NAME AGE

echo "Dear $NAME, fast forward into your future, when you are about $AGE years old, you will be unstopable!"

pwd

echo "Ok now enter the secret code to open this special file: "
read CODE

if [ "$CODE" = "i can" ];
then
    cat codefile.tst
else
    echo "Oops! you don't belong here..."
    cd ../..
fi
