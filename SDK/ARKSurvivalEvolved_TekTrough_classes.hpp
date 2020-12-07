#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTrough_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekTrough.TekTrough_C
// 0x000A (0x0E28 - 0x0E1E)
class ATekTrough_C : public AFeedingTroughBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0E1E(0x0002) MISSED OFFSET
	class UPrimalInventoryBP_TekTrough_C*              PrimalInventoryBP_TekTrough_C1;                           // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekTrough.TekTrough_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekTrough(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
