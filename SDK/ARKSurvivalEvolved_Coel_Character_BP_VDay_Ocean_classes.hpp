#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_Character_BP_VDay_Ocean_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Coel_Character_BP_VDay_Ocean.Coel_Character_BP_VDay_Ocean_C
// 0x0000 (0x21A8 - 0x21A8)
class ACoel_Character_BP_VDay_Ocean_C : public ACoel_Character_BP_VDay_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Coel_Character_BP_VDay_Ocean.Coel_Character_BP_VDay_Ocean_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Coel_Character_BP_VDay_Ocean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
