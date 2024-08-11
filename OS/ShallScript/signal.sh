echo "Enter Current State for Traffic Signal: "
read state

case "$state" in
red)
    echo "Stop"
    ;;
yellow)
    echo "Ready to Go!!!!"
    ;;
green)
    echo "Goo!!!!"
    ;;
*)
    echo "Invalid State for Traffic Signal"
esac