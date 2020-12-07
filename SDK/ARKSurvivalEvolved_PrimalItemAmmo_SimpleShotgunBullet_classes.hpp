#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_SimpleShotgunBullet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_SimpleShotgunBullet.PrimalItemAmmo_SimpleShotgunBullet_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemAmmo_SimpleShotgunBullet_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_SimpleShotgunBullet.PrimalItemAmmo_SimpleShotgunBullet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_SimpleShotgunBullet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
