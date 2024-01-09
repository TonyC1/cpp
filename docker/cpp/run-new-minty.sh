#!/bin/bash
echo "Creating New Container"
if [ "$#" == "1" ]
then
    echo "Container Name is $1"
    docker run -it -h "$1" --name "$1" -v "/home/user/code/cpp":/code -w /code mygcc /bin/bash

else
    echo "you need to specify a name for the container"

fi

# docker run -it -h mygcc -v "/home/user/Google Drive/linux-google/code/cpp":/code -w /code mygcc /bin/bash
#
# CTRL P Q
# return to host from container
