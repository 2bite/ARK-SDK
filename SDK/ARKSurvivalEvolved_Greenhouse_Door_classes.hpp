#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Door_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Greenhouse_Door.Greenhouse_Door_C
// 0x0000 (0x0B70 - 0x0B70)
class AGreenhouse_Door_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Door.Greenhouse_Door_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Greenhouse_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
