bool leap_year(int year)
{
    if(year % 4 == 0){
        if((year % 100 == 0 && year % 400 == 0) || year % 100 != 0)
            return true;
    }
    return false;
}
