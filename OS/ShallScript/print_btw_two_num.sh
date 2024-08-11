echo "Enter the first number: "
read a

echo "Enter the second number: "
read b

i=$a
while [ $i -le $b ]
do
    if [ $((i % 2)) -eq 0 ] && [ $((i % 3)) -ne 0 ]; then
        echo "$i"
    fi
    i=$((i + 1))
done
