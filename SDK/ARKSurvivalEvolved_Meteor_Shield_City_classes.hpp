#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_City_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Meteor_Shield_City.Meteor_Shield_City_C
// 0x0000 (0x048C - 0x048C)
class AMeteor_Shield_City_C : public AMeteor_Shield_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Meteor_Shield_City.Meteor_Shield_City_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Meteor_Shield_City(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
