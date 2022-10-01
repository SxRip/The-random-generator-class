#pragma once
#include <random>
#include <limits>

class random
{
public:
	using DLONG = long long;
	using limitsDOUBLE = std::numeric_limits<double>;
	using limitsDLONG = std::numeric_limits<DLONG>;
	using limitsINT = std::numeric_limits<int>;

	using distributionINT = std::uniform_int_distribution<>;
	using distributionDLONG = std::uniform_int_distribution<DLONG>;
	using distributionDOUBLE = std::uniform_real_distribution<>;

	random(const random&) = delete;
	random(const random&&) = delete;

	random& operator=(const random&) = delete;
	random&& operator=(const random&&) = delete;


	random()
		: _mtValues(_randomDevice()), _mtValues64(_randomDevice()),
		_randomGeneratorDOUBLE{ limitsDOUBLE::min(), limitsDOUBLE::max() },
		_randomGeneratorINT{ limitsINT::min(), limitsINT::max() },
		_randomGeneratorDLONG{ limitsDLONG::min(), limitsDLONG::max() }
	{}

	random(DLONG from, DLONG to)
		: _mtValues(_randomDevice()), _mtValues64(_randomDevice()),
		_randomGeneratorDOUBLE{ static_cast<double>(from), static_cast<double>(to) },
		_randomGeneratorINT{ static_cast<int>(from), static_cast<int>(to) },
		_randomGeneratorDLONG{ from, to }
	{}

	inline DLONG get_longlong() noexcept { return _randomGeneratorDLONG(_mtValues64); }
	inline double get_double() noexcept { return _randomGeneratorDOUBLE(_mtValues); }
	inline int get_int() noexcept { return _randomGeneratorINT(_mtValues); }

	inline DLONG max() const noexcept { return _randomGeneratorDLONG.max(); }
	inline DLONG min() const noexcept { return _randomGeneratorDLONG.min(); }
	inline std::pair<DLONG, DLONG> minmax() const noexcept
	{
		return { _randomGeneratorDLONG.min(), _randomGeneratorDLONG.max() };
	};

	inline void set_range(DLONG from, DLONG to)
	{
		if (from > to)
			std::swap(from, to);

		distributionDOUBLE newRandGenDOUBLE{ static_cast<double>(from),
			static_cast<double>(to) };

		distributionINT newRandGenINT{ static_cast<int>(from), static_cast<int>(to) };

		distributionDLONG newRandGenDLONG{ from, to };

		_randomGeneratorDOUBLE = newRandGenDOUBLE;
		_randomGeneratorINT = newRandGenINT;
		_randomGeneratorDLONG = newRandGenDLONG;
	}

private:
	std::random_device _randomDevice;
	std::mt19937 _mtValues;
	std::mt19937_64 _mtValues64;

	distributionDOUBLE _randomGeneratorDOUBLE;
	distributionINT _randomGeneratorINT;
	distributionDLONG _randomGeneratorDLONG;
};