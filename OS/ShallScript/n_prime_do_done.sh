echo "Enter the value of n: "
read n

echo "First $n prime numbers are:"

count=0
number=2

while [ $count -lt $n ]
do
    is_prime=true

    for ((i=2; i*i<=number; i++))
    do
        if [ $((number%i)) -eq 0 ]; then
            is_prime=false
            break
        fi
    done

    if [ $is_prime = true ]; then
        echo $number
        ((count++))
    fi

    ((number++))
done
