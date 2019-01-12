
template <typename T>
bool Util::find(const std::vector<T> vect, const T target)
{
	for (T t: vect)
	{
		if (t == target)
			return true;
	}

	return false;
}