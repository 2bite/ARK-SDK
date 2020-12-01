#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Strike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Meteor_Strike.Meteor_Strike_C
// 0x0000 (0x0650 - 0x0650)
class AMeteor_Strike_C : public AMeteor_launcher_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Meteor_Strike.Meteor_Strike_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Meteor_Strike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
