docker ps -a
CNT=prog
docker start $CNT
docker attach  $CNT

# CTRL P Q
# return to host from container
