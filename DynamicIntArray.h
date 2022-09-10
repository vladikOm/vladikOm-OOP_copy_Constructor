#pragma once
class DynamicIntArray
{
private:
	int* arr = nullptr;
    size_t size = 12;

public:
	
	DynamicIntArray(size_t size);
    ~DynamicIntArray();
	DynamicIntArray(const DynamicIntArray& other);

	size_t GetSize() const { return size; }
	int GetElement(size_t index) const;
	void SetElement(size_t index, int value);

};

