#pragma once

enum PersistenceType
{
	File, Queue, Pathway
};

struct PersistenceAttribute
{
	PersistenceType type;
	char value[30];
};

const int NUM_ENTRIES = 6;

PersistenceAttribute input[NUM_ENTRIES] =
{
  {
	File, "state.dat"
  }
  ,
  {
	File, "config.sys"
  }
  ,
  {
	Queue, "compute"
  }
  ,
  {
	Queue, "log"
  }
  ,
  {
	Pathway, "authentication"
  }
  ,
  {
	Pathway, "error processing"
  }
};


class Reader
{
public:
	void setBuilder(Builder *b)
	{
		_builder = b;
	}
	void construct(PersistenceAttribute[], int);
private:
	Builder *_builder;
};

void Reader::construct(PersistenceAttribute list[], int num)
{
	for (int i = 0; i < num; i++)
		if (list[i].type == File)
			_builder->configureFile(list[i].value);
		else if (list[i].type == Queue)
			_builder->configureQueue(list[i].value);
		else if (list[i].type == Pathway)
			_builder->configurePathway(list[i].value);
}
