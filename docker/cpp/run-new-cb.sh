#!/bin/bash
echo "Creating New Container- CHROME BOOK"
if [ "$#" == "1" ]
then
    echo "Container Name is $1"
    docker run -it -h "$1" --name "$1" -v /home/cb-liinux/code/cpp:/code -w /code mygcc /bin/bash

else
    echo "you need to specify a name for the container"

fi

# docker run -it --rm -h cpp -v /home/cb-liinux/google/code/cpp:/code -w /code gcc /bin/bash

# CTRL P Q
# return to host from container
