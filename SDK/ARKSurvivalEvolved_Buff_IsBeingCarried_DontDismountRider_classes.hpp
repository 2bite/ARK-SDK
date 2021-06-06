#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsBeingCarried_DontDismountRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C
// 0x0000 (0x096D - 0x096D)
class ABuff_IsBeingCarried_DontDismountRider_C : public ABuff_IsBeingCarried_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_IsBeingCarried_DontDismountRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
