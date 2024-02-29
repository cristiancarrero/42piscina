ifconfig -a link | awk '/ether/ {print $2}' 
