#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ant_Character_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ant_Character_Base.Ant_Character_Base_C
// 0x0000 (0x2108 - 0x2108)
class AAnt_Character_Base_C : public AInsect_Character_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ant_Character_Base.Ant_Character_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ant_Character_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
