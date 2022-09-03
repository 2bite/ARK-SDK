#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_Explosive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBow_Explosive.WeapBow_Explosive_C
// 0x0000 (0x0EB0 - 0x0EB0)
class AWeapBow_Explosive_C : public AWeapBow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow_Explosive.WeapBow_Explosive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBow_Explosive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
