#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBoomerang_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBoomerang.WeapBoomerang_C
// 0x0000 (0x0EC0 - 0x0EC0)
class AWeapBoomerang_C : public APrimalWeaponBoomerang
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBoomerang.WeapBoomerang_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBoomerang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
