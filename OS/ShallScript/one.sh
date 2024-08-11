echo "Enter 1st Number ";
read a;

echo "Enter 2nd Number ";
read b;

if [ $a -gt $b ];then
    echo "A is max";
elif [ $a -eq $b ];then
    echo "Both Number are same";
else
    echo "B is max";
fi