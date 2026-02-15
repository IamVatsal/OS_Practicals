echo "Enter Number: "
read num
i=2
isPrime=1
while [ $i -lt $num ]
do
    temp=`expr $num % $i`
    if [ $temp = 0 ]
    then
    isPrime=0
    fi
    i=`expr $i + 1`
done
if [ $isPrime = 1 ]
then
    echo "Number Is Prime"
else
    echo "Number Is Not Prime"
fi