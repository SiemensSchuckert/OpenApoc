#pragma once
#include "framework/image.h"
#include "game/state/research.h"
#include "game/state/stateobject.h"
#include "game/state/ufopaedia.h"
#include "library/strings.h"
#include <map>

namespace OpenApoc
{
class FacilityType : public StateObject<FacilityType>
{
  public:
	enum class Capacity
	{
		Nothing,
		Quarters,
		Stores,
		Medical,
		Training,
		Psi,
		Repair,
		Chemistry,
		Physics,
		Workshop,
		Aliens
	};
	static const std::map<Capacity, UString> CapacityMap;
	FacilityType();
	UString name;
	bool fixed;
	int buildCost;
	int buildTime;
	int weeklyCost;
	Capacity capacityType;
	int capacityAmount;
	int size;
	sp<Image> sprite;
	ResearchDependency dependency;
	StateRef<UfopaediaEntry> ufopaedia_entry;
	bool isVisible() const;
};
};
