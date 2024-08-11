echo "Enter a number to print its multiplication table: "
read number

counter=1
while [ $counter -le 10 ]
do
    result=$((number * counter))
    echo "$number * $counter = $result"
    counter=$((counter + 1))
done

print "Enter Number to Print multiplication table:"
read n

counter=1;
while [ $counter -le 10 ]
do
    result=$((n * counter))
    echo "$n * $counter = $result"
    counter=$((counter + 1))
done
