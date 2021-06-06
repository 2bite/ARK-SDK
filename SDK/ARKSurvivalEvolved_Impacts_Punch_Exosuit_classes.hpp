#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Impacts_Punch_Exosuit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C
// 0x0000 (0x0888 - 0x0888)
class AImpacts_Punch_Exosuit_C : public AWeapGun_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Impacts_Punch_Exosuit.Impacts_Punch_Exosuit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Impacts_Punch_Exosuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
