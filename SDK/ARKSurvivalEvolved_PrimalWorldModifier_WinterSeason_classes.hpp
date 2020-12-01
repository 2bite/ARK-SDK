#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalWorldModifier_WinterSeason_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalWorldModifier_WinterSeason.PrimalWorldModifier_WinterSeason_C
// 0x0008 (0x04D0 - 0x04C8)
class APrimalWorldModifier_WinterSeason_C : public APrimalWorldModifier
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalWorldModifier_WinterSeason.PrimalWorldModifier_WinterSeason_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PrimalWorldModifier_WinterSeason(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
