#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DodoRexTribute_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_DodoRexTribute.PrimalItem_DodoRexTribute_C
// 0x0018 (0x09C0 - 0x09A8)
class UPrimalItem_DodoRexTribute_C : public UPrimalItem_BossTributeGeneric_C
{
public:
	float                                              RangeToCheckForDinos;                                     // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	class FString                                      FailedToCraftString;                                      // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DodoRexTribute.PrimalItem_DodoRexTribute_C");
		return ptr;
	}


	class FString BPAllowCrafting(class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItem_DodoRexTribute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
