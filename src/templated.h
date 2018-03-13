#ifndef TEMPLATED_H
#define TEMPLATED_H

namespace Templated
{

// Linker cannot find it unless inside header

template<typename A,typename B>
void generate( A first, B second)
{
	first.doStuff();
	second.doStuff();
}

}

#endif
