#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Scorched_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSword_Scorched.WeapSword_Scorched_C
// 0x0010 (0x0D40 - 0x0D30)
class AWeapSword_Scorched_C : public AWeapSword_C
{
public:
	class UStaticMeshComponent*                        SM1P;                                                     // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM3P;                                                     // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Scorched.WeapSword_Scorched_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSword_Scorched(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif