#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalBuffPersistentData_Impregnate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C
// 0x0048 (0x0094 - 0x004C)
class UPrimalBuffPersistentData_Impregnate_C : public UPrimalBuffPersistentData_GenericTimeRemaining_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FARKDinoData                                QueenDinoData;                                            // 0x0050(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	float                                              TotalExperienceGained;                                    // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuffPersistentData_Impregnate.PrimalBuffPersistentData_Impregnate_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalBuffPersistentData_Impregnate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
