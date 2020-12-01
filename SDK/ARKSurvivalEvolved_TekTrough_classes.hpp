#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0008 (0x0DF0 - 0x0DE8)
class ATekTrough_C : public AFeedingTroughBaseBP_C
{
public:
	class UPrimalInventoryBP_TekTrough_C*              PrimalInventoryBP_TekTrough_C1;                           // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
