#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Explosive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCompoundBow_Explosive.WeapCompoundBow_Explosive_C
// 0x0000 (0x0EB8 - 0x0EB8)
class AWeapCompoundBow_Explosive_C : public AWeapCompoundBow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompoundBow_Explosive.WeapCompoundBow_Explosive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCompoundBow_Explosive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
