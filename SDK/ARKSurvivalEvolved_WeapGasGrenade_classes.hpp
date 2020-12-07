#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGasGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGasGrenade.WeapGasGrenade_C
// 0x0000 (0x0E68 - 0x0E68)
class AWeapGasGrenade_C : public APrimalWeaponGrenade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGasGrenade.WeapGasGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGasGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
