#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldBuff_Asteroid_CrateQuality_Up_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldBuff_Asteroid_CrateQuality_Up.WorldBuff_Asteroid_CrateQuality_Up_C
// 0x0010 (0x0040 - 0x0030)
class UWorldBuff_Asteroid_CrateQuality_Up_C : public UPrimalWorldBuffCustomImplement
{
public:
	TArray<struct FCrateTemporaryQualityModifiers>     CrateModifiers;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldBuff_Asteroid_CrateQuality_Up.WorldBuff_Asteroid_CrateQuality_Up_C");
		return ptr;
	}


	void STATIC_PostConstruction();
	void STATIC_PreDeconstruction();
	void ExecuteUbergraph_WorldBuff_Asteroid_CrateQuality_Up(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
