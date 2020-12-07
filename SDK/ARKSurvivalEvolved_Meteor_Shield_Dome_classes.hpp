#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_Dome_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Meteor_Shield_Dome.Meteor_Shield_Dome_C
// 0x0000 (0x048C - 0x048C)
class AMeteor_Shield_Dome_C : public AMeteor_Shield_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Meteor_Shield_Dome.Meteor_Shield_Dome_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Meteor_Shield_Dome(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
