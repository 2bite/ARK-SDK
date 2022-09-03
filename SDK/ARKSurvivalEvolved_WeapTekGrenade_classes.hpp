#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekGrenade.WeapTekGrenade_C
// 0x0008 (0x0EA8 - 0x0EA0)
class AWeapTekGrenade_C : public APrimalWeaponGrenade
{
public:
	class UStaticMeshComponent*                        TekGrenade;                                               // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekGrenade.WeapTekGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapTekGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
