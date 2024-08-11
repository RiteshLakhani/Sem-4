echo "Enter Number to Print:- "
read a

i=1
while [ $i -le $a ]
do
    echo "$i"
    i=`expr $i + 1`
done
