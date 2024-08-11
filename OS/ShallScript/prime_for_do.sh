echo "Enter Numner to check prime or not"
read a;

is_prime=true

for ((i=2; i*i<=a; i++))
do
    if [ $((a%i)) -eq 0 ]; then
        is_prime=false
        break
    fi
done

if [ $is_prime = true ]; then
    echo "$a is a prime number."
else
    echo "$a is not a prime number."
fi
