#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_Character_BP_Ocean_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Coel_Character_BP_Ocean.Coel_Character_BP_Ocean_C
// 0x0000 (0x2270 - 0x2270)
class ACoel_Character_BP_Ocean_C : public ACoel_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Coel_Character_BP_Ocean.Coel_Character_BP_Ocean_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Coel_Character_BP_Ocean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
