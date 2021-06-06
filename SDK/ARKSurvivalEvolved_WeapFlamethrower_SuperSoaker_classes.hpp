#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlamethrower_SuperSoaker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C
// 0x0000 (0x0E65 - 0x0E65)
class AWeapFlamethrower_SuperSoaker_C : public AWeapFlamethrower_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlamethrower_SuperSoaker.WeapFlamethrower_SuperSoaker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFlamethrower_SuperSoaker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
