#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCompoundBow.WeapCompoundBow_C
// 0x0000 (0x0EB0 - 0x0EB0)
class AWeapCompoundBow_C : public APrimalWeaponBow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompoundBow.WeapCompoundBow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCompoundBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
