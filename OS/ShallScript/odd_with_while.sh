echo "Enter number to print odd numbers: "
read a;

i=1
while [ $i -le $a ]
do
    if [ $((i%2)) -ne 0 ]; then
        echo "$i"
    fi
    i=$((i + 1))
done
