echo "Enter Day of the Week: "
read day;

case "$day" in
Monday)
    echo "Weekday"
    ;;
Tuesday)
    echo "Weekday"
    ;;
Wednesday)
    echo "Weekday"
    ;;
Thursday)
    echo "Weekday"
    ;;
Friday)
    echo "Weekday"
    ;;
Saturday)
    echo "Weekend Day"
    ;;
Sunday)
    echo "Weekend Day"
    ;;
*)
    echo "Invalid day"
esac