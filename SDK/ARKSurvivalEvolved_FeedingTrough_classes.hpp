#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTrough_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FeedingTrough.FeedingTrough_C
// 0x000C (0x0E20 - 0x0E14)
class AFeedingTrough_C : public AFeedingTroughBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	class UPrimalInventoryBP_FeedingTrough_C*          PrimalInventoryBP_FeedingTrough_C1;                       // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedingTrough.FeedingTrough_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FeedingTrough(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
