
// Lab Exercise 4.

#include "set.h"



bool set::equal( const std::string& s1, const std::string& s2 )
{
    if(s1.size() != s2.size())
        return false;
    for(int i = 0; i < s1.size(); i++)
    {
        if(tolower(s1[i]) != tolower(s2[i]))
        {
            return false;
        }
    }
    return true;
}
bool set::contains( const std::string& el ) const
{
    
    for(const_iterator i = data.begin(); i != data.end(); ++ i)
    {
        if(equal(*i, el) == 1)
        {
            return true;
        }
    }
    return false;
}
bool set::insert( const std::string& el)
{
    if(contains(el) == 0)
    {
        data.push_back(el);
        return true;
    }
    return false;
}
size_t set::insert( const set& s )
{
    size_t k = 0;
     for(const_iterator i = s.begin(); i != s.end(); ++ i)
    {
        if(insert(*i) == 1)
            k++;
    }
    return k;
}
bool set::remove( const std::string& el )
{
	int i = 0;
	for(i = 0; i < data.size(); ++ i)
    {
        if(equal(data[i], el) == 1)
        {
            std::swap(data[i], data[data.size() - 1]);
            data.pop_back();
            return true;
        }
    }
    return false;
}
size_t set::remove( const set& s )
{
    size_t k = 0;
    for(const_iterator i = s.begin(); i != s.end(); ++ i)
    {
        if(remove(*i) == 1)
            k++;
    }
    return k;
}
std::ostream& operator << ( std::ostream& out, const set& s )
{
    out << "{";
    for(set::const_iterator i = s.begin(); i != s.end(); ++ i)
    {
        if(i != s.begin())
        {
            out << ", " << *i;
        }
        else
        {
        	out << *i;
		}
    }
    out << "}";
    return out;
}
bool subset( const set& s1, const set& s2 )
{
    int k = 0;
    for(set::const_iterator i = s1.begin(); i != s1.end(); ++ i)
    {
        for(set::const_iterator j = s2.begin(); j != s2.end(); ++ j)
        {
            if(set::equal(*i,*j) == 1)
            {
                k++;
                break;
            }
        }
    }
    if(k == s1.size())
    {
    	return true;
	}
	else
	{
		return false;
	}
}



