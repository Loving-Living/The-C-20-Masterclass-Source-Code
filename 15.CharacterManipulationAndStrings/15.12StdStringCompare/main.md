# 1) s1.compare(str)

`int compare( const basic_string& str ) const noexcept;`

Compares this string to str.<br>
For example: s1.compare(s2)=s1-s2
    
```
	std::string str1{"Hello"};
	std::string str2{"World"};
	
    	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;
    	std::cout << "str1.compare(str2) : " << str1.compare(str2) << std::endl; // negative
   	 std::cout << "str2.compare(str1) : " << str2.compare(str1) << std::endl; // positive
```

# 2) s1.compare(i,count,s2)

`int compare( size_type pos1, size_type count1,const basic_string& str ) const; `

Compares a  substring  of this string(from pos1, going count1 positions) to str
```
	std::string str1 = "Hello";
    	std::string str3{"Hello World"};
    	std::cout << "Comparing 'World' to 'Hello' : " << str3.compare(6,5,str1) << std::endl;//1
```

# 3) s1.compare(s2)

`int compare( const CharT* s ) const;`

Compares this string to the null-terminated character sequence beginning at the character pointed to by s.
    std::string str5{"Hello"};
    const char* message {"World"};
    std::cout << "Comparing Hello to World : " << str5.compare(message) << std::endl;//-1
    std::cout << "Comparing Hello to World : " << str5.compare("World") << std::endl; //-1


    return 0;
}
