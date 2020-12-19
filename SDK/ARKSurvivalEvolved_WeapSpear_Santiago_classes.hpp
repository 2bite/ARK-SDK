#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpear_Santiago_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSpear_Santiago.WeapSpear_Santiago_C
// 0x0000 (0x0E80 - 0x0E80)
class AWeapSpear_Santiago_C : public AWeapSpear_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpear_Santiago.WeapSpear_Santiago_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSpear_Santiago(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
