printf "Enter 1st Number: "
read a;

printf "Enter 2nd Number: "
read b;

if [ $a -gt $b ]
then
    echo "A is grater than B "
else
    echo "B is grater than A "
fi