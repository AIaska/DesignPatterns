/*
Object pooling can improve performance if the cost and rate of initializing a class instance is high, but the number of instantiations in use at any one time is low.

example from sourcemaking.com
https://sourcemaking.com/design_patterns/object_pool - info
https://sourcemaking.com/design_patterns/object_pool/cpp/1 - code
*/

#include "ObjectPool.h"

int main()
{
	ObjectPool* pool = ObjectPool::getInstance();
	Resource* one;
	Resource* two;
	/* Resources will be created. */
	one = pool->getResource();
	one->setValue(10);
	std::cout << "one = " << one->getValue() << " [" << one << "]" << std::endl;
	two = pool->getResource();
	two->setValue(20);
	std::cout << "two = " << two->getValue() << " [" << two << "]" << std::endl;
	pool->returnResource(one);
	pool->returnResource(two);
	/* Resources will be reused.
	 * Notice that the value of both resources were reset back to zero.
	 */
	one = pool->getResource();
	std::cout << "one = " << one->getValue() << " [" << one << "]" << std::endl;
	two = pool->getResource();
	std::cout << "two = " << two->getValue() << " [" << two << "]" << std::endl;

	cin.get();
	return 0;
}