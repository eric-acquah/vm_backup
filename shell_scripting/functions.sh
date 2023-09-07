#!/bin/bash
#Trying my hands on some basic shell script functions
#___________________________________________________________________

function work_out(){
    YES="yes"
    MR="yes"
    I=0

    #prompt user to enter directory name
    echo -e "What directory?..."
    read DIR
    echo -e "\n"
    #for 3 trys only check if directory exist

    if [[ ! -d "$DIR" ]]; then

	while [[ $I -lt 4 ]]
	      do
	echo "Can't recognise this directory..."
	echo "Try again"
	read DIR
	(($I+1))
	done
	fi

      #if directory exist then excute:

    if [ -d "$DIR" ]; then
	clear
	echo -e "You have $(ls -1 $DIR | wc -l) items contained in this directory...\n"
	echo -e "wanna view them?___ (yes/no)"
	read VIEW

	if [ $VIEW == $YES ]; then
	    ls $DIR
	    echo -e "\n"
	    echo "view more? (yes/no)"
	    read MORE
	    echo -e "\n"
	    #view more option:
	    if [ $MORE == $MR ]; then
		ls -al $DIR
		pwd 
		fi
	else
	    echo "sure have a nice day"
	    cd ~
	fi

    fi

}

work_out
