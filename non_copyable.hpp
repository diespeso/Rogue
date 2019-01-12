#ifndef NON_COPYABLE_HPP
#define NON_COPYABLE_HPP

class NonCopyable
{
public:
	NonCopyable(){}
	virtual ~NonCopyable(){}
protected:
	NonCopyable(const NonCopyable&){}
};
#endif