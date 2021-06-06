#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Aberration_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSword_Aberration.WeapSword_Aberration_C
// 0x0010 (0x0DA0 - 0x0D90)
class AWeapSword_Aberration_C : public AWeapSword_C
{
public:
	class UStaticMeshComponent*                        SM1P;                                                     // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM3P;                                                     // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Aberration.WeapSword_Aberration_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSword_Aberration(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
