hour=`date +%k`
if [ $hour -ge 5 ] && [ $hour -le 12 ]
then
echo "Good Morning"
elif [ $hour -ge 13 ] && [ $hour -le 17 ]
then
echo "Good Afternoon"
elif [ $hour -ge 18 ] && [ $hour -le 20 ]
then
echo "Good Evening"
else
echo "Good Night"
fi