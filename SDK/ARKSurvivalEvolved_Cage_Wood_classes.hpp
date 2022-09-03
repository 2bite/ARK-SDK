#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cage_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cage_Wood.Cage_Wood_C
// 0x0000 (0x0B78 - 0x0B78)
class ACage_Wood_C : public ACage_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cage_Wood.Cage_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Cage_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
