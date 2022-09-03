#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x000C (0x0EC0 - 0x0EB4)
class ATekTrough_C : public AFeedingTroughBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0EB4(0x0004) MISSED OFFSET
	class UPrimalInventoryBP_TekTrough_C*              PrimalInventoryBP_TekTrough_C1;                           // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
