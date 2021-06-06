#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PointOfInterest_Base_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfInterest_Base_BP.PointOfInterest_Base_BP_C
// 0x0000 (0x08B0 - 0x08B0)
class APointOfInterest_Base_BP_C : public APointOfInterestActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterest_Base_BP.PointOfInterest_Base_BP_C");
		return ptr;
	}


	struct FPointOfInterestData GetPointOfInterestData();
	void UserConstructionScript();
	void ExecuteUbergraph_PointOfInterest_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
