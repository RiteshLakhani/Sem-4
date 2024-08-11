echo "Enter 1 for date and 2 for cal: "
read c
cd=1
if [ $c -eq 1 ]; then
    date
elif [ $c -eq 2 ]; then
    echo " "
    echo "Sun Mon Tue Wed Thu Fri Sat"
    echo "---------------------------"
    for ((i=1; i<=6; i++)); do
        for ((j=0; j<7; j++)); do
            echo -n "  $cd "
            cd=$((cd+1))
        done
        echo
    done
fi