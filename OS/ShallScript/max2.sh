printf "Enter 1st Number: "
read a;

printf "Enter 2nd Number: "
read b;

if [ $a -gt $b ]
then
echo "A is grater than B "
fi

if [ $b -gt $a ]
then
echo "B is grater than A "
fi